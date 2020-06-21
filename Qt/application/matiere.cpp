#include "matiere.h"
#include "ui_matiere.h"

matiere::matiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matiere)
{
    ui->setupUi(this);
}

matiere::~matiere()
{
    delete ui;
}

void matiere::on_pushButton_ajoutmat_clicked()
{
    login connect;
    QString id,lib,idfil;
    id=ui->lineEdit_idmat->text();
    lib=ui->lineEdit_libel->text();
    idfil=ui->lineEdit_idfil->text();


    connect.opendb();
    QSqlQuery qry;
    qry.prepare("insert into matiere (ID,libelle,ID_filiere) values ('"+id+"','"+lib+"','"+idfil+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Enregistrer"),tr("Enregistre"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void matiere::on_pushButton_modifmat_clicked()
{
    login connect;
    QString id,lib,idfil;
    id=ui->lineEdit_idmat->text();
    lib=ui->lineEdit_libel->text();
    idfil=ui->lineEdit_idfil->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Update matiere set ID='"+id+"', libelle='"+lib+"',ID_filiere='"+idfil+"' where ID='"+id+"' ");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Modifier"),tr("modifie"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void matiere::on_pushButton_suppmat_clicked()
{
    login connect;
    QString id;
    id=ui->lineEdit_idmat->text();


    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Delete from matiere where ID='"+id+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Supprimer"),tr("Supprime"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void matiere::on_pushButton_affichmat_clicked()
{
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select * from matiere");
    query->exec();

    model->setQuery(*query);
    ui->tableView_mat->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());
}

void matiere::on_tableView_mat_activated(const QModelIndex &index)
{
    QString val=ui->tableView_mat->model()->data(index).toString();
    login connect;
    connect.opendb();
    QSqlQuery qry;
    qry.prepare("select * from matiere where ID='"+val+"' or libelle='"+val+"'or ID_filiere='"+val+"'  ");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_idmat->setText(qry.value(0).toString());
            ui->lineEdit_libel->setText(qry.value(1).toString());
            ui->lineEdit_idfil->setText(qry.value(2).toString());
        }
        connect.closedb();
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}
