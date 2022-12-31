#include<iostream>
#include<algorithm>
#include"myISA.h"
#include"pipelinefun.h"
#include"initializing.h"

bool dmem_error=false, imem_error=false, instr_vaild=false;

extern Mem_p memory;
extern Word PC;
extern int ins_len;

extern reg_F pipe_F;
extern reg_D pipe_D;
extern reg_E pipe_E;
extern reg_M pipe_M;
extern reg_W pipe_W;

extern Byte Stat;

//取指阶段中由逻辑块产生的信号
extern Word f_pc;
extern Word f_curpc;
extern Word f_prePC;
extern Word f_icode;
extern Word f_ifun;
extern Word f_stat;
extern Word f_valP;
extern Byte f_rA, f_rB;
extern Word f_valC;

//译码阶段中由逻辑块产生的信号
extern Word d_stat;
extern Word d_valA;
extern Word d_valB;
extern Byte d_destE, d_destM;
extern Byte d_srcA, d_srcB;

//执行过程中由逻辑块产生的信号
extern Word e_stat;
extern Word argA, argB;
extern alu_t alufunc;
extern Word e_valE;
extern bool e_cnd;
extern Word e_destE;

//在访存阶段由逻辑块产生的信号
extern Word m_valM;
extern Word m_stat;

void set_f_pc() {
    if (pipe_M.icode == I_JMP && (!pipe_M.Cnd)) {
        f_pc = pipe_M.valA;
    }
    else if (pipe_W.icode == I_RET) {
        f_pc = pipe_W.valM;
    }
    else {
        f_pc = pipe_F.predPC;
    }
}
bool get_need_rg() {
    bool r;
    switch (f_icode)
    {
    case I_RRMOVQ:
    case I_ALU:
    case I_PUSHQ:
    case I_POPQ:
    case I_IRMOVQ:
    case I_RMMOVQ:
    case I_MRMOVQ:
    case I_IOPQ:
        r = true;
        break;
    default:
        r = false;
        break;
    }
    return r;
}
bool get_need_valc(){
    bool r;
    switch (f_icode)
    {
    case I_IRMOVQ:
    case I_RMMOVQ:
    case I_MRMOVQ:
    case I_JMP:
    case I_CALL:
    case I_IOPQ:
        r = true;
        break;
    default:
        r = false;
        break;
    }
    return r;
}
void set_f_predict_pc() {
    switch (f_icode)
    {
    case I_JMP:
    case I_CALL:
        f_prePC = f_valC;
        break;
    default:
        f_prePC = f_valP;
        break;
    }
}
void set_f_stat() {
    if (imem_error) {
        f_stat = SADR;
    }
    else if (instr_vaild) {
        f_stat = SINS;
    }
    else if (f_icode == I_HALT) {
        f_stat = SHLT;
    }
    else f_stat = SAOK;
}
void fetch() {
    Byte cr=0, ci=0;
    Word pc_addn=1;
    bool need_valc;
    bool need_rg;
    dmem_error = false, imem_error = false, instr_vaild = false;
    f_rA = R_NONE;
    f_rB = R_NONE;
    set_f_pc();
    f_curpc = pc_addn = f_pc;
    f_valP = f_pc+1;
    if (!get_Byte(memory, f_pc, &ci)) {
        imem_error = true;
    }
    f_icode = ((ci >> 4) & 0xf);
    f_ifun = (ci & 0xf);
    if (f_icode >= 13) {
        instr_vaild = true;
    }
    if ((f_icode != I_JMP && f_icode != I_RRMOVQ && f_icode != I_ALU && f_icode != I_IOPQ) && f_ifun > 0) {
        instr_vaild = true;
    }
    if ((f_icode != I_JMP && f_icode != I_RRMOVQ) && f_ifun >= 4) {
        instr_vaild = true;
    }
    if (f_ifun >= 7) {
        instr_vaild = true;
    }

    need_valc = get_need_valc();
    need_rg = get_need_rg();
    if (need_rg) {
        if (!get_Byte(memory, ++f_pc, &cr)) {
            dmem_error = true;
        }
        f_rA = ((cr >> 4) & 0xf);
        f_rB = (cr & 0xf);
        f_valP += 1;
        if ((f_icode == I_IRMOVQ || f_icode == I_IOPQ) && f_rA != R_NONE) {
            instr_vaild = true;
        }
        if (f_icode == I_PUSHQ && f_rB != R_NONE) {
            instr_vaild = true;
        }
        if (f_icode == I_RRMOVQ && (f_rA == R_NONE || f_rB == R_NONE)) {
            instr_vaild = true;
        }
    }
    if (need_valc) {
        if (!get_Word(memory, ++f_pc, &f_valC)) {
            dmem_error = true;
        }
        if ((f_icode == I_IRMOVQ || f_icode == I_MRMOVQ || f_icode == I_RMMOVQ || f_icode == I_IOPQ) && f_pc + 8 > ins_len) {
            instr_vaild = true;
        }
        if ((f_icode == I_CALL || f_icode == I_JMP) && f_pc + 8 > ins_len) {
            instr_vaild = true;
        }
        f_valP += 8;
    }
    PC = f_valP;
    if (!instr_vaild) {
        for (Word i = pc_addn; i < PC; i++) {
            memory->if_can_write[i] = false;
        }
    }
    set_f_predict_pc();
    set_f_stat();
}


