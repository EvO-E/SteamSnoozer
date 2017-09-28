#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void on_pushButton_clicked();

private slots:
    void on_pushButton_2_clicked();



    void on_actionAbout_This_Software_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
