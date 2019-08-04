#include "reserve.h"
#include "ui_reserve.h"
#include "mainwindow.h"

reserve::reserve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserve)
{
    ui->setupUi(this);
}

reserve::~reserve()
{
    delete ui;
}

void reserve::on_can_clicked()
{

 MainWindow *mw = new MainWindow(this);
 mw->show();
 this->hide();

}

void reserve::on_confirm_clicked()
{
        hide();
        cf=new confirmpage(this);
        QString name=ui->name->text();
        QString passn=ui->pp->text();
        QString con=ui->cn->text();
        QString fn=ui->fn->currentText();
        QString loc=ui->loc->text();
        cf->setlabels(name,passn,con,fn,loc);
        cf->show();
}
