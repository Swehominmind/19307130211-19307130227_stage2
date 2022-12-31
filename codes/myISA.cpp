#include"myISA.h"
#include<string.h>
#include<fstream>


extern Word rax, rbx, rcx, rdx, rsi, rdi, rbp, rsp, r8, r9, r10, r11, r12, r13, r14, r15, RNONE;
extern Word PC;
//Byte stat;
extern bool ZF, SF, OF;


//reg_F pipe_F;
//reg_D pipe_D;
//reg_E pipe_E;
//reg_M pipe_M;
//reg_W pipe_W;
Mem_p init_mem(int len)//init a memory with size len Bytes
{
    Mem_p result = new Mem;
    len = len + 63 >> 6 << 6;
    result->len = len;
    result->contents = new Byte[len];
    result->if_can_write = new bool[len];
    result->ref_table.clear();
    result->insts.clear();
    memset(result->if_can_write, true, len);
    return result;
}
void clear_mem(Mem_p m)
{
    memset(m->contents, 0, m->len);
    memset(m->if_can_write, true, m->len);
    m->ref_table.clear();
    m->insts.clear();
}
void free_mem(Mem_p m)
{
    delete[] m->contents;
    delete[] m->if_can_write;
    m->ref_table.clear();
    m->insts.clear();
    delete m;
}
bool get_Byte(Mem_p m, Word pos, Byte* dest)
{
    if (pos < 0 || pos >= m->len)
        return false;
    *dest = m->contents[pos];
    return true;
}
bool get_Word(Mem_p m, Word pos, Word* dest)
{
    Word val = 0;
    if (pos < 0 || pos+8 >= m->len)
        return false;
    for (int i = 0;i < 8;i++)
    {
        Word b = m->contents[pos + i] & 0xff;
        val = val | (b << (i << 3));
    }
    *dest = val;
    return true;
}
bool set_Byte(Mem_p m, Word pos, Byte val) {
    if ((pos < 0 || pos >= m->len)&&m->if_can_write[pos])
        return false;
    m->contents[pos] = val;
    return true;
}
bool set_Word(Mem_p m, Word pos, Word val) {
    if ((pos<0 || pos + 8>m->len)&&m->if_can_write[pos])
        return false;
    for (int i = 0; i < 8; i++) {
        if (!m->if_can_write[pos]) return false;
        m->contents[pos + i] = (Byte)val & 0xff;
        val >>= 8;
    }
    return true;
}
Word get_rg_val(Byte rgs) {
    Word val;
    switch (rgs)
    {
    case RAX:
        val = rax;
        break;
    case RCX:
        val = rcx;
        break;
    case RDX:
        val = rdx;
        break;
    case RBX:
        val = rbx;
        break;
    case RSP:
        val = rsp;
        break;
    case RBP:
        val = rbp;
        break;
    case RSI:
        val = rsi;
        break;
    case RDI:
        val = rdi;
        break;
    case R8:
        val = r8;
        break;
    case R9:
        val = r9;
        break;
    case R10:
        val = r10;
        break;
    case R11:
        val = r11;
        break;
    case R12:
        val = r12;
        break;
    case R13:
        val = r13;
        break;
    case R14:
        val = r14;
        break;
    case R_NONE:
        val = 0;
        break;
    default:
        val = 0;
        break;
    }
    return val;
}
void set_rg_val(Byte rgs,Word val) {
    switch (rgs)
    {
    case RAX:
        rax = val;
        break;
    case RCX:
        rcx = val;
        break;
    case RDX:
        rdx = val;
        break;
    case RBX:
        rbx = val;
        break;
    case RSP:
        rsp = val;
        break;
    case RBP:
        rbp = val;
        break;
    case RSI:
        rsi = val;
        break;
    case RDI:
        rdi = val;
        break;
    case R8:
        r8 = val;
        break;
    case R9:
        r9 = val;
        break;
    case R10:
        r10 = val;
        break;
    case R11:
        r11 = val;
        break;
    case R12:
        r12 = val;
        break;
    case R13:
        r13 = val;
        break;
    case R14:
        r14 = val;
        break;
    case R_NONE:
        break;
    default:
        break;
    }
}

