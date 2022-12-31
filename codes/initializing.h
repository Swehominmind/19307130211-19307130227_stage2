#ifndef GUARD_INITIALIZE
#define GUARD_INITIALIZE
#include<iostream>
#include"myISA.h"
#include"pipelinefun.h"

void init_all();

void F_updata(bool);
void D_updata(bool,bool);
void E_updata(bool);
void M_updata(bool);
void W_updata(bool);

void print_rg();
void print_stat();
#endif // !GUARD_INITIALIZ

