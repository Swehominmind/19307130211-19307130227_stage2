#include "mainwindow.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include"myISA.h"
#include"pipelinefun.h"
#include "initializing.h"
#include <QApplication>
#include<iostream>
#include"dialog.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
