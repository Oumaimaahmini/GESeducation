#include "secendlogin.h"
#include "ui_secendlogin.h"
#include "welcome.h"


secendlogin::secendlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secendlogin)
{
    ui->setupUi(this);
}

secendlogin::~secendlogin()
{
    delete ui;
}

void secendlogin::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("select * from administrateurs where username='"+username+"' and password='"+password+"'");
    if(qry.exec())
    {
                int count=0;
                while(qry.next())
    {
                count++;}
                if(count==1){
                ui->label_3->setText("username and password is correct");
                connect.closedb();
                this->hide();
                welcome we;
                we.setModal(true);
                we.exec();
                }
                if(count<1)
                ui->label_3->setText("username and password is incorrect");}

}



