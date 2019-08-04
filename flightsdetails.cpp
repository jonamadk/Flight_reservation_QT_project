#include "flightsdetails.h"
#include "ui_flightsdetails.h"
#include"reserve.h"

flightsdetails::flightsdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::flightsdetails)
{
    ui->setupUi(this);
}

flightsdetails::~flightsdetails()
{
    delete ui;
}

void flightsdetails::on_pushButton_clicked()
{
    reserve* rv=new reserve(this);
    rv->show();
    this->hide();
}
