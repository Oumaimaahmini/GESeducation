#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include<QDebug>
#include<QFileInfo>


QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
    void closedb(){
        mydb.close();
        mydb.removeDatabase( QSqlDatabase::defaultConnection);
    }
    bool opendb(){
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/sqlite/sig.db");

        if(!mydb.open()){
            qDebug()<<("Failed to open the database");
            return false;}
        else{
            qDebug()<<("Connected....");
            return true;}
    }


public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;

};
#endif // LOGIN_H
