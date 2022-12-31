#include "dialog.h"
#include "ui_dialog.h"
#include "myISA.h"
#include "pipelinefun.h"
extern Mem_p memory;
extern reg_F pipe_F;
extern reg_D pipe_D;
extern reg_E pipe_E;
extern reg_M pipe_M;
extern reg_W pipe_W;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    strm = new QStringListModel(this);
    strm1 = new QStringListModel(this);
    locm = new QStringListModel(this);
    pointsm = new QStringListModel(this);
    ui->rawcode->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->transcode->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->locs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->points->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->D,SIGNAL(clicked()),this,SLOT(setDebug_stage()));
    connect(ui->F,SIGNAL(clicked()),this,SLOT(setDebug_stage()));
    connect(ui->E,SIGNAL(clicked()),this,SLOT(setDebug_stage()));
    connect(ui->M,SIGNAL(clicked()),this,SLOT(setDebug_stage()));
    connect(ui->W,SIGNAL(clicked()),this,SLOT(setDebug_stage()));
    connect(ui->Delete,SIGNAL(clicked()),this,SLOT(setDebug_stage()));
}
Dialog::~Dialog()
{
    delete strm;
    delete strm1;
    delete locm;
    delete pointsm;
    delete ui;
}
void Dialog::on_points_clicked(const QModelIndex &index)
{
    //ui->textBrowser->setText(QString::asprintf("row = %d, col = %d", index.row(), index.column()));
    QStringList templst = pointsm->stringList();
    if(templst[index.row()][0] == Debug_stage)
        pointsm->setData(index, QString(' '));
    else
        pointsm->setData(index, QString(Debug_stage));
}

void Dialog::strset()
{
    theStrl1.clear();
    theStrl2.clear();
    Strloc.clear();
    Strpoints.clear();
    Fpoints.clear();
    Dpoints.clear();
    Epoints.clear();
    Wpoints.clear();
    Mpoints.clear();
    for(int i = 0, sz = memory->insts.size();i != sz;i++)
    {
        const QString& curstr = memory->insts[i];
        QString::const_iterator iter;
        QString temp1, temp2;
        for(iter = curstr.begin();*iter != '|';iter++)
            temp1.push_back(*iter);
        temp1 = temp1.trimmed();
        for(++iter;iter != curstr.end();iter++)
            temp2.push_back(*iter);
        temp2 = temp2.trimmed();
        theStrl1 << temp1;
        theStrl2 << temp2;
        Strloc << " ";
        Strpoints << " ";
    }
    theStrl1 << " ";
    theStrl2 << " ";
    Strloc << " ";
    Strpoints << " ";
    ui->rawcode->setModel(strm);
    strm->setStringList(theStrl1);
    ui->transcode->setModel(strm1);
    strm1->setStringList(theStrl2);
    ui->locs->setModel(locm);
    locm->setStringList(Strloc);
    ui->points->setModel(pointsm);
    pointsm->setStringList(Strpoints);
}

void Dialog::statenew()
{
    Strloc.clear();
    for(int i = 0, sz = memory->ref_table.size();i != sz;i++)
        Strloc << " ";
    locm->setStringList(Strloc);
    if(memory->ref_table.find(pipe_F.curpc) != memory->ref_table.end())
        locm->setData(locm->index(memory->ref_table[pipe_F.curpc]), QString("F"));
    if(pipe_D.stat != SBUB && memory->ref_table.find(pipe_D.curpc) != memory->ref_table.end())
        locm->setData(locm->index(memory->ref_table[pipe_D.curpc]), QString("D"));
    if(pipe_E.stat != SBUB && memory->ref_table.find(pipe_E.curpc) != memory->ref_table.end())
        locm->setData(locm->index(memory->ref_table[pipe_E.curpc]), QString("E"));
    if(pipe_M.stat != SBUB && memory->ref_table.find(pipe_M.curpc) != memory->ref_table.end())
        locm->setData(locm->index(memory->ref_table[pipe_M.curpc]), QString("M"));
    if(pipe_W.stat != SBUB && memory->ref_table.find(pipe_W.curpc) != memory->ref_table.end())
        locm->setData(locm->index(memory->ref_table[pipe_W.curpc]), QString("W"));
    QStringList locsl = locm->stringList();
    QStringList pointsl = pointsm->stringList();
    for(int i = 0, sz = locsl.size();i != sz;i++)
    {
        if(locsl[i][0] != ' ' && locsl[i][0] == pointsl[i][0])
        {
            pausepoint = 1;
            break;
        }
    }
}

void Dialog::setDebug_stage()
{
    if(ui->D->isChecked())
        Debug_stage = 'D';
    if(ui->E->isChecked())
        Debug_stage = 'E';
    if(ui->F->isChecked())
        Debug_stage = 'F';
    if(ui->W->isChecked())
        Debug_stage = 'W';
    if(ui->M->isChecked())
        Debug_stage = 'M';
    if(ui->Delete->isChecked())
        Debug_stage = ' ';
    //ui->textBrowser->setText(QString(Debug_stage));
}

void Dialog::on_rawcode_clicked(const QModelIndex &index)
{
    on_points_clicked(index);
}

void Dialog::on_transcode_clicked(const QModelIndex &index)
{
    on_points_clicked(index);
}
