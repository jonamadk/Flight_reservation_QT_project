#include "myticketinfo.h"
#include "ui_myticketinfo.h"

myticketinfo::myticketinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myticketinfo)
{
    ui->setupUi(this);
}

myticketinfo::~myticketinfo()
{
    delete ui;
}

void myticketinfo::on_pushButton_clicked()
{

}

