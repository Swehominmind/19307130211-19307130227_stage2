#ifndef GUARD_myISA_h
#define GUARD_myISA_h
#define SAOK 0
#define SHLT 1
#define SADR 2
#define SINS 3
#define SBUB 4
#define MEM_POW 13
#define MEM_SZ (1 << 13)//64MB

#include<iostream>
#include<Windows.h>
#include<map>
#include<vector>
#include<string>
#include<QString>
typedef enum {
    I_HALT, I_NOP, I_RRMOVQ, I_IRMOVQ, I_RMMOVQ, I_MRMOVQ,
    I_ALU, I_JMP, I_CALL, I_RET, I_PUSHQ, I_POPQ,
    I_IOPQ, I_POP2
} itype_t;

typedef unsigned char Byte;
typedef long long int Word;
typedef struct {
    int len;
    Word maxaddr;
    Byte* contents;
    bool* if_can_write;
    std::map<Word, int> ref_table;
    std::vector<QString> insts;
} Mem, *Mem_p;
int load_mem(Mem_p m,std::istream& filename);
inline Byte number(Byte c) { return c - '0'; }
Mem_p init_mem(int);
void clear_mem(Mem_p);
void free_mem(Mem_p);
bool get_Byte(Mem_p, Word, Byte*);
bool get_Word(Mem_p, Word, Word*);
bool set_Byte(Mem_p,Word,Byte);
bool set_Word(Mem_p,Word,Word);

struct reg_F {
    Word predPC;
    Word curpc;
};
struct reg_D {
    Byte stat;
    Byte icode, ifun, rA, rB;
    Word valC, valP;
    Word curpc;
};
struct reg_E {
    Byte stat;
    Byte icode, ifun, rA, rB;
    Word valC, valA, valB;
    Byte dstE, dstM, srcA, srcB;
    Word curpc;
};
struct reg_M{
    Byte stat;
    Byte icode;
    bool Cnd;
    Word valE, valA;
    Byte dstE, dstM;
    Word curpc;
};
struct reg_W {
    Byte stat;
    Byte icode;
    Word valE, valM;
    Byte dstE, dstM;
    Word curpc;
};
typedef enum {
    RAX, RCX, RDX, RBX,
    RSP, RBP, RSI, RDI,
    R8, R9, R10, R11,
    R12, R13, R14, R_NONE = 0xF, ERR
} reg_id_t;


Word get_rg_val(Byte x);
void set_rg_val(Byte x,Word val);

typedef enum { A_ADD, A_SUB, A_AND, A_XOR, A_NONE } alu_t;
typedef enum { C_YES, C_LE, C_L, C_E, C_NE, C_GE, C_G } cond_t;

Word compute_alu(alu_t op, Word argA, Word argB);
void setcc(alu_t op, Word argA, Word argB);
bool get_Cnd(cond_t bcond);

void Ins_view(Mem_p m);
void runtime_control(int x);

#endif
