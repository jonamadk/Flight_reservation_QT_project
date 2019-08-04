#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "flightsdetails.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_flight_clicked()
{

flightsdetails* fc=new flightsdetails(this);
fc->show();
this->hide();

}

void MainWindow::on_ticket_clicked()
{

}

void MainWindow::on_quit_clicked()
{
    hide();
}

void MainWindow::on_passenger_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    hide();
    re=new reserve(this);
    re->show();

}
