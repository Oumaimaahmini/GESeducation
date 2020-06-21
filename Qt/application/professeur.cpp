#include "professeur.h"
#include "ui_professeur.h"

professeur::professeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::professeur)
{
    ui->setupUi(this);
}

professeur::~professeur()
{
    delete ui;
}

void professeur::on_pushButton_ajoutprof_clicked()
{
    login connect;
    QString id,nom,prenom,adres,tele;
    id=ui->lineEdit_idprof->text();
    nom=ui->lineEdit_nomprof->text();
    prenom=ui->lineEdit_prenomprof->text();
    adres=ui->lineEdit_adresprof->text();
    tele=ui->lineEdit_teleprof->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("insert into prof (ID,nom,prenom,adresse,telephone) values ('"+id+"','"+nom+"','"+prenom+"','"+adres+"','"+tele+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Enregistrer"),tr("Enregistre"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());

}

void professeur::on_pushButton_modiprof_clicked()
{
    login connect;
    QString id,nom,prenom,adres,tele;
    id=ui->lineEdit_idprof->text();
    nom=ui->lineEdit_nomprof->text();
    prenom=ui->lineEdit_prenomprof->text();
    adres=ui->lineEdit_adresprof->text();
    tele=ui->lineEdit_teleprof->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Update prof set ID='"+id+"', nom='"+nom+"',prenom='"+prenom+"',adresse='"+adres+"',telephone='"+tele+"' where ID='"+id+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Modifier"),tr("modifie"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void professeur::on_pushButton_supprof_clicked()
{
    login connect;
    QString id;
    id=ui->lineEdit_idprof->text();


    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Delete from prof where ID='"+id+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Supprimer"),tr("Supprime"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void professeur::on_pushButton_afficheprof_clicked()
{
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select * from prof ");
    query->exec();

    model->setQuery(*query);
    ui->tableView_prof->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());
}

void professeur::on_tableView_prof_activated(const QModelIndex &index)
{
    QString val=ui->tableView_prof->model()->data(index).toString();
    login connect;
    connect.opendb();
    QSqlQuery qry;
    qry.prepare("select * from prof where ID='"+val+"'or nom='"+val+"'or prenom='"+val+"'or adresse='"+val+"'or telephone='"+val+"' ");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_idprof->setText(qry.value(0).toString());
            ui->lineEdit_nomprof->setText(qry.value(1).toString());
            ui->lineEdit_prenomprof->setText(qry.value(2).toString());
            ui->lineEdit_adresprof->setText(qry.value(3).toString());
            ui->lineEdit_teleprof->setText(qry.value(4).toString());
        }
        connect.closedb();
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}
