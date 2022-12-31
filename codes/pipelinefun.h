#ifndef GURD_PIPEFUN_H
#define GURD_PIPEFUN_H

void fetch();

void decode();

void execute();

void access_memory();

void write_back();

void updata();

bool is_F_stall();

bool is_D_stall();

bool is_W_stall();

bool is_D_bubble();

bool is_E_bubble();

bool is_M_bubble();

void set_final_stat();

#endif // GURD_PIPEFUN_H
