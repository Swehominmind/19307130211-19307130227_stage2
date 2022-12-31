#ifndef GUARD_decode_h
#define GUARD_decode_h

#include<QString>
#include<iostream>

typedef unsigned char Byte;
typedef long long int Word;

QString de_Cnd(bool);
QString de_instr(Byte , Byte=0);
QString de_stat(Byte);
QString de_reg(Byte);

#endif