void getsrcA() {
    switch (pipe_D.icode)
    {
    case I_RRMOVQ:
    case I_RMMOVQ:
    case I_ALU:
    case I_PUSHQ:
        d_srcA = pipe_D.rA;
        break;
    case I_POPQ:
    case I_RET:
        d_srcA = 4;
        break;
    default:
        d_srcA = 15;
        break;
    }
}
void getsrcB() {
    switch (pipe_D.icode)
    {
    case I_ALU:
    case I_RMMOVQ:
    case I_MRMOVQ:
    case I_IOPQ:
        d_srcB = pipe_D.rB;
        break;
    case I_PUSHQ:
    case I_POPQ:
    case I_CALL:
    case I_RET:
        d_srcB = RSP;
        break;
    default:
        d_srcB = R_NONE;
        break;
    }
}

Byte get_d_destE() {
    Byte dest;
    switch (pipe_D.icode)
    {
    case I_RRMOVQ:
    case I_ALU:
    case I_IRMOVQ:
    case I_IOPQ:
        dest = pipe_D.rB;
        break;
    case I_PUSHQ:
    case I_POPQ:
    case I_CALL:
    case I_RET:
        dest = RSP;
        break;
    default:
        dest = R_NONE;
        break;
    }
    return dest;
}
Byte get_d_destM() {
    Byte dest;
    switch (pipe_D.icode)
    {
    case I_MRMOVQ:
    case I_POPQ:
        dest = pipe_D.rA;
        break;
    default:
        dest = R_NONE;
        break;
    }
    return dest;
}
Word get_d_valA() {
    Word val;
    if (pipe_D.icode == I_CALL || pipe_D.icode == I_JMP) {
        val = pipe_D.valP;
    }
    else if (d_srcA == e_destE) {
        val = e_valE;
    }
    else if (d_srcA == pipe_M.dstM) {
        val = m_valM;
    }
    else if (d_srcA == pipe_M.dstE) {
        val = pipe_M.valE;
    }
    else if (d_srcA == pipe_W.dstM) {
        val = pipe_W.valM;
    }
    else if (d_srcA == pipe_W.dstE) {
        val = pipe_W.valE;
    }
    else {
        val = get_rg_val(d_srcA);
    }
    return val;
}
Word get_d_valB() {
    Word val;
    if (d_srcB == e_destE) {
        val = e_valE;
    }
    else if (d_srcB == pipe_M.dstM) {
        val = m_valM;
    }
    else if (d_srcB == pipe_M.dstE) {
        val = pipe_M.valE;
    }
    else if (d_srcB == pipe_W.dstM) {
        val = pipe_W.valM;
    }
    else if (d_srcB == pipe_W.dstE) {
        val = pipe_W.valE;
    }
    else {
        val = get_rg_val(d_srcB);
    }
    return val;
}
void decode() {

    getsrcA();

    getsrcB();

    d_destE = get_d_destE();
    d_destM = get_d_destM();
    d_valA = get_d_valA();
    d_valB = get_d_valB();
}

