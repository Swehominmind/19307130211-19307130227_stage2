#include"decode.h"

QString instr[13] = {"halt","nop","rrmovq","irmovq","rmmovq","mrmovq","op","jump","call","ret","pushq","popq","iopq"};
QString mystat[5] = {"AOK","HLT","ADR","INS","BUB"};
QString Alu[4] = { "addq","subq","andq","xorq" };
QString iop[4]= { "iaddq","isubq","iandq","ixorq" };
QString cmov[7] = {"rrmovq","cmovle","cmovl","cmove","comvne","cmovge","cmovg"};
QString jmp[7] = { "jmp","jle","jl","je","jne","jge","jg" };
QString Regs[16] = { "rax","rcx","rdx","rbx","rsp","rbp","rsi","rdi","r8","r9","r10","r11","r12","r13","r14","RNONE" };
QString Cnd[2] = {"N", "Y"};

QString de_Cnd(bool cnd)
{
    return Cnd[cnd];
}
QString de_instr(Byte icode, Byte ifun) {
    if(icode > 12)
        return "NO INS";
	if (icode == 2) {
        if(ifun >= 7)
            return "NO INS";
		return cmov[ifun];
	}
	if (icode == 6) 
	{
        if(ifun >= 4)
            return "NO INS";
		return Alu[ifun];
	}
	if (icode == 7)
	{
        if(ifun >= 7)
            return "NO INS";
		return jmp[ifun];
	}
    if (icode == 12) {
        if(icode >= 4)
            return "NO INS";
        return iop[ifun];
    }
        return instr[icode];
}

QString de_stat(Byte i_stat) {
	return mystat[i_stat];
}

QString de_reg(Byte i_reg) {
	return Regs[i_reg];
}
