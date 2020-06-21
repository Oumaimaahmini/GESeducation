#include "welcome.h"
#include "ui_welcome.h"
#include "etudiant.h"
#include "professeur.h"
#include "matiere.h"
#include "note.h"

welcome::welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
}

welcome::~welcome()
{
    delete ui;
}



void welcome::on_pushButton_etudiant_clicked()
{

    etudiant etud;
    etud.setModal(true);
    etud.exec();
}

void welcome::on_pushButton_prof_clicked()
{

    professeur prof;
    prof.setModal(true);
    prof.exec();
}

void welcome::on_pushButton_matiere_clicked()
{

    matiere mat;
    mat.setModal(true);
    mat.exec();
}

void welcome::on_pushButton_clicked()
{
    etudiant etud;
    etud.setModal(true);
    etud.exec();

}

void welcome::on_pushButton_notes_clicked()
{
    Note no;
    no.setModal(true);
    no.exec();
}
