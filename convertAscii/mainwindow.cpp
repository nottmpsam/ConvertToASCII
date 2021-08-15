#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAbstractAnimation>
#include <QMessageBox>
#include <QCheckBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->imgButton, SIGNAL(clicked()), this, SLOT(loadIMG()));
    connect(ui->outButton, SIGNAL(clicked()), this, SLOT(loadOUT()));
    connect(ui->startButton, SIGNAL(clicked()), this, SLOT(startConvert()));
    connect(ui->widthButton, SIGNAL(clicked()), this, SLOT(getWidth()));

    //modern syntax
    connect(ui->checkA, &QCheckBox::toggled, this,  &MainWindow::setCheckA);
    connect(ui->checkB, &QCheckBox::toggled, this,  &MainWindow::setCheckB);

}
void MainWindow::getWidth()
{
    QString temp = ui->lineWidth->text();
    cnvrt.setWidth(temp.toInt());
}
void MainWindow::startConvert()
{
    QMessageBox msg;
    msg.setDefaultButton(QMessageBox::Ok);
    if (!cnvrt.startConvert(choice)) {
        msg.setWindowTitle("Error");
        msg.setText("File/Image did not upload");
    } else {
        msg.setWindowTitle("Finished");
        msg.setText("Image succesfully converted");
    }
    msg.exec();
}
void MainWindow::loadOUT()
{
    if (!cnvrt.loadOUT(ui->lineOut->text())) {
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setDefaultButton(QMessageBox::Ok);
        msg.setText("File opening failed");
        msg.exec();
    }
}
void MainWindow::loadIMG()
{
    if (!cnvrt.loadIMG(ui->lineImg->text())) {
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setDefaultButton(QMessageBox::Ok);
        msg.setText("Image upload failed");
        msg.exec();
    }
}

void MainWindow::setCheckA(bool A)
{
    if (A) {
        choice = 1;
        ui->checkB->setEnabled(false);
    } else {
        ui->checkB->setEnabled(true);
    }
}
void MainWindow::setCheckB(bool B)
{
    if (B) {
        choice = -1;
        ui->checkA->setEnabled(false);
    } else {
        ui->checkA->setEnabled(true);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

