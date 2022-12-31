#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QStringListModel>
#include <set>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QStringList theStrl1;
    QStringList theStrl2;
    QStringList Strloc;
    QStringList Strpoints;
    void strset();
    void statenew();
    char Debug_stage = ' ';
    bool pausepoint;
    std::set<int> Fpoints;
    std::set<int> Dpoints;
    std::set<int> Epoints;
    std::set<int> Mpoints;
    std::set<int> Wpoints;
private slots:
    void on_points_clicked(const QModelIndex &index);

    void setDebug_stage();
    void on_rawcode_clicked(const QModelIndex &index);

    void on_transcode_clicked(const QModelIndex &index);
private:
    Ui::Dialog *ui;
    QStringListModel *strm;
    QStringListModel *strm1;
    QStringListModel *locm;
    QStringListModel *pointsm;
};

#endif // DIALOG_H
