#ifndef SECENDLOGIN_H
#define SECENDLOGIN_H

#include <QDialog>
#include "login.h"

namespace Ui {
class secendlogin;
}

class secendlogin : public QDialog
{
    Q_OBJECT

public:
    login connect;
    explicit secendlogin(QWidget *parent = nullptr);
    ~secendlogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::secendlogin *ui;
};

#endif // SECENDLOGIN_H
