#include "etudiant.h"
#include "ui_etudiant.h"


etudiant::etudiant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::etudiant)
{
    ui->setupUi(this);
}

etudiant::~etudiant()
{
    delete ui;
}

void etudiant::on_pushButton_ajouteretud_clicked()
{
    login connect;
    QString cne,nom,prenom,date;
    cne=ui->lineEdit_cne->text();
    nom=ui->lineEdit_nometud->text();
    prenom=ui->lineEdit_prenometud->text();
    date=ui->dateEdit_dateetud->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("insert into etudiant (CNE,Nom,Prenom,Date_naissance) values ('"+cne+"','"+nom+"','"+prenom+"','"+date+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Enregistrer"),tr("Enregistre"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());

}

void etudiant::on_pushButton_modifieretud_clicked()
{
    login connect;
    QString cne,nom,prenom,date;
    cne=ui->lineEdit_cne->text();
    nom=ui->lineEdit_nometud->text();
    prenom=ui->lineEdit_prenometud->text();
    date=ui->dateEdit_dateetud->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Update etudiant set CNE='"+cne+"', Nom='"+nom+"',Prenom='"+prenom+"',Date_naissance='"+date+"' where CNE='"+cne+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Modifier"),tr("modifie"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void etudiant::on_pushButton_supprimeretud_clicked()
{
    login connect;
    QString cne,nom,prenom,date;
    cne=ui->lineEdit_cne->text();
    nom=ui->lineEdit_nometud->text();
    prenom=ui->lineEdit_prenometud->text();
    date=ui->dateEdit_dateetud->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Delete from etudiant where CNE='"+cne+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Supprimer"),tr("Supprime"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void etudiant::on_pushButton_afficheretud_clicked()
{
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select * from etudiant");
    query->exec();

    model->setQuery(*query);
    ui->tableView->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());


}

void etudiant::on_tableView_activated(const QModelIndex &index)
{

    QString val=ui->tableView->model()->data(index).toString();
    login connect;
    connect.opendb();
    QSqlQuery qry;
    qry.prepare("select * from etudiant where CNE='"+val+"' or Nom='"+val+"'or Prenom='"+val+"' or Date_naissance='"+val+"' ");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_cne->setText(qry.value(0).toString());
            ui->lineEdit_nometud->setText(qry.value(1).toString());
            ui->lineEdit_prenometud->setText(qry.value(2).toString());
            ui->dateEdit_dateetud->setDate(qry.value(3).toDate());
        }
        connect.closedb();
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

