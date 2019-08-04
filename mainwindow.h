#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<Q
 #include "reserve.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_flight_clicked();

    void on_ticket_clicked();

    void on_quit_clicked();

    void on_passenger_clicked();


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    reserve* re;

};

#endif // MAINWINDOW_H