Word getalu_A() {
    Word argA;
    switch(pipe_E.icode)
    {
    case I_RRMOVQ:
    case I_ALU:
        argA = pipe_E.valA;
        break;
    case I_IRMOVQ:
    case I_RMMOVQ:
    case I_MRMOVQ:
    case I_IOPQ:
        argA = pipe_E.valC;
        break;
    case I_CALL:
    case I_PUSHQ:
        argA = -8;
        break;
    case I_RET:
    case I_POPQ:
        argA = 8;
        break;
    default:
        argA = 0;
        break;
    }
    return argA;
}
Word getalu_B() {
    Word argB;
    switch (pipe_E.icode)
    {
    case I_RMMOVQ:
    case I_MRMOVQ:
    case I_ALU:
    case I_CALL:
    case I_PUSHQ:
    case I_RET:
    case I_POPQ:
    case I_IOPQ:
        argB = pipe_E.valB;
        break;
    case I_RRMOVQ:
    case I_IRMOVQ:
        argB = 0;
        break;
    default:
        argB = 0;
        break;
    }
    return argB;
}

bool need_set_cc() {
    if ((pipe_E.icode == I_ALU || pipe_E.icode == I_IOPQ) && (m_stat == SAOK || m_stat == SBUB) && (pipe_W.stat == SAOK || pipe_W.stat == SBUB)) {
        return true;
    }
    else return false;
}

void execute() {

    /*pipe_E.stat = pipe_D.stat;
    pipe_E.icode = pipe_E.icode;
    pipe_E.ifun = pipe_D.ifun;
    pipe_E.valC = pipe_D.valC;*/

    if (pipe_E.icode == I_ALU || pipe_E.icode == I_IOPQ)
    {
        alufunc = (alu_t)pipe_E.ifun;
    }
    else alufunc = A_ADD;
    argA = getalu_A();
    argB = getalu_B();
    if (pipe_E.icode == I_JMP || pipe_E.icode == I_RRMOVQ)
    {
        e_cnd = get_Cnd((cond_t)pipe_E.ifun);
    }
    e_valE=compute_alu(alufunc,argA,argB);

    if (need_set_cc()) {
        setcc(alufunc, argA, argB);
    }

    e_destE = pipe_E.dstE;
    if (pipe_E.icode == I_RRMOVQ && (!e_cnd)) {
        e_destE = R_NONE;
    }
    /*pipe_M.stat = pipe_E.stat;
    pipe_M.icode = pipe_E.icode;
    pipe_M.Cnd = e_cnd;
    pipe_M.valE = e_val;
    pipe_M.valA = pipe_E.valA;
    pipe_M.dstE = e_dest;
    pipe_M.dstM = pipe_E.dstM;*/
}

Word get_mem_addr() {
    Word addr;
    switch (pipe_M.icode)
    {
    case I_RMMOVQ:
    case I_PUSHQ:
    case I_CALL:
    case I_MRMOVQ:
        addr = pipe_M.valE;
        break;
    case I_POPQ:
    case I_RET:
        addr = pipe_M.valA;
        break;
    default:
        addr = 0;
        break;
    }
    return addr;
}


