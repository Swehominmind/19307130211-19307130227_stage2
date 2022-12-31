#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include"dialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_next1_clicked(bool checked);

    void on_run_clicked(bool checked);

    void on_inname_returnPressed();

    void on_reset_clicked(bool checked);

    void on_Debug_clicked();

    void on_timer_timeout();
    void on_speed_valueChanged(int value);

    void on_hlt_clicked();

private:
    Ui::MainWindow *ui;
    Dialog debuger;
    long long int cnt = 0;//need to check here
    bool runOK;
    QTimer *fTimer;
    QTime fTimeCounter;
};
#endif // MAINWINDOW_H
