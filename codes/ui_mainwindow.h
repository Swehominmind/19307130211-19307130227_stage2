/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiondddd;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *uis;
    QLabel *label_24;
    QTextBrowser *CPI;
    QLineEdit *inname;
    QLabel *label_25;
    QPushButton *reset;
    QPushButton *Debug;
    QTextBrowser *stat;
    QPushButton *next1;
    QPushButton *run;
    QLabel *label_29;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *hlt;
    QTextBrowser *spshow;
    QSlider *speed;
    QVBoxLayout *Stages;
    QGridLayout *W;
    QLabel *label_51;
    QTextBrowser *W_dstE;
    QLabel *label_52;
    QTextBrowser *W_Stat;
    QTextBrowser *W_valE;
    QLabel *label_58;
    QLabel *label_56;
    QLabel *label_53;
    QTextBrowser *W_valM;
    QTextBrowser *W_dstM;
    QLabel *label_57;
    QLabel *label_54;
    QLabel *label_50;
    QTextBrowser *W_instr;
    QGridLayout *M;
    QLabel *label_45;
    QLabel *label_60;
    QTextBrowser *M_Cnd;
    QTextBrowser *M_instr;
    QTextBrowser *M_valE;
    QLabel *label_42;
    QTextBrowser *M_dstM;
    QLabel *label_43;
    QTextBrowser *M_Stat;
    QLabel *label_41;
    QTextBrowser *M_dstE;
    QTextBrowser *M_valA;
    QLabel *label_47;
    QLabel *label_44;
    QLabel *label_48;
    QLabel *label_49;
    QGridLayout *E;
    QTextBrowser *E_valB;
    QTextBrowser *E_dstE;
    QTextBrowser *E_srcB;
    QTextBrowser *E_instr;
    QLabel *label_38;
    QLabel *label_32;
    QTextBrowser *E_srcA;
    QLabel *label_62;
    QLabel *label_40;
    QTextBrowser *E_dstM;
    QLabel *label_59;
    QLabel *label_33;
    QLabel *label_39;
    QTextBrowser *E_valA;
    QLabel *label_34;
    QTextBrowser *E_valC;
    QTextBrowser *E_Stat;
    QLabel *label_36;
    QLabel *label_61;
    QLabel *label_35;
    QGridLayout *D;
    QTextBrowser *D_instr;
    QTextBrowser *D_Stat;
    QLabel *label_22;
    QTextBrowser *D_valP;
    QLabel *label_23;
    QTextBrowser *D_rB;
    QLabel *label_31;
    QLabel *label_14;
    QTextBrowser *D_rA;
    QLabel *label_46;
    QLabel *label_21;
    QLabel *label_11;
    QTextBrowser *D_valC;
    QLabel *label_13;
    QLabel *label_20;
    QGridLayout *gridLayout;
    QTextBrowser *F_predPC;
    QLabel *label_64;
    QLabel *label_63;
    QLabel *label_66;
    QLabel *label_67;
    QLabel *label_55;
    QLabel *label_65;
    QLabel *label_68;
    QGridLayout *Regs;
    QLabel *label;
    QTextBrowser *rsi;
    QLabel *label_5;
    QLabel *label_4;
    QTextBrowser *ZFshow;
    QTextBrowser *rbx;
    QLabel *label_2;
    QTextBrowser *OFshow;
    QTextBrowser *r14;
    QTextBrowser *rcx;
    QLabel *label_9;
    QTextBrowser *rdi;
    QTextBrowser *r11;
    QLabel *label_10;
    QLabel *label_16;
    QTextBrowser *rbp;
    QTextBrowser *CFshow;
    QLabel *label_7;
    QTextBrowser *rsp;
    QLabel *label_8;
    QLabel *label_27;
    QTextBrowser *r10;
    QTextBrowser *r13;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_17;
    QTextBrowser *r9;
    QLabel *label_28;
    QTextBrowser *SFshow;
    QLabel *label_15;
    QLabel *label_19;
    QLabel *label_37;
    QLabel *label_18;
    QTextBrowser *rdx;
    QLabel *label_26;
    QTextBrowser *r12;
    QLabel *label_12;
    QTextBrowser *r8;
    QTextBrowser *rax;
    QLabel *label_30;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 1024);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1024, 880));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        actiondddd = new QAction(MainWindow);
        actiondddd->setObjectName(QString::fromUtf8("actiondddd"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"	border-image: url(:/image/myimages/dark.jpg);\n"
"}\n"
"#centralwidget * {\n"
"border-image:url();\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        uis = new QGridLayout();
        uis->setObjectName(QString::fromUtf8("uis"));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        uis->addWidget(label_24, 0, 4, 1, 1);

        CPI = new QTextBrowser(centralwidget);
        CPI->setObjectName(QString::fromUtf8("CPI"));
        CPI->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        CPI->setFont(font1);
        CPI->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        uis->addWidget(CPI, 1, 5, 1, 1);

        inname = new QLineEdit(centralwidget);
        inname->setObjectName(QString::fromUtf8("inname"));
        sizePolicy1.setHeightForWidth(inname->sizePolicy().hasHeightForWidth());
        inname->setSizePolicy(sizePolicy1);
        inname->setMaximumSize(QSize(16777215, 30));
        inname->setStyleSheet(QString::fromUtf8(""));

        uis->addWidget(inname, 1, 6, 1, 3);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        uis->addWidget(label_25, 0, 5, 1, 1);

        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        reset->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        reset->setFont(font2);
        reset->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 255, 127);"));

        uis->addWidget(reset, 1, 2, 1, 1);

        Debug = new QPushButton(centralwidget);
        Debug->setObjectName(QString::fromUtf8("Debug"));
        Debug->setFont(font2);

        uis->addWidget(Debug, 1, 3, 1, 1);

        stat = new QTextBrowser(centralwidget);
        stat->setObjectName(QString::fromUtf8("stat"));
        sizePolicy1.setHeightForWidth(stat->sizePolicy().hasHeightForWidth());
        stat->setSizePolicy(sizePolicy1);
        stat->setMaximumSize(QSize(16777215, 30));
        stat->setFont(font1);
        stat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        uis->addWidget(stat, 1, 4, 1, 1);

        next1 = new QPushButton(centralwidget);
        next1->setObjectName(QString::fromUtf8("next1"));
        sizePolicy1.setHeightForWidth(next1->sizePolicy().hasHeightForWidth());
        next1->setSizePolicy(sizePolicy1);
        next1->setMaximumSize(QSize(16777215, 30));
        next1->setFont(font2);
        next1->setStyleSheet(QString::fromUtf8(""));

        uis->addWidget(next1, 1, 1, 1, 1);

        run = new QPushButton(centralwidget);
        run->setObjectName(QString::fromUtf8("run"));
        sizePolicy1.setHeightForWidth(run->sizePolicy().hasHeightForWidth());
        run->setSizePolicy(sizePolicy1);
        run->setMaximumSize(QSize(16777215, 30));
        run->setFont(font2);
        run->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 255, 127);"));

        uis->addWidget(run, 1, 0, 1, 1);

        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font2);
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        uis->addWidget(label_29, 0, 6, 1, 1);

        uis->setColumnStretch(0, 1);
        uis->setColumnStretch(1, 1);
        uis->setColumnStretch(2, 1);
        uis->setColumnStretch(3, 1);
        uis->setColumnStretch(4, 1);
        uis->setColumnStretch(5, 1);
        uis->setColumnStretch(6, 1);
        uis->setColumnStretch(7, 1);
        uis->setColumnStretch(8, 20);

        verticalLayout->addLayout(uis);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        hlt = new QPushButton(centralwidget);
        hlt->setObjectName(QString::fromUtf8("hlt"));
        hlt->setFont(font2);

        horizontalLayout_2->addWidget(hlt);

        spshow = new QTextBrowser(centralwidget);
        spshow->setObjectName(QString::fromUtf8("spshow"));
        spshow->setMaximumSize(QSize(16777215, 30));
        spshow->setFont(font1);
        spshow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        horizontalLayout_2->addWidget(spshow);

        speed = new QSlider(centralwidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setStyleSheet(QString::fromUtf8(""));
        speed->setMinimum(-10);
        speed->setMaximum(30);
        speed->setPageStep(3);
        speed->setValue(0);
        speed->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(speed);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout_2);

        Stages = new QVBoxLayout();
        Stages->setObjectName(QString::fromUtf8("Stages"));
        Stages->setSizeConstraint(QLayout::SetDefaultConstraint);
        Stages->setContentsMargins(-1, 20, -1, 20);
        W = new QGridLayout();
        W->setObjectName(QString::fromUtf8("W"));
        W->setSizeConstraint(QLayout::SetNoConstraint);
        label_51 = new QLabel(centralwidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        sizePolicy1.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy1);
        label_51->setMaximumSize(QSize(16777215, 30));
        label_51->setFont(font);
        label_51->setLayoutDirection(Qt::LeftToRight);
        label_51->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_51->setScaledContents(false);
        label_51->setAlignment(Qt::AlignCenter);

        W->addWidget(label_51, 1, 2, 1, 1);

        W_dstE = new QTextBrowser(centralwidget);
        W_dstE->setObjectName(QString::fromUtf8("W_dstE"));
        sizePolicy1.setHeightForWidth(W_dstE->sizePolicy().hasHeightForWidth());
        W_dstE->setSizePolicy(sizePolicy1);
        W_dstE->setMaximumSize(QSize(16777215, 30));
        W_dstE->setFont(font1);
        W_dstE->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        W->addWidget(W_dstE, 2, 6, 1, 1);

        label_52 = new QLabel(centralwidget);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        sizePolicy1.setHeightForWidth(label_52->sizePolicy().hasHeightForWidth());
        label_52->setSizePolicy(sizePolicy1);
        label_52->setMaximumSize(QSize(16777215, 30));
        label_52->setFont(font);
        label_52->setLayoutDirection(Qt::LeftToRight);
        label_52->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_52->setScaledContents(false);
        label_52->setAlignment(Qt::AlignCenter);

        W->addWidget(label_52, 1, 7, 1, 1);

        W_Stat = new QTextBrowser(centralwidget);
        W_Stat->setObjectName(QString::fromUtf8("W_Stat"));
        sizePolicy1.setHeightForWidth(W_Stat->sizePolicy().hasHeightForWidth());
        W_Stat->setSizePolicy(sizePolicy1);
        W_Stat->setMaximumSize(QSize(16777215, 30));
        W_Stat->setFont(font1);
        W_Stat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        W->addWidget(W_Stat, 2, 2, 1, 1);

        W_valE = new QTextBrowser(centralwidget);
        W_valE->setObjectName(QString::fromUtf8("W_valE"));
        sizePolicy1.setHeightForWidth(W_valE->sizePolicy().hasHeightForWidth());
        W_valE->setSizePolicy(sizePolicy1);
        W_valE->setMaximumSize(QSize(16777215, 30));
        W_valE->setFont(font1);
        W_valE->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        W->addWidget(W_valE, 2, 4, 1, 1);

        label_58 = new QLabel(centralwidget);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        sizePolicy1.setHeightForWidth(label_58->sizePolicy().hasHeightForWidth());
        label_58->setSizePolicy(sizePolicy1);
        label_58->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_58->setFont(font3);
        label_58->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_58->setAlignment(Qt::AlignCenter);

        W->addWidget(label_58, 0, 1, 1, 7);

        label_56 = new QLabel(centralwidget);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        sizePolicy1.setHeightForWidth(label_56->sizePolicy().hasHeightForWidth());
        label_56->setSizePolicy(sizePolicy1);
        label_56->setMaximumSize(QSize(16777215, 30));
        label_56->setFont(font);
        label_56->setLayoutDirection(Qt::LeftToRight);
        label_56->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_56->setScaledContents(false);
        label_56->setAlignment(Qt::AlignCenter);

        W->addWidget(label_56, 1, 4, 1, 1);

        label_53 = new QLabel(centralwidget);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        sizePolicy1.setHeightForWidth(label_53->sizePolicy().hasHeightForWidth());
        label_53->setSizePolicy(sizePolicy1);
        label_53->setMaximumSize(QSize(16777215, 30));
        label_53->setFont(font);
        label_53->setLayoutDirection(Qt::LeftToRight);
        label_53->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_53->setScaledContents(false);
        label_53->setAlignment(Qt::AlignCenter);

        W->addWidget(label_53, 1, 5, 1, 1);

        W_valM = new QTextBrowser(centralwidget);
        W_valM->setObjectName(QString::fromUtf8("W_valM"));
        sizePolicy1.setHeightForWidth(W_valM->sizePolicy().hasHeightForWidth());
        W_valM->setSizePolicy(sizePolicy1);
        W_valM->setMaximumSize(QSize(16777215, 30));
        W_valM->setFont(font1);
        W_valM->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        W->addWidget(W_valM, 2, 5, 1, 1);

        W_dstM = new QTextBrowser(centralwidget);
        W_dstM->setObjectName(QString::fromUtf8("W_dstM"));
        sizePolicy1.setHeightForWidth(W_dstM->sizePolicy().hasHeightForWidth());
        W_dstM->setSizePolicy(sizePolicy1);
        W_dstM->setMaximumSize(QSize(16777215, 30));
        W_dstM->setFont(font1);
        W_dstM->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        W->addWidget(W_dstM, 2, 7, 1, 1);

        label_57 = new QLabel(centralwidget);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        sizePolicy1.setHeightForWidth(label_57->sizePolicy().hasHeightForWidth());
        label_57->setSizePolicy(sizePolicy1);
        label_57->setMaximumSize(QSize(16777215, 30));
        label_57->setFont(font);
        label_57->setLayoutDirection(Qt::LeftToRight);
        label_57->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_57->setScaledContents(false);
        label_57->setAlignment(Qt::AlignCenter);

        W->addWidget(label_57, 1, 3, 1, 1);

        label_54 = new QLabel(centralwidget);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        sizePolicy1.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy1);
        label_54->setMaximumSize(QSize(16777215, 30));
        label_54->setFont(font);
        label_54->setLayoutDirection(Qt::LeftToRight);
        label_54->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_54->setScaledContents(false);
        label_54->setAlignment(Qt::AlignCenter);

        W->addWidget(label_54, 2, 1, 1, 1);

        label_50 = new QLabel(centralwidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        sizePolicy1.setHeightForWidth(label_50->sizePolicy().hasHeightForWidth());
        label_50->setSizePolicy(sizePolicy1);
        label_50->setMaximumSize(QSize(16777215, 30));
        label_50->setFont(font);
        label_50->setLayoutDirection(Qt::LeftToRight);
        label_50->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_50->setScaledContents(false);
        label_50->setAlignment(Qt::AlignCenter);

        W->addWidget(label_50, 1, 6, 1, 1);

        W_instr = new QTextBrowser(centralwidget);
        W_instr->setObjectName(QString::fromUtf8("W_instr"));
        sizePolicy1.setHeightForWidth(W_instr->sizePolicy().hasHeightForWidth());
        W_instr->setSizePolicy(sizePolicy1);
        W_instr->setMaximumSize(QSize(16777215, 30));
        W_instr->setFont(font1);
        W_instr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        W->addWidget(W_instr, 2, 3, 1, 1);


        Stages->addLayout(W);

        M = new QGridLayout();
        M->setObjectName(QString::fromUtf8("M"));
        M->setSizeConstraint(QLayout::SetNoConstraint);
        label_45 = new QLabel(centralwidget);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        sizePolicy1.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy1);
        label_45->setMaximumSize(QSize(16777215, 30));
        label_45->setFont(font);
        label_45->setLayoutDirection(Qt::LeftToRight);
        label_45->setScaledContents(false);
        label_45->setAlignment(Qt::AlignCenter);

        M->addWidget(label_45, 2, 1, 1, 1);

        label_60 = new QLabel(centralwidget);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        sizePolicy1.setHeightForWidth(label_60->sizePolicy().hasHeightForWidth());
        label_60->setSizePolicy(sizePolicy1);
        label_60->setMaximumSize(QSize(16777215, 30));
        label_60->setFont(font);
        label_60->setLayoutDirection(Qt::LeftToRight);
        label_60->setScaledContents(false);
        label_60->setAlignment(Qt::AlignCenter);

        M->addWidget(label_60, 1, 8, 1, 1);

        M_Cnd = new QTextBrowser(centralwidget);
        M_Cnd->setObjectName(QString::fromUtf8("M_Cnd"));
        sizePolicy1.setHeightForWidth(M_Cnd->sizePolicy().hasHeightForWidth());
        M_Cnd->setSizePolicy(sizePolicy1);
        M_Cnd->setMaximumSize(QSize(16777215, 30));
        M_Cnd->setFont(font1);
        M_Cnd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_Cnd, 2, 4, 1, 1);

        M_instr = new QTextBrowser(centralwidget);
        M_instr->setObjectName(QString::fromUtf8("M_instr"));
        sizePolicy1.setHeightForWidth(M_instr->sizePolicy().hasHeightForWidth());
        M_instr->setSizePolicy(sizePolicy1);
        M_instr->setMaximumSize(QSize(16777215, 30));
        M_instr->setFont(font1);
        M_instr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_instr, 2, 3, 1, 1);

        M_valE = new QTextBrowser(centralwidget);
        M_valE->setObjectName(QString::fromUtf8("M_valE"));
        sizePolicy1.setHeightForWidth(M_valE->sizePolicy().hasHeightForWidth());
        M_valE->setSizePolicy(sizePolicy1);
        M_valE->setMaximumSize(QSize(16777215, 30));
        M_valE->setFont(font1);
        M_valE->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_valE, 2, 5, 1, 1);

        label_42 = new QLabel(centralwidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy1.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy1);
        label_42->setMaximumSize(QSize(16777215, 30));
        label_42->setFont(font);
        label_42->setLayoutDirection(Qt::LeftToRight);
        label_42->setScaledContents(false);
        label_42->setAlignment(Qt::AlignCenter);

        M->addWidget(label_42, 1, 2, 1, 1);

        M_dstM = new QTextBrowser(centralwidget);
        M_dstM->setObjectName(QString::fromUtf8("M_dstM"));
        sizePolicy1.setHeightForWidth(M_dstM->sizePolicy().hasHeightForWidth());
        M_dstM->setSizePolicy(sizePolicy1);
        M_dstM->setMaximumSize(QSize(16777215, 30));
        M_dstM->setFont(font1);
        M_dstM->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_dstM, 2, 8, 1, 1);

        label_43 = new QLabel(centralwidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        sizePolicy1.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy1);
        label_43->setMaximumSize(QSize(16777215, 30));
        label_43->setFont(font);
        label_43->setLayoutDirection(Qt::LeftToRight);
        label_43->setScaledContents(false);
        label_43->setAlignment(Qt::AlignCenter);

        M->addWidget(label_43, 1, 7, 1, 1);

        M_Stat = new QTextBrowser(centralwidget);
        M_Stat->setObjectName(QString::fromUtf8("M_Stat"));
        sizePolicy1.setHeightForWidth(M_Stat->sizePolicy().hasHeightForWidth());
        M_Stat->setSizePolicy(sizePolicy1);
        M_Stat->setMaximumSize(QSize(16777215, 30));
        M_Stat->setFont(font1);
        M_Stat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_Stat, 2, 2, 1, 1);

        label_41 = new QLabel(centralwidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        sizePolicy1.setHeightForWidth(label_41->sizePolicy().hasHeightForWidth());
        label_41->setSizePolicy(sizePolicy1);
        label_41->setMaximumSize(QSize(16777215, 30));
        label_41->setFont(font);
        label_41->setLayoutDirection(Qt::LeftToRight);
        label_41->setScaledContents(false);
        label_41->setAlignment(Qt::AlignCenter);

        M->addWidget(label_41, 1, 6, 1, 1);

        M_dstE = new QTextBrowser(centralwidget);
        M_dstE->setObjectName(QString::fromUtf8("M_dstE"));
        sizePolicy1.setHeightForWidth(M_dstE->sizePolicy().hasHeightForWidth());
        M_dstE->setSizePolicy(sizePolicy1);
        M_dstE->setMaximumSize(QSize(16777215, 30));
        M_dstE->setFont(font1);
        M_dstE->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_dstE, 2, 7, 1, 1);

        M_valA = new QTextBrowser(centralwidget);
        M_valA->setObjectName(QString::fromUtf8("M_valA"));
        sizePolicy1.setHeightForWidth(M_valA->sizePolicy().hasHeightForWidth());
        M_valA->setSizePolicy(sizePolicy1);
        M_valA->setMaximumSize(QSize(16777215, 30));
        M_valA->setFont(font1);
        M_valA->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        M->addWidget(M_valA, 2, 6, 1, 1);

        label_47 = new QLabel(centralwidget);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        sizePolicy1.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy1);
        label_47->setMaximumSize(QSize(16777215, 30));
        label_47->setFont(font);
        label_47->setLayoutDirection(Qt::LeftToRight);
        label_47->setScaledContents(false);
        label_47->setAlignment(Qt::AlignCenter);

        M->addWidget(label_47, 1, 4, 1, 1);

        label_44 = new QLabel(centralwidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        sizePolicy1.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy1);
        label_44->setMaximumSize(QSize(16777215, 30));
        label_44->setFont(font);
        label_44->setLayoutDirection(Qt::LeftToRight);
        label_44->setScaledContents(false);
        label_44->setAlignment(Qt::AlignCenter);

        M->addWidget(label_44, 1, 5, 1, 1);

        label_48 = new QLabel(centralwidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        sizePolicy1.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy1);
        label_48->setMaximumSize(QSize(16777215, 30));
        label_48->setFont(font);
        label_48->setLayoutDirection(Qt::LeftToRight);
        label_48->setScaledContents(false);
        label_48->setAlignment(Qt::AlignCenter);

        M->addWidget(label_48, 1, 3, 1, 1);

        label_49 = new QLabel(centralwidget);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        sizePolicy1.setHeightForWidth(label_49->sizePolicy().hasHeightForWidth());
        label_49->setSizePolicy(sizePolicy1);
        label_49->setMaximumSize(QSize(16777215, 30));
        label_49->setFont(font3);
        label_49->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_49->setAlignment(Qt::AlignCenter);

        M->addWidget(label_49, 0, 1, 1, 8);


        Stages->addLayout(M);

        E = new QGridLayout();
        E->setObjectName(QString::fromUtf8("E"));
        E->setSizeConstraint(QLayout::SetNoConstraint);
        E_valB = new QTextBrowser(centralwidget);
        E_valB->setObjectName(QString::fromUtf8("E_valB"));
        sizePolicy1.setHeightForWidth(E_valB->sizePolicy().hasHeightForWidth());
        E_valB->setSizePolicy(sizePolicy1);
        E_valB->setMaximumSize(QSize(16777215, 30));
        E_valB->setFont(font1);
        E_valB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_valB, 2, 5, 1, 1);

        E_dstE = new QTextBrowser(centralwidget);
        E_dstE->setObjectName(QString::fromUtf8("E_dstE"));
        sizePolicy1.setHeightForWidth(E_dstE->sizePolicy().hasHeightForWidth());
        E_dstE->setSizePolicy(sizePolicy1);
        E_dstE->setMaximumSize(QSize(16777215, 30));
        E_dstE->setFont(font1);
        E_dstE->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_dstE, 2, 6, 1, 1);

        E_srcB = new QTextBrowser(centralwidget);
        E_srcB->setObjectName(QString::fromUtf8("E_srcB"));
        sizePolicy1.setHeightForWidth(E_srcB->sizePolicy().hasHeightForWidth());
        E_srcB->setSizePolicy(sizePolicy1);
        E_srcB->setMaximumSize(QSize(16777215, 30));
        E_srcB->setFont(font1);
        E_srcB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_srcB, 2, 9, 1, 1);

        E_instr = new QTextBrowser(centralwidget);
        E_instr->setObjectName(QString::fromUtf8("E_instr"));
        sizePolicy1.setHeightForWidth(E_instr->sizePolicy().hasHeightForWidth());
        E_instr->setSizePolicy(sizePolicy1);
        E_instr->setMaximumSize(QSize(16777215, 30));
        E_instr->setFont(font1);
        E_instr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_instr, 2, 2, 1, 1);

        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        sizePolicy1.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy1);
        label_38->setMaximumSize(QSize(16777215, 30));
        label_38->setFont(font);
        label_38->setLayoutDirection(Qt::LeftToRight);
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_38->setScaledContents(false);
        label_38->setAlignment(Qt::AlignCenter);

        E->addWidget(label_38, 1, 3, 1, 1);

        label_32 = new QLabel(centralwidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);
        label_32->setMaximumSize(QSize(16777215, 30));
        label_32->setFont(font);
        label_32->setLayoutDirection(Qt::LeftToRight);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_32->setScaledContents(false);
        label_32->setAlignment(Qt::AlignCenter);

        E->addWidget(label_32, 1, 5, 1, 1);

        E_srcA = new QTextBrowser(centralwidget);
        E_srcA->setObjectName(QString::fromUtf8("E_srcA"));
        sizePolicy1.setHeightForWidth(E_srcA->sizePolicy().hasHeightForWidth());
        E_srcA->setSizePolicy(sizePolicy1);
        E_srcA->setMaximumSize(QSize(16777215, 30));
        E_srcA->setFont(font1);
        E_srcA->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_srcA, 2, 8, 1, 1);

        label_62 = new QLabel(centralwidget);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        sizePolicy1.setHeightForWidth(label_62->sizePolicy().hasHeightForWidth());
        label_62->setSizePolicy(sizePolicy1);
        label_62->setMaximumSize(QSize(16777215, 30));
        label_62->setFont(font);
        label_62->setLayoutDirection(Qt::LeftToRight);
        label_62->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_62->setScaledContents(false);
        label_62->setAlignment(Qt::AlignCenter);

        E->addWidget(label_62, 1, 9, 1, 1);

        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        sizePolicy1.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy1);
        label_40->setMaximumSize(QSize(16777215, 30));
        label_40->setFont(font3);
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_40->setAlignment(Qt::AlignCenter);

        E->addWidget(label_40, 0, 0, 1, 10);

        E_dstM = new QTextBrowser(centralwidget);
        E_dstM->setObjectName(QString::fromUtf8("E_dstM"));
        sizePolicy1.setHeightForWidth(E_dstM->sizePolicy().hasHeightForWidth());
        E_dstM->setSizePolicy(sizePolicy1);
        E_dstM->setMaximumSize(QSize(16777215, 30));
        E_dstM->setFont(font1);
        E_dstM->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_dstM, 2, 7, 1, 1);

        label_59 = new QLabel(centralwidget);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        sizePolicy1.setHeightForWidth(label_59->sizePolicy().hasHeightForWidth());
        label_59->setSizePolicy(sizePolicy1);
        label_59->setMaximumSize(QSize(16777215, 30));
        label_59->setFont(font);
        label_59->setLayoutDirection(Qt::LeftToRight);
        label_59->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_59->setScaledContents(false);
        label_59->setAlignment(Qt::AlignCenter);

        E->addWidget(label_59, 1, 7, 1, 1);

        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy1.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy1);
        label_33->setMaximumSize(QSize(16777215, 30));
        label_33->setFont(font);
        label_33->setLayoutDirection(Qt::LeftToRight);
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_33->setScaledContents(false);
        label_33->setAlignment(Qt::AlignCenter);

        E->addWidget(label_33, 1, 1, 1, 1);

        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy1.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy1);
        label_39->setMaximumSize(QSize(16777215, 30));
        label_39->setFont(font);
        label_39->setLayoutDirection(Qt::LeftToRight);
        label_39->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_39->setScaledContents(false);
        label_39->setAlignment(Qt::AlignCenter);

        E->addWidget(label_39, 1, 2, 1, 1);

        E_valA = new QTextBrowser(centralwidget);
        E_valA->setObjectName(QString::fromUtf8("E_valA"));
        sizePolicy1.setHeightForWidth(E_valA->sizePolicy().hasHeightForWidth());
        E_valA->setSizePolicy(sizePolicy1);
        E_valA->setMaximumSize(QSize(16777215, 30));
        E_valA->setFont(font1);
        E_valA->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_valA, 2, 4, 1, 1);

        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy1.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy1);
        label_34->setMaximumSize(QSize(16777215, 30));
        label_34->setFont(font);
        label_34->setLayoutDirection(Qt::LeftToRight);
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_34->setScaledContents(false);
        label_34->setAlignment(Qt::AlignCenter);

        E->addWidget(label_34, 1, 6, 1, 1);

        E_valC = new QTextBrowser(centralwidget);
        E_valC->setObjectName(QString::fromUtf8("E_valC"));
        sizePolicy1.setHeightForWidth(E_valC->sizePolicy().hasHeightForWidth());
        E_valC->setSizePolicy(sizePolicy1);
        E_valC->setMaximumSize(QSize(16777215, 30));
        E_valC->setFont(font1);
        E_valC->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_valC, 2, 3, 1, 1);

        E_Stat = new QTextBrowser(centralwidget);
        E_Stat->setObjectName(QString::fromUtf8("E_Stat"));
        sizePolicy1.setHeightForWidth(E_Stat->sizePolicy().hasHeightForWidth());
        E_Stat->setSizePolicy(sizePolicy1);
        E_Stat->setMaximumSize(QSize(16777215, 30));
        E_Stat->setFont(font1);
        E_Stat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        E->addWidget(E_Stat, 2, 1, 1, 1);

        label_36 = new QLabel(centralwidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy1.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy1);
        label_36->setMaximumSize(QSize(16777215, 30));
        label_36->setFont(font);
        label_36->setLayoutDirection(Qt::LeftToRight);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_36->setScaledContents(false);
        label_36->setAlignment(Qt::AlignCenter);

        E->addWidget(label_36, 2, 0, 1, 1);

        label_61 = new QLabel(centralwidget);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        sizePolicy1.setHeightForWidth(label_61->sizePolicy().hasHeightForWidth());
        label_61->setSizePolicy(sizePolicy1);
        label_61->setMaximumSize(QSize(16777215, 30));
        label_61->setFont(font);
        label_61->setLayoutDirection(Qt::LeftToRight);
        label_61->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_61->setScaledContents(false);
        label_61->setAlignment(Qt::AlignCenter);

        E->addWidget(label_61, 1, 8, 1, 1);

        label_35 = new QLabel(centralwidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy1.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy1);
        label_35->setMaximumSize(QSize(16777215, 30));
        label_35->setFont(font);
        label_35->setLayoutDirection(Qt::LeftToRight);
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_35->setScaledContents(false);
        label_35->setAlignment(Qt::AlignCenter);

        E->addWidget(label_35, 1, 4, 1, 1);


        Stages->addLayout(E);

        D = new QGridLayout();
        D->setObjectName(QString::fromUtf8("D"));
        D->setSizeConstraint(QLayout::SetNoConstraint);
        D_instr = new QTextBrowser(centralwidget);
        D_instr->setObjectName(QString::fromUtf8("D_instr"));
        sizePolicy1.setHeightForWidth(D_instr->sizePolicy().hasHeightForWidth());
        D_instr->setSizePolicy(sizePolicy1);
        D_instr->setMaximumSize(QSize(16777215, 30));
        D_instr->setFont(font1);
        D_instr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        D->addWidget(D_instr, 2, 2, 1, 1);

        D_Stat = new QTextBrowser(centralwidget);
        D_Stat->setObjectName(QString::fromUtf8("D_Stat"));
        sizePolicy1.setHeightForWidth(D_Stat->sizePolicy().hasHeightForWidth());
        D_Stat->setSizePolicy(sizePolicy1);
        D_Stat->setMaximumSize(QSize(16777215, 30));
        D_Stat->setFont(font1);
        D_Stat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        D->addWidget(D_Stat, 2, 1, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMaximumSize(QSize(16777215, 30));
        label_22->setFont(font);
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_22->setScaledContents(false);
        label_22->setAlignment(Qt::AlignCenter);

        D->addWidget(label_22, 1, 4, 1, 1);

        D_valP = new QTextBrowser(centralwidget);
        D_valP->setObjectName(QString::fromUtf8("D_valP"));
        sizePolicy1.setHeightForWidth(D_valP->sizePolicy().hasHeightForWidth());
        D_valP->setSizePolicy(sizePolicy1);
        D_valP->setMaximumSize(QSize(16777215, 30));
        D_valP->setFont(font1);
        D_valP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        D->addWidget(D_valP, 2, 6, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);
        label_23->setMaximumSize(QSize(16777215, 30));
        label_23->setFont(font);
        label_23->setLayoutDirection(Qt::LeftToRight);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_23->setScaledContents(false);
        label_23->setAlignment(Qt::AlignCenter);

        D->addWidget(label_23, 1, 5, 1, 1);

        D_rB = new QTextBrowser(centralwidget);
        D_rB->setObjectName(QString::fromUtf8("D_rB"));
        sizePolicy1.setHeightForWidth(D_rB->sizePolicy().hasHeightForWidth());
        D_rB->setSizePolicy(sizePolicy1);
        D_rB->setMaximumSize(QSize(16777215, 30));
        D_rB->setFont(font1);
        D_rB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        D->addWidget(D_rB, 2, 4, 1, 1);

        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);
        label_31->setMaximumSize(QSize(16777215, 30));
        label_31->setFont(font);
        label_31->setLayoutDirection(Qt::LeftToRight);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_31->setScaledContents(false);
        label_31->setAlignment(Qt::AlignCenter);

        D->addWidget(label_31, 1, 6, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMaximumSize(QSize(16777215, 30));
        label_14->setFont(font);
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_14->setScaledContents(false);
        label_14->setAlignment(Qt::AlignCenter);

        D->addWidget(label_14, 1, 1, 1, 1);

        D_rA = new QTextBrowser(centralwidget);
        D_rA->setObjectName(QString::fromUtf8("D_rA"));
        sizePolicy1.setHeightForWidth(D_rA->sizePolicy().hasHeightForWidth());
        D_rA->setSizePolicy(sizePolicy1);
        D_rA->setMaximumSize(QSize(16777215, 30));
        D_rA->setFont(font1);
        D_rA->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        D->addWidget(D_rA, 2, 3, 1, 1);

        label_46 = new QLabel(centralwidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFont(font3);
        label_46->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_46->setAlignment(Qt::AlignCenter);

        D->addWidget(label_46, 3, 0, 1, 7);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMaximumSize(QSize(16777215, 30));
        label_21->setFont(font);
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_21->setScaledContents(false);
        label_21->setAlignment(Qt::AlignCenter);

        D->addWidget(label_21, 1, 3, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMaximumSize(QSize(16777215, 30));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_11->setAlignment(Qt::AlignCenter);

        D->addWidget(label_11, 0, 0, 1, 7);

        D_valC = new QTextBrowser(centralwidget);
        D_valC->setObjectName(QString::fromUtf8("D_valC"));
        sizePolicy1.setHeightForWidth(D_valC->sizePolicy().hasHeightForWidth());
        D_valC->setSizePolicy(sizePolicy1);
        D_valC->setMaximumSize(QSize(16777215, 30));
        D_valC->setFont(font1);
        D_valC->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        D->addWidget(D_valC, 2, 5, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMaximumSize(QSize(16777215, 30));
        label_13->setFont(font);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_13->setScaledContents(false);
        label_13->setAlignment(Qt::AlignCenter);

        D->addWidget(label_13, 2, 0, 1, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setMaximumSize(QSize(16777215, 30));
        label_20->setFont(font);
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_20->setScaledContents(false);
        label_20->setAlignment(Qt::AlignCenter);

        D->addWidget(label_20, 1, 2, 1, 1);


        Stages->addLayout(D);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        F_predPC = new QTextBrowser(centralwidget);
        F_predPC->setObjectName(QString::fromUtf8("F_predPC"));
        F_predPC->setMaximumSize(QSize(16777215, 30));
        F_predPC->setFont(font1);
        F_predPC->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        gridLayout->addWidget(F_predPC, 2, 1, 1, 1);

        label_64 = new QLabel(centralwidget);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setMaximumSize(QSize(16777215, 30));
        label_64->setFont(font);
        label_64->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        gridLayout->addWidget(label_64, 2, 0, 1, 1);

        label_63 = new QLabel(centralwidget);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        gridLayout->addWidget(label_63, 0, 6, 1, 1);

        label_66 = new QLabel(centralwidget);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        gridLayout->addWidget(label_66, 0, 4, 1, 1);

        label_67 = new QLabel(centralwidget);
        label_67->setObjectName(QString::fromUtf8("label_67"));

        gridLayout->addWidget(label_67, 0, 3, 1, 1);

        label_55 = new QLabel(centralwidget);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 30));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_55->setFont(font4);
        label_55->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_55->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_55, 0, 1, 1, 1);

        label_65 = new QLabel(centralwidget);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        gridLayout->addWidget(label_65, 0, 5, 1, 1);

        label_68 = new QLabel(centralwidget);
        label_68->setObjectName(QString::fromUtf8("label_68"));

        gridLayout->addWidget(label_68, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 20);
        gridLayout->setColumnStretch(2, 20);
        gridLayout->setColumnStretch(3, 20);
        gridLayout->setColumnStretch(4, 20);
        gridLayout->setColumnStretch(5, 20);
        gridLayout->setColumnStretch(6, 20);

        Stages->addLayout(gridLayout);

        Stages->setStretch(0, 80);
        Stages->setStretch(1, 80);
        Stages->setStretch(2, 80);
        Stages->setStretch(3, 80);

        verticalLayout->addLayout(Stages);

        Regs = new QGridLayout();
        Regs->setObjectName(QString::fromUtf8("Regs"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label, 6, 0, 1, 1);

        rsi = new QTextBrowser(centralwidget);
        rsi->setObjectName(QString::fromUtf8("rsi"));
        sizePolicy1.setHeightForWidth(rsi->sizePolicy().hasHeightForWidth());
        rsi->setSizePolicy(sizePolicy1);
        rsi->setMaximumSize(QSize(16777215, 30));
        rsi->setFont(font1);
        rsi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rsi, 10, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_5->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_5, 6, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_4, 6, 3, 1, 1);

        ZFshow = new QTextBrowser(centralwidget);
        ZFshow->setObjectName(QString::fromUtf8("ZFshow"));
        ZFshow->setMaximumSize(QSize(16777215, 30));
        ZFshow->setFont(font1);
        ZFshow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(ZFshow, 4, 1, 1, 1);

        rbx = new QTextBrowser(centralwidget);
        rbx->setObjectName(QString::fromUtf8("rbx"));
        sizePolicy1.setHeightForWidth(rbx->sizePolicy().hasHeightForWidth());
        rbx->setSizePolicy(sizePolicy1);
        rbx->setMaximumSize(QSize(16777215, 30));
        rbx->setFont(font1);
        rbx->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rbx, 8, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_2, 6, 1, 1, 1);

        OFshow = new QTextBrowser(centralwidget);
        OFshow->setObjectName(QString::fromUtf8("OFshow"));
        OFshow->setMaximumSize(QSize(16777215, 30));
        OFshow->setFont(font1);
        OFshow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(OFshow, 4, 2, 1, 1);

        r14 = new QTextBrowser(centralwidget);
        r14->setObjectName(QString::fromUtf8("r14"));
        sizePolicy1.setHeightForWidth(r14->sizePolicy().hasHeightForWidth());
        r14->setSizePolicy(sizePolicy1);
        r14->setMaximumSize(QSize(16777215, 30));
        r14->setFont(font1);
        r14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r14, 12, 4, 1, 1);

        rcx = new QTextBrowser(centralwidget);
        rcx->setObjectName(QString::fromUtf8("rcx"));
        sizePolicy1.setHeightForWidth(rcx->sizePolicy().hasHeightForWidth());
        rcx->setSizePolicy(sizePolicy1);
        rcx->setMaximumSize(QSize(16777215, 30));
        rcx->setFont(font1);
        rcx->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rcx, 8, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_9->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_9, 9, 3, 1, 1);

        rdi = new QTextBrowser(centralwidget);
        rdi->setObjectName(QString::fromUtf8("rdi"));
        sizePolicy1.setHeightForWidth(rdi->sizePolicy().hasHeightForWidth());
        rdi->setSizePolicy(sizePolicy1);
        rdi->setMaximumSize(QSize(16777215, 30));
        rdi->setFont(font1);
        rdi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rdi, 10, 2, 1, 1);

        r11 = new QTextBrowser(centralwidget);
        r11->setObjectName(QString::fromUtf8("r11"));
        sizePolicy1.setHeightForWidth(r11->sizePolicy().hasHeightForWidth());
        r11->setSizePolicy(sizePolicy1);
        r11->setMaximumSize(QSize(16777215, 30));
        r11->setFont(font1);
        r11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r11, 12, 1, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font4);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_10->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_10, 9, 4, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font4);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_16->setTextFormat(Qt::AutoText);
        label_16->setScaledContents(false);
        label_16->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_16, 11, 4, 1, 1);

        rbp = new QTextBrowser(centralwidget);
        rbp->setObjectName(QString::fromUtf8("rbp"));
        sizePolicy1.setHeightForWidth(rbp->sizePolicy().hasHeightForWidth());
        rbp->setSizePolicy(sizePolicy1);
        rbp->setMaximumSize(QSize(16777215, 30));
        rbp->setFont(font1);
        rbp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rbp, 10, 0, 1, 1);

        CFshow = new QTextBrowser(centralwidget);
        CFshow->setObjectName(QString::fromUtf8("CFshow"));
        CFshow->setMaximumSize(QSize(16777215, 30));
        CFshow->setFont(font1);
        CFshow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(CFshow, 4, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_7->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_7, 9, 1, 1, 1);

        rsp = new QTextBrowser(centralwidget);
        rsp->setObjectName(QString::fromUtf8("rsp"));
        sizePolicy1.setHeightForWidth(rsp->sizePolicy().hasHeightForWidth());
        rsp->setSizePolicy(sizePolicy1);
        rsp->setMaximumSize(QSize(16777215, 30));
        rsp->setFont(font1);
        rsp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rsp, 8, 4, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_8->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_8, 9, 2, 1, 1);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMaximumSize(QSize(16777215, 30));
        label_27->setFont(font4);
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_27->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_27, 3, 2, 1, 1);

        r10 = new QTextBrowser(centralwidget);
        r10->setObjectName(QString::fromUtf8("r10"));
        r10->setMaximumSize(QSize(16777215, 30));
        r10->setFont(font1);
        r10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r10, 12, 0, 1, 1);

        r13 = new QTextBrowser(centralwidget);
        r13->setObjectName(QString::fromUtf8("r13"));
        sizePolicy1.setHeightForWidth(r13->sizePolicy().hasHeightForWidth());
        r13->setSizePolicy(sizePolicy1);
        r13->setMaximumSize(QSize(16777215, 30));
        r13->setFont(font1);
        r13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r13, 12, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_3, 6, 4, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_6->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_6, 9, 0, 1, 1);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font4);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_17->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_17, 11, 3, 1, 1);

        r9 = new QTextBrowser(centralwidget);
        r9->setObjectName(QString::fromUtf8("r9"));
        sizePolicy1.setHeightForWidth(r9->sizePolicy().hasHeightForWidth());
        r9->setSizePolicy(sizePolicy1);
        r9->setMaximumSize(QSize(16777215, 30));
        r9->setFont(font1);
        r9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r9, 10, 4, 1, 1);

        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMaximumSize(QSize(16777215, 30));
        label_28->setFont(font4);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_28->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_28, 3, 3, 1, 1);

        SFshow = new QTextBrowser(centralwidget);
        SFshow->setObjectName(QString::fromUtf8("SFshow"));
        SFshow->setMaximumSize(QSize(16777215, 30));
        SFshow->setFont(font1);
        SFshow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(SFshow, 4, 3, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_15->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_15, 11, 0, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font4);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_19->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_19, 11, 1, 1, 1);

        label_37 = new QLabel(centralwidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setFont(font3);
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_37->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_37, 5, 0, 1, 5);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font4);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_18->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_18, 11, 2, 1, 1);

        rdx = new QTextBrowser(centralwidget);
        rdx->setObjectName(QString::fromUtf8("rdx"));
        sizePolicy1.setHeightForWidth(rdx->sizePolicy().hasHeightForWidth());
        rdx->setSizePolicy(sizePolicy1);
        rdx->setMaximumSize(QSize(16777215, 30));
        rdx->setFont(font1);
        rdx->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rdx, 8, 2, 1, 1);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMaximumSize(QSize(16777215, 30));
        label_26->setFont(font4);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_26->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_26, 3, 1, 1, 1);

        r12 = new QTextBrowser(centralwidget);
        r12->setObjectName(QString::fromUtf8("r12"));
        sizePolicy1.setHeightForWidth(r12->sizePolicy().hasHeightForWidth());
        r12->setSizePolicy(sizePolicy1);
        r12->setMaximumSize(QSize(16777215, 30));
        r12->setFont(font1);
        r12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r12, 12, 2, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 30));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_12->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_12, 3, 0, 1, 1);

        r8 = new QTextBrowser(centralwidget);
        r8->setObjectName(QString::fromUtf8("r8"));
        sizePolicy1.setHeightForWidth(r8->sizePolicy().hasHeightForWidth());
        r8->setSizePolicy(sizePolicy1);
        r8->setMaximumSize(QSize(16777215, 30));
        r8->setFont(font1);
        r8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(r8, 10, 3, 1, 1);

        rax = new QTextBrowser(centralwidget);
        rax->setObjectName(QString::fromUtf8("rax"));
        sizePolicy1.setHeightForWidth(rax->sizePolicy().hasHeightForWidth());
        rax->setSizePolicy(sizePolicy1);
        rax->setMaximumSize(QSize(16777215, 30));
        rax->setFont(font1);
        rax->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        Regs->addWidget(rax, 8, 0, 1, 1);

        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMaximumSize(QSize(16777215, 30));
        label_30->setFont(font3);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        label_30->setAlignment(Qt::AlignCenter);

        Regs->addWidget(label_30, 2, 0, 1, 5);

        Regs->setRowStretch(0, 1);
        Regs->setColumnStretch(0, 1);

        verticalLayout->addLayout(Regs);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 26));
        sizePolicy.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy);
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CZ_cpu: pipe", nullptr));
        actiondddd->setText(QCoreApplication::translate("MainWindow", "dddd", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "stat", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "CPI", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
#if QT_CONFIG(whatsthis)
        Debug->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\211\223\345\274\200\350\260\203\350\257\225\347\252\227\345\217\243\357\274\214\350\247\202\345\257\237\350\277\220\350\241\214\344\275\215\347\275\256\357\274\214\346\267\273\345\212\240\346\226\255\347\202\271</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        Debug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        next1->setText(QCoreApplication::translate("MainWindow", "next1", nullptr));
        run->setText(QCoreApplication::translate("MainWindow", "run", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "terminal", nullptr));
        hlt->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "dstM", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "Writeback Stage", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "valE", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "valM", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "instr", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "dstE", nullptr));
        label_45->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        label_60->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "dstM", nullptr));
        label_42->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        label_43->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "dstE", nullptr));
        label_41->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "valA", nullptr));
        label_47->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "Cnd", nullptr));
        label_44->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "valE", nullptr));
        label_48->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "instr", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "Memory Stage", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "valC", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "valB", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "srcB", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", " Execute Stage", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "dstM", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "instr", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "dstE", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "srcA", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "valA", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "rB", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "valC", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "valP", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "Fetch Stage", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "rA", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Decode Stage", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "instr", nullptr));
        F_predPC->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_63->setText(QString());
        label_66->setText(QString());
        label_67->setText(QString());
        label_55->setText(QCoreApplication::translate("MainWindow", "predPC", nullptr));
        label_65->setText(QString());
        label_68->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "%rax", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "%rdx", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "%rbx", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "%rcx", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "%r8", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "%r9", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "%r14", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "%rsi", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "%rdi", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "SF", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "%rsp", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "%rbp", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "%r13", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "OF", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "%r10", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "%r11", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Registers", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "%r12", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "ZF", nullptr));
        label_12->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "Condition Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
