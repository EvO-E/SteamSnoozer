#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "snooz.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    this->setWindowTitle("Steam Snoozer 0.1");
}

void MainWindow::on_pushButton_clicked()
{
    snooz S;
    S.Snoozer(1);
}
void MainWindow::on_pushButton_2_clicked()
{
    snooz S;
    S.Snoozer(2);
}
void MainWindow::on_actionAbout_This_Software_triggered()
{

  QMessageBox msgBox;
  msgBox.setText("Steam Snoozer Version 0.1 By RaiN-\nShoutout To My Boy Mech");
  msgBox.exec();
}


