#ifndef MATIERE_H
#define MATIERE_H

#include <QDialog>
#include <QMessageBox>
#include "login.h"

namespace Ui {
class matiere;
}

class matiere : public QDialog
{
    Q_OBJECT

public:
    explicit matiere(QWidget *parent = nullptr);
    ~matiere();

private slots:
    void on_pushButton_ajoutmat_clicked();

    void on_pushButton_modifmat_clicked();

    void on_pushButton_suppmat_clicked();

    void on_pushButton_affichmat_clicked();

    void on_tableView_mat_activated(const QModelIndex &index);

private:
    Ui::matiere *ui;
};

#endif // MATIERE_H