void get_m_stat() {
    if (dmem_error) {
        m_stat = SADR;
    }
    else m_stat = pipe_M.stat;
}
void access_memory() {
    Word mem_addr = get_mem_addr();
    bool mem_read=false,mem_write=false;

    if (pipe_M.icode == I_MRMOVQ || pipe_M.icode == I_POPQ || pipe_M.icode == I_RET) {
        mem_read = true;
    }
    if (pipe_M.icode == I_RMMOVQ || pipe_M.icode == I_PUSHQ || pipe_M.icode == I_CALL) {
        mem_write = true;
    }
    if (mem_read) {
        if (!get_Word(memory, mem_addr, &m_valM))
        {
            dmem_error = true;
        }
    }
    if (mem_write) {
        if (!(set_Word(memory, mem_addr, pipe_M.valA)))
        {
            dmem_error = true;
        }
    }
    get_m_stat();
}

void set_final_stat() {
    if (pipe_W.stat == SBUB)
    {
        Stat = SAOK;
    }
    else Stat = pipe_W.stat;
}

bool set_wb_M() {
    bool r;
    switch (pipe_W.icode)
    {
    case I_MRMOVQ:
    case I_POPQ:
        r = true;
        break;
    default:
        r = false;
        break;
    }
    return r;
}

bool set_wb_E() {
    bool r;
    switch (pipe_W.icode)
    {
    case I_IRMOVQ:
    case I_RRMOVQ:
    case I_PUSHQ:
    case I_ALU:
    case I_POPQ:
    case I_CALL:
    case I_RET:
    case I_IOPQ:
        r = true;
        break;
    default:
        r = false;
        break;
    }
    return r;
}

void write_back() {
    bool need_writeback_M = false;
    bool need_writeback_E = false;
    need_writeback_M = set_wb_M();
    need_writeback_E = set_wb_E();
    if (need_writeback_E) {
        set_rg_val(pipe_W.dstE, pipe_W.valE);
    }
    if (need_writeback_M) {
        set_rg_val(pipe_W.dstM, pipe_W.valM);
    }
}

bool is_F_stall()
{
    if (pipe_E.icode == I_MRMOVQ || pipe_E.icode == I_POPQ)
        if (pipe_E.dstM == d_srcA || pipe_E.dstM == d_srcB)
            return true;
    if (I_RET == pipe_D.icode || I_RET == pipe_E.icode || I_RET == pipe_M.icode)
        return true;
    return false;
}
bool is_D_stall()
{
    if (pipe_E.icode == I_MRMOVQ || pipe_E.icode == I_POPQ)
    {
        if (pipe_E.dstM == d_srcA || pipe_E.dstM == d_srcB) {
            return true;
        }
    }
    return false;
}
bool is_D_bubble()
{
    if (pipe_E.icode == I_JMP && !e_cnd)
        return true;
    if (pipe_E.icode != I_MRMOVQ && pipe_E.icode != I_POPQ|| (pipe_E.dstM != d_srcA || pipe_E.dstM != d_srcB))
        if (I_RET == pipe_D.icode || I_RET == pipe_E.icode || I_RET == pipe_M.icode)
                return true;
    return false;
}
bool is_E_bubble()
{
    if (pipe_E.icode == I_JMP && !e_cnd)
        return true;
    if (pipe_E.icode == I_MRMOVQ || pipe_E.icode==I_POPQ)
        if (pipe_E.dstM == d_srcA || pipe_E.dstM == d_srcB)
            return true;
    return false;
}
bool is_M_bubble()
{
    if (pipe_M.stat == SADR || pipe_M.stat == SINS || pipe_M.stat == SHLT)
        return true;
    if (pipe_W.stat == SADR || pipe_W.stat == SINS || pipe_W.stat == SHLT)
        return true;
    return false;
}
bool is_W_stall()
{
    if (pipe_W.stat == SADR || pipe_W.stat == SINS || pipe_W.stat == SHLT)
        return true;
    return false;
}

void updata() {
    bool is_F_s = is_F_stall();
    bool is_D_b = is_D_bubble();
    bool is_D_s = is_D_stall();
    bool is_E_b = is_E_bubble();
    bool is_M_b = is_M_bubble();
    bool is_W_s = is_W_stall();

    W_updata(is_W_s);

    M_updata(is_M_b);

    E_updata(is_E_b);

    F_updata(is_F_s);

    D_updata(is_D_b,is_D_s);

}
