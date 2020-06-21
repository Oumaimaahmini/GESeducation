#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <QDialog>
#include <QMessageBox>
#include "login.h"

namespace Ui {
class professeur;
}

class professeur : public QDialog
{
    Q_OBJECT

public:
    explicit professeur(QWidget *parent = nullptr);
    ~professeur();

private slots:
    void on_pushButton_ajoutprof_clicked();

    void on_pushButton_modiprof_clicked();

    void on_pushButton_supprof_clicked();

    void on_pushButton_afficheprof_clicked();

    void on_tableView_prof_activated(const QModelIndex &index);

private:
    Ui::professeur *ui;
};

#endif // PROFESSEUR_H
