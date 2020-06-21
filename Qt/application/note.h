#ifndef NOTE_H
#define NOTE_H

#include <QDialog>
#include <QMessageBox>
#include "login.h"

namespace Ui {
class Note;
}

class Note : public QDialog
{
    Q_OBJECT

public:
    explicit Note(QWidget *parent = nullptr);
    ~Note();

private slots:
    void on_pushButton_ajoutnot_clicked();

    void on_pushButton_modifnot_clicked();

    void on_pushButton_supnote_clicked();

    void on_pushButton_rafraichir_clicked();

    void on_pushButton_ok_clicked();

    void on_comboBox_CNE_currentIndexChanged(const QString &arg1);

    void on_comboBox_ID_currentIndexChanged(const QString &arg1);

    void on_pushButton_affnoteleve_clicked();

    void on_pushButton_affnotemat_clicked();

private:
    Ui::Note *ui;
};

#endif // NOTE_H
