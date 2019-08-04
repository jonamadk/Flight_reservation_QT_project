#include "confirmpage.h"
#include "ui_confirmpage.h"
#include "reserve.h"

confirmpage::confirmpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmpage)
{
    ui->setupUi(this);
}

confirmpage::~confirmpage()
{
    delete ui;
}

void confirmpage::on_yes_clicked()
{
reserve *rs =new reserve(this);
rs->show();
this->hide();
}

void confirmpage::on_pushButton_2_clicked()
{
hide();
}
void confirmpage:: setlabels(QString n,QString passn, QString conn ,QString fli, QString loct ){

    ui->user->setText(n);
   ui->pass->setText(passn);
   ui->con->setText(conn);
   ui->ff->setText(fli);
   ui->loc->setText(loct);


}
