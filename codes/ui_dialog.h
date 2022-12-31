/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *rawcode;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QListView *transcode;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QListView *points;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QListView *locs;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *stage_ch;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *W;
    QRadioButton *M;
    QRadioButton *E;
    QRadioButton *D;
    QRadioButton *F;
    QRadioButton *Delete;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1110, 888);
        Dialog->setStyleSheet(QString::fromUtf8("#Dialog {\n"
"	border-image: url(:/image/myimages/dark.jpg);\n"
"}\n"
"#Dialog * {\n"
"border-image:url();\n"
"}"));
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout->addWidget(label);

        rawcode = new QListView(Dialog);
        rawcode->setObjectName(QString::fromUtf8("rawcode"));
        rawcode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout->addWidget(rawcode);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_4->addWidget(label_2);

        transcode = new QListView(Dialog);
        transcode->setObjectName(QString::fromUtf8("transcode"));
        transcode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_4->addWidget(transcode);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_6->addWidget(label_4);

        points = new QListView(Dialog);
        points->setObjectName(QString::fromUtf8("points"));
        points->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);\n"
"background-color: transparent;\n"
""));

        verticalLayout_6->addWidget(points);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_5->addWidget(label_3);

        locs = new QListView(Dialog);
        locs->setObjectName(QString::fromUtf8("locs"));
        locs->setMaximumSize(QSize(200, 16777215));
        locs->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_5->addWidget(locs);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stage_ch = new QGroupBox(Dialog);
        stage_ch->setObjectName(QString::fromUtf8("stage_ch"));
        stage_ch->setFont(font);
        stage_ch->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));
        verticalLayout_3 = new QVBoxLayout(stage_ch);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        W = new QRadioButton(stage_ch);
        W->setObjectName(QString::fromUtf8("W"));
        W->setFont(font);
        W->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(W);

        M = new QRadioButton(stage_ch);
        M->setObjectName(QString::fromUtf8("M"));
        M->setFont(font);
        M->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(M);

        E = new QRadioButton(stage_ch);
        E->setObjectName(QString::fromUtf8("E"));
        E->setFont(font);
        E->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(E);

        D = new QRadioButton(stage_ch);
        D->setObjectName(QString::fromUtf8("D"));
        D->setFont(font);
        D->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(D);

        F = new QRadioButton(stage_ch);
        F->setObjectName(QString::fromUtf8("F"));
        F->setFont(font);
        F->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(F);

        Delete = new QRadioButton(stage_ch);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setFont(font);
        Delete->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(Delete);


        verticalLayout_2->addWidget(stage_ch);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 20);
        horizontalLayout->setStretch(1, 20);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 10);

        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Debuger", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "rawcode", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "transcode", nullptr));
#if QT_CONFIG(whatsthis)
        label_4->setWhatsThis(QCoreApplication::translate("Dialog", "<html><head/><body><p>your breakpoints</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("Dialog", "b_points", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "view", nullptr));
        stage_ch->setTitle(QCoreApplication::translate("Dialog", "Choose a Stage", nullptr));
        W->setText(QCoreApplication::translate("Dialog", "W", nullptr));
        M->setText(QCoreApplication::translate("Dialog", "M", nullptr));
        E->setText(QCoreApplication::translate("Dialog", "E", nullptr));
        D->setText(QCoreApplication::translate("Dialog", "D", nullptr));
        F->setText(QCoreApplication::translate("Dialog", "F", nullptr));
        Delete->setText(QCoreApplication::translate("Dialog", "Delete", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
