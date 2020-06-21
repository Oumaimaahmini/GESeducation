#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <QDialog>
#include <QMessageBox>
#include "login.h"

namespace Ui {
class etudiant;
}

class etudiant : public QDialog
{
    Q_OBJECT

public:
    explicit etudiant(QWidget *parent = nullptr);
    ~etudiant();

private slots:
    void on_pushButton_ajouteretud_clicked();

    void on_pushButton_modifieretud_clicked();

    void on_pushButton_supprimeretud_clicked();

    void on_pushButton_afficheretud_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::etudiant *ui;
};

#endif // ETUDIANT_H
