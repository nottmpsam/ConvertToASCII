#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "convert.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    convert cnvrt;
    int choice = 1;
public slots:
    void loadIMG();
    void loadOUT();
    void startConvert();
    void getWidth();
    void setCheckB(bool);
    void setCheckA(bool);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