Word compute_alu(alu_t op, Word argA, Word argB)
{
    Word val;
    switch (op) {
    case A_ADD:
        val = argA + argB;
        break;
    case A_SUB:
        val = argB - argA;
        break;
    case A_AND:
        val = argA & argB;
        break;
    case A_XOR:
        val = argA ^ argB;
        break;
    default:
        val = 0;
    }
    return val;
}

void setcc(alu_t op, Word argA, Word argB) {
    Word val = compute_alu(op, argA, argB);
    ZF = (val == 0);
    SF = ((Word)val < 0);
    switch (op)
    {
    case A_ADD:
        OF = (((Word)argA < 0) == ((Word)argB < 0)) &&
            (((Word)val < 0) != ((Word)argA < 0));
        break;
    case A_SUB:
        OF = (((Word)argA > 0) == ((Word)argB < 0)) &&
            (((Word)val < 0) != ((Word)argB < 0));
        break;
    case A_AND:
    case A_XOR:
        OF = 0;
        break;
    default:
        OF = 0;
    }
}

bool get_Cnd(cond_t bcond) {
    bool jump = false;
    switch (bcond)
    {
    case C_YES:
        jump = true;
        break;
    case C_LE:
        jump = (SF ^ OF) | ZF;
        break;
    case C_L:
        jump = SF ^ OF;
        break;
    case C_E:
        jump = ZF;
        break;
    case C_NE:
        jump = ZF^ 1;
        break;
    case C_GE:
        jump = SF ^ OF ^ 1;
        break;
    case C_G:
        jump = (SF ^ OF ^ 1) & (ZF ^ 1);
        break;
    default:
        jump = false;
        break;
    }
    return jump;
}

int hex2dig(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return c - 'A'+10;
    }
    else if (c >= 'a' && c <= 'z')
    {
        return c - 'a'+10;
    }
}
#define LINELEN 4096
int load_mem(Mem_p m, std::istream & filename) {
    char buf[LINELEN];
    char c, ch, cl;
    int byte_cnt = 0;
    int lineno = 0;
    Word bytepos = 0;
    int cnt = 0;
    while (filename.getline(buf,1024))
    {
        int cpos = 0;

        lineno++;
        while (isspace((int)buf[cpos]))
        {
            cpos++;
        }
        if (buf[cpos] != '0' || (buf[cpos + 1] != 'x' && buf[cpos + 1] != 'X'))
            continue;
        cpos += 2;
        bytepos = 0;
        while (isxdigit((int)(c = buf[cpos])))
        {
            cpos++;
            bytepos = bytepos * 16 + hex2dig(c);
        }
        //m->ref_table[bytepos] = lineno;
        while (isspace((int)buf[cpos])) {
            cpos++;
        }

        if (buf[cpos++] != ':') {
            return 0;
        }
        while (isspace((int)buf[cpos])) {
            cpos++;
        }
        if (isxdigit((int)(ch = buf[cpos])) && isxdigit((int)(cl = buf[cpos + 1])))
        {
            m->ref_table[bytepos] = cnt++;
            m->insts.push_back(buf);
        }
        else {
            byte_cnt = byte_cnt > bytepos ? byte_cnt : bytepos;
            continue;
        }
        while (isxdigit((int)(ch = buf[cpos++])) && isxdigit((int)(cl = buf[cpos++])))
        {
            Byte byte = 0;
            if (bytepos >= m->len) {
                return 0;
            }
            byte = hex2dig(ch) * 16 + hex2dig(cl);
            m->contents[bytepos++] = byte;
            byte_cnt++;
        }
        //m->end_table[cnt] = bytepos;
    }
    return byte_cnt;
}

/*void Ins_view(Mem_p m) {
    auto iter = m->ref_table.begin();
    for (; iter != m->ref_table.end(); iter++) {
        std::cout << m->insts[iter->second - 1];
        printf("\n");
    }
}
*/
