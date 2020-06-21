#include "login.h"
#include "ui_login.h"
#include "secendlogin.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    secendlogin sec;
    sec.setModal(true);
    sec.exec();
}
