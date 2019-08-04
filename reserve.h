#ifndef RESERVE_H
#define RESERVE_H

#include <QDialog>
#include "confirmpage.h"


namespace Ui {
class reserve;
}

class reserve : public QDialog
{
    Q_OBJECT

public:
    explicit reserve(QWidget *parent = 0);
    ~reserve();

private slots:
    void on_can_clicked();
    void on_confirm_clicked();

private:
    Ui::reserve *ui;
    confirmpage* cf;
};

#endif // RESERVE_H
