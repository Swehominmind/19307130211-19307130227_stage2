#include<iostream>
#include"myISA.h"
#include"pipelinefun.h"
#include"initializing.h"

reg_F pipe_F;
reg_D pipe_D;
reg_E pipe_E;
reg_M pipe_M;
reg_W pipe_W;

Word PC;
Byte Stat;
int ins_len;
float cycle = 0, valid_cycle = 0;
int runtime_speed = 0;
Word rax, rbx, rcx, rdx, rsi, rdi, rbp, rsp, r8, r9, r10, r11, r12, r13, r14, r15, RNONE;
bool ZF, SF, OF;
//取指阶段中由逻辑块产生的信号
Word f_pc;
Word f_curpc;
Word f_prePC;
Word f_icode;
Word f_ifun;
Word f_stat;
Word f_valP;
Byte f_rA, f_rB;
Word f_valC;

//译码阶段中由逻辑块产生的信号
Word d_stat;
Word d_valA;
Word d_valB;
Byte d_destE, d_destM;
Byte d_srcA, d_srcB;

//执行过程中由逻辑块产生的信号
Word e_stat;
Word argA, argB;
alu_t alufunc;
Word e_valE;
bool e_cnd = true;
Word e_destE;

//在访存阶段由逻辑块产生的信号
Word m_valM;
Word m_stat;

reg_D D_bubble;
reg_E E_bubble;
reg_M M_bubble;
reg_W W_bubble;
void init_all()
{
    //initialize D_bubble
    D_bubble.stat = SBUB;
    D_bubble.icode = I_NOP;
    D_bubble.curpc = 0;
    //initialize E_bubble
    E_bubble.stat = SBUB;
    E_bubble.icode = I_NOP;
    E_bubble.srcA = R_NONE;
    E_bubble.srcB = R_NONE;
    E_bubble.dstE = R_NONE;
    E_bubble.dstM = R_NONE;
    E_bubble.curpc = 0;
    //initialize M_bubble
    M_bubble.stat = SBUB;
    M_bubble.icode = I_NOP;
    M_bubble.dstE = R_NONE;
    M_bubble.dstM = R_NONE;
    M_bubble.curpc = 0;
    //initialize W_bubble
    W_bubble.stat = SBUB;
    W_bubble.icode = I_NOP;
    W_bubble.dstE = R_NONE;
    W_bubble.dstM = R_NONE;
    W_bubble.curpc = 0;

    rax = rbx = rcx = rdx = rsi = rdi = rbp = rsp = r8 = r9 = r10 = r11 = r12 = r13 = r14 = r15 = RNONE = 0;
    PC = 0;

    pipe_F.predPC = 0;
    pipe_F.curpc = 0;
    pipe_D = D_bubble;
    pipe_E = E_bubble;
    pipe_M = M_bubble;
    pipe_W = W_bubble;

    ZF = SF = OF = false;
    Stat = SAOK;
}

void F_updata(bool is_F_s) {
    if (!is_F_s) {
        pipe_F.predPC = f_prePC;
        pipe_F.curpc = f_prePC;
    }
}

void D_updata(bool is_D_b,bool is_D_s) {
    if (is_D_b) {
        pipe_D = D_bubble;
    }
    else if (!is_D_s) {
        pipe_D.icode = f_icode;
        pipe_D.ifun = f_ifun;
        pipe_D.rA = f_rA;
        pipe_D.rB = f_rB;
        pipe_D.stat = f_stat;
        pipe_D.valC = f_valC;
        pipe_D.valP = f_valP;
        pipe_D.curpc = f_curpc;
    }
}
void E_updata(bool is_E_b) {
    if (is_E_b)
    {
        pipe_E = E_bubble;
    }
    else
    {
        pipe_E.icode = pipe_D.icode;
        pipe_E.ifun = pipe_D.ifun;
        pipe_E.stat = pipe_D.stat;
        pipe_E.valC = pipe_D.valC;
        pipe_E.valA = d_valA;
        pipe_E.valB = d_valB;
        pipe_E.dstE = d_destE;
        pipe_E.dstM = d_destM;
        pipe_E.srcA = d_srcA;
        pipe_E.srcB = d_srcB;
        pipe_E.curpc = pipe_D.curpc;
    }
}

void M_updata(bool is_M_b) {
    if (is_M_b)
    {
        pipe_M = M_bubble;
    }
    else
    {
        pipe_M.stat = pipe_E.stat;
        pipe_M.icode = pipe_E.icode;
        pipe_M.valA = pipe_E.valA;
        pipe_M.dstM = pipe_E.dstM;
        pipe_M.dstE = e_destE;
        pipe_M.valE = e_valE;
        pipe_M.Cnd = e_cnd;
        pipe_M.curpc = pipe_E.curpc;
    }
}

void W_updata(bool is_W_s) {
    if (!is_W_s) {
        pipe_W.icode = pipe_M.icode;
        pipe_W.dstE = pipe_M.dstE;
        pipe_W.dstM = pipe_M.dstM;
        pipe_W.stat = m_stat;
        pipe_W.valE = pipe_M.valE;
        pipe_W.valM = m_valM;
        pipe_W.curpc = pipe_M.curpc;
    }
}

void print_rg()
{
    printf("rax:	%016llx", rax);
    printf(" rcx:	%016llx", rcx);
    printf(" rdx:	%016llx", rdx);
    printf(" rbx:	%016llx\n", rbx);
    printf("rsp:	%016llx", rsp);
    printf(" rbp:	%016llx", rbp);
    printf(" rsi:	%016llx", rsi);
    printf(" r14:	%016llx\n", r14);
    printf("r13:	%016llx", r13);
    printf(" r12:	%016llx", r12);
    printf(" r11:	%016llx", r11);
    printf(" r10:	%016llx\n", r10);
    printf(" r9 :	%016llx", r9);
    printf(" r8 :	%016llx", r8);
    printf(" rdi:	%016llx\n", rdi);
    printf("\n");
    //system("pause");
}

void print_stat() {
    switch (Stat)
    {
    case SAOK:
        printf("AOK\n");
        break;
    case SHLT:
        printf("HLT\n");
        break;
    case SINS:
        printf("INS\n");
        break;
    case SADR:
        printf("ADR\n");
        break;
    default:
        break;
    }
}
