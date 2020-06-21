#include "note.h"
#include "ui_note.h"

Note::Note(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Note)
{
    ui->setupUi(this);
}

Note::~Note()
{
    delete ui;
}

void Note::on_pushButton_ajoutnot_clicked()
{
    login connect;
    QString cne,id,note,nom;
    cne=ui->lineEdit_cne->text();
    nom=ui->lineEdit_nommat->text();
    id=ui->lineEdit_idmat->text();
    note=ui->lineEdit_note->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("insert into notes (CNE,ID_matiere,note,matiere) values ('"+cne+"','"+id+"','"+note+"','"+nom+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Enregistrer"),tr("Enregistre"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void Note::on_pushButton_modifnot_clicked()
{
    login connect;
    QString cne,id,note,nom;
    cne=ui->lineEdit_cne->text();
    nom=ui->lineEdit_nommat->text();
    id=ui->lineEdit_idmat->text();
    note=ui->lineEdit_note->text();

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Update notes set CNE='"+cne+"', matiere='"+nom+"',ID_matiere='"+id+"',note='"+note+"' where CNE='"+cne+"' and ID_matiere='"+id+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Modifier"),tr("modifie"));
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
}

void Note::on_pushButton_supnote_clicked()
{
    login connect;
    QString cne,id;
    cne=ui->lineEdit_cne->text();
    id=ui->lineEdit_idmat->text();


    connect.opendb();
    QSqlQuery qry;
    qry.prepare("Delete from notes where CNE='"+cne+"' and ID_matiere='"+id+"'");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Supprimer"),tr("Supprime"));
        connect.closedb();}
}

void Note::on_pushButton_rafraichir_clicked()
{
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select CNE from etudiant");
    query->exec();

    model->setQuery(*query);
    ui->comboBox_CNE->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());



}

void Note::on_pushButton_ok_clicked()
{
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select ID from matiere");
    query->exec();

    model->setQuery(*query);
    ui->comboBox_ID->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());

}

void Note::on_comboBox_CNE_currentIndexChanged(const QString &arg1)
{
    QString cne=ui->comboBox_CNE->currentText();

    login connect;

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("select * from etudiant where CNE='"+cne+"'");
    if(qry.exec()){
       while(qry.next()){
           ui->lineEdit_cne->setText(qry.value(0).toString());
       }
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());


}

void Note::on_comboBox_ID_currentIndexChanged(const QString &arg1)
{
    QString id=ui->comboBox_ID->currentText();

    login connect;

    connect.opendb();
    QSqlQuery qry;
    qry.prepare("select * from matiere where ID='"+id+"'");
    if(qry.exec()){
       while(qry.next()){
           ui->lineEdit_idmat->setText(qry.value(0).toString());
           ui->lineEdit_nommat->setText(qry.value(1).toString());
       }
        connect.closedb();
    }
    else
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());

}

void Note::on_pushButton_affnoteleve_clicked()
{
    QString cne=ui->comboBox_CNE->currentText();
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select * from notes where CNE='"+cne+"'");
    query->exec();

    model->setQuery(*query);
    ui->tableView_note->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());
}

void Note::on_pushButton_affnotemat_clicked()
{
    QString id=ui->comboBox_ID->currentText();
    login connect;
    QSqlQueryModel*model=new QSqlQueryModel();

    connect.opendb();
    QSqlQuery*query=new QSqlQuery(connect.mydb);

    query->prepare("select * from notes where ID_matiere='"+id+"'");
    query->exec();

    model->setQuery(*query);
    ui->tableView_note->setModel(model);
    connect.closedb();
    qDebug() << (model->rowCount());

}
