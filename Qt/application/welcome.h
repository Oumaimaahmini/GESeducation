#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>

namespace Ui {
class welcome;
}

class welcome : public QDialog
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = nullptr);
    ~welcome();

private slots:

    void on_pushButton_etudiant_clicked();

    void on_pushButton_prof_clicked();

    void on_pushButton_matiere_clicked();

    void on_pushButton_clicked();

    void on_pushButton_notes_clicked();

private:
    Ui::welcome *ui;
};

#endif // WELCOME_H
