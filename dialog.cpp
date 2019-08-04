#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase ::addDatabase("QSQLTE");
    mydb.setDatabaseName("C:Users/Manoj/Desktop/Newfolder/a.db");
    if(!mydb.open())
        ui->status->setText("failed to open the databse");
    else {
        ui->status->setText("connected");
    }

}

Dialog::~Dialog()
{
    delete ui;
}
