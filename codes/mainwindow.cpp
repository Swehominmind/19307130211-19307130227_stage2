#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<string>
#include"myISA.h"
#include"pipelinefun.h"
#include "initializing.h"
#include <fstream>
#include <QString>
#include <QTimer>
#include <cmath>
#include "decode.h"
extern Word PC;
extern Byte Stat;
extern Word rax, rbx, rcx, rdx, rsi, rdi, rbp, rsp, r8, r9, r10, r11, r12, r13, r14, r15, RNONE;
extern reg_F pipe_F;
extern reg_D pipe_D;
extern reg_E pipe_E;
extern reg_M pipe_M;
extern reg_W pipe_W;
extern int ins_len;
extern int runtime_speed;
extern float cycle, valid_cycle;
extern bool ZF, SF, OF;
Mem_p memory;

//std::string de_instr(Byte icode, Byte ifun)
void setrg(Ui::MainWindow *ui)
{
    //registers
    ui->rax->setText("0x" + QString::number(rax, 16));
    ui->rcx->setText("0x" + QString::number(rcx, 16));
    ui->rdx->setText("0x" + QString::number(rdx, 16));
    ui->rbx->setText("0x" + QString::number(rbx, 16));
    ui->rsp->setText("0x" + QString::number(rsp, 16));
    ui->rbp->setText("0x" + QString::number(rbp, 16));
    ui->rsi->setText("0x" + QString::number(rsi, 16));
    ui->r14->setText("0x" + QString::number(r14, 16));
    ui->r13->setText("0x" + QString::number(r13, 16));
    ui->r12->setText("0x" + QString::number(r12, 16));
    ui->r11->setText("0x" + QString::number(r11, 16));
    ui->r10->setText("0x" + QString::number(r10, 16));
    ui->r9->setText("0x" + QString::number(r9, 16));
    ui->r8->setText("0x" + QString::number(r8, 16));
    ui->rdi->setText("0x" + QString::number(rdi, 16));
    ui->stat->setText(de_stat(Stat));
    //D
    ui->D_Stat->setText(de_stat(pipe_D.stat));
    ui->D_instr->setText(de_instr(pipe_D.icode, pipe_D.ifun));
    ui->D_rA->setText(de_reg(pipe_D.rA));
    ui->D_rB->setText(de_reg(pipe_D.rB));
    ui->D_valC->setText("0x" + QString::number(pipe_D.valC, 16));
    ui->D_valP->setText("0x" + QString::number(pipe_D.valP, 16));
    //ui->d_valP->setText("0x" + QString::number(pipe_D.curpc, 16));
    //E
    ui->E_Stat->setText(de_stat(pipe_E.stat));
    ui->E_instr->setText(de_instr(pipe_E.icode, pipe_E.ifun));
    ui->E_valC->setText("0x" + QString::number(pipe_E.valC, 16));
    ui->E_valA->setText("0x" + QString::number(pipe_E.valA, 16));
    ui->E_valB->setText("0x" + QString::number(pipe_E.valB, 16));
    ui->E_srcA->setText(de_reg(pipe_E.srcA));
    ui->E_srcB->setText(de_reg(pipe_E.srcB));
    ui->E_dstE->setText(de_reg(pipe_E.dstE));
    ui->E_dstM->setText(de_reg(pipe_E.dstM));
    //M
    ui->M_Stat->setText(de_stat(pipe_M.stat));
    ui->M_instr->setText(de_instr(pipe_M.icode));
    ui->M_Cnd->setText(de_Cnd(pipe_M.Cnd));
    ui->M_valE->setText("0x" + QString::number(pipe_M.valE, 16));
    ui->M_valA->setText("0x" + QString::number(pipe_M.valA, 16));
    ui->M_dstE->setText(de_reg(pipe_M.dstE));
    ui->M_dstM->setText(de_reg(pipe_M.dstM));
    //W
    ui->W_Stat->setText(de_stat(pipe_W.stat));
    ui->W_instr->setText(de_instr(pipe_W.icode));
    ui->W_valE->setText("0x" + QString::number(pipe_W.valE, 16));
    ui->W_valM->setText("0x" + QString::number(pipe_W.valM, 16));
    ui->W_dstE->setText(de_reg(pipe_W.dstE));
    ui->W_dstM->setText(de_reg(pipe_W.dstM));
    ui->OFshow->setText(OF?"true":"false");
    ui->ZFshow->setText(ZF?"true":"false");
    ui->SFshow->setText(SF?"true":"false");
    //F
    ui->F_predPC->setText("0x" + QString::number(pipe_F.predPC, 16));
    //count cycles
    cycle++;
    if (pipe_W.stat == SAOK||pipe_W.stat==SHLT)
        valid_cycle++;
    if (valid_cycle)
        ui->CPI->setText(QString::asprintf("%.3f\n", cycle / valid_cycle));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fTimer=new QTimer(this);
    fTimer->stop();
    fTimer->setInterval (1000) ;//设置定时周期，单位：毫秒
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
    runtime_speed = 1000;
    ui->spshow->setText("1.00hz");
    ui->inname->setPlaceholderText("text a file name or directory HERE, press enter to confirm.");
    ui->inname->setClearButtonEnabled(true);
    init_all();
    setrg(ui);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_next1_clicked(bool checked)
{
    if(!runOK)
    {
        ui->inname->setText("Test file NOT LOADED, text it HERE and press ENTER.");
        return;
    }
    if(Stat == SAOK) {

        write_back();

        access_memory();

        execute();

        decode();

        fetch();

        updata();

        set_final_stat();

        setrg(ui);

        debuger.statenew();

    }
}

void MainWindow::on_run_clicked(bool checked)
{
    debuger.pausepoint = 0;
    if(!fTimer->isActive())
    {
        fTimer->start(runtime_speed);
    }
}
void MainWindow::on_timer_timeout()
{
    if(!debuger.pausepoint)
        on_next1_clicked(true);
}
void MainWindow::on_inname_returnPressed()
{
    QString qstr = ui->inname->text();
    ui->inname->clear();
    std::ifstream infile("test\\" + qstr.toStdString());
    if(!infile)
    {
        ui->inname->setPlaceholderText("can't open \"" + qstr + "\", make sure it's in folder \"test\"");
        return;
    }

    free(memory);
    memory = init_mem(2048);
    ins_len = load_mem(memory, infile);
    if(ins_len == 0)
    {
        ui->inname->setText(QString("Need More Momery"));
        memory->insts.clear();
        memory->ref_table.clear();
    }
    else
        ui->inname->setPlaceholderText(qstr+" has been loaded, press \"run\" or \"next1\"!");
    debuger.strset();//need to do.
    fTimer->stop();
    init_all();
    setrg(ui);
    runOK = true;
    /*for (int i = 0; i < memory->len+10; i++) {
        printf("%02x ", memory->contents[i]);
    }*/
}


void MainWindow::on_reset_clicked(bool checked)
{
    fTimer->stop();
    debuger.pausepoint = 0;
    init_all();
    setrg(ui);
    ui->inname->setPlaceholderText("reset done. You can rerun the test.");
    ui->CPI->setText(QString());
    cycle = valid_cycle = 0;
}

void MainWindow::on_Debug_clicked()
{
    debuger.show();
}

void MainWindow::on_speed_valueChanged(int value)
{
    float f = value;
    f /= 10;
    f = pow(10, f);
    runtime_speed = 1000 / f;
    if(runtime_speed < 1)
        runtime_speed = 1;
    if(fTimer->isActive())
        fTimer->start(runtime_speed);
    ui->spshow->setText(QString::asprintf("%.2fhz", f));
}

void MainWindow::on_hlt_clicked()
{
    if(fTimer->isActive())
        fTimer->stop();
}
