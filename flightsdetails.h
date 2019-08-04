#ifndef FLIGHTSDETAILS_H
#define FLIGHTSDETAILS_H

#include <QDialog>

namespace Ui {
class flightsdetails;
}

class flightsdetails : public QDialog
{
    Q_OBJECT

public:
    explicit flightsdetails(QWidget *parent = 0);
    ~flightsdetails();

private slots:
    void on_pushButton_clicked();

private:
    Ui::flightsdetails *ui;
};

#endif // FLIGHTSDETAILS_H
