#ifndef MYTICKETINFO_H
#define MYTICKETINFO_H

#include <QDialog>

namespace Ui {
class myticketinfo;
}

class myticketinfo : public QDialog
{
    Q_OBJECT

public:
    explicit myticketinfo(QWidget *parent = 0);
    ~myticketinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::myticketinfo *ui;
};

#endif // MYTICKETINFO_H
