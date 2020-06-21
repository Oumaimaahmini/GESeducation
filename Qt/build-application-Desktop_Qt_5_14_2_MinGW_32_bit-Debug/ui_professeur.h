/********************************************************************************
** Form generated from reading UI file 'professeur.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSEUR_H
#define UI_PROFESSEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_professeur
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_idprof;
    QLineEdit *lineEdit_nomprof;
    QLineEdit *lineEdit_prenomprof;
    QLineEdit *lineEdit_adresprof;
    QLineEdit *lineEdit_teleprof;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_ajoutprof;
    QPushButton *pushButton_modiprof;
    QPushButton *pushButton_supprof;
    QTableView *tableView_prof;
    QPushButton *pushButton_afficheprof;

    void setupUi(QDialog *professeur)
    {
        if (professeur->objectName().isEmpty())
            professeur->setObjectName(QString::fromUtf8("professeur"));
        professeur->resize(842, 378);
        label = new QLabel(professeur);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 381, 261));
        label_2 = new QLabel(professeur);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 10, 111, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        lineEdit_idprof = new QLineEdit(professeur);
        lineEdit_idprof->setObjectName(QString::fromUtf8("lineEdit_idprof"));
        lineEdit_idprof->setGeometry(QRect(110, 50, 113, 20));
        lineEdit_nomprof = new QLineEdit(professeur);
        lineEdit_nomprof->setObjectName(QString::fromUtf8("lineEdit_nomprof"));
        lineEdit_nomprof->setGeometry(QRect(110, 80, 113, 20));
        lineEdit_prenomprof = new QLineEdit(professeur);
        lineEdit_prenomprof->setObjectName(QString::fromUtf8("lineEdit_prenomprof"));
        lineEdit_prenomprof->setGeometry(QRect(110, 110, 113, 20));
        lineEdit_adresprof = new QLineEdit(professeur);
        lineEdit_adresprof->setObjectName(QString::fromUtf8("lineEdit_adresprof"));
        lineEdit_adresprof->setGeometry(QRect(110, 140, 113, 20));
        lineEdit_teleprof = new QLineEdit(professeur);
        lineEdit_teleprof->setObjectName(QString::fromUtf8("lineEdit_teleprof"));
        lineEdit_teleprof->setGeometry(QRect(110, 170, 113, 20));
        label_3 = new QLabel(professeur);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 50, 47, 13));
        label_4 = new QLabel(professeur);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 80, 47, 13));
        label_5 = new QLabel(professeur);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 110, 47, 13));
        label_6 = new QLabel(professeur);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 140, 47, 13));
        label_7 = new QLabel(professeur);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 170, 51, 16));
        pushButton_ajoutprof = new QPushButton(professeur);
        pushButton_ajoutprof->setObjectName(QString::fromUtf8("pushButton_ajoutprof"));
        pushButton_ajoutprof->setGeometry(QRect(130, 220, 75, 23));
        pushButton_modiprof = new QPushButton(professeur);
        pushButton_modiprof->setObjectName(QString::fromUtf8("pushButton_modiprof"));
        pushButton_modiprof->setGeometry(QRect(130, 260, 75, 23));
        pushButton_supprof = new QPushButton(professeur);
        pushButton_supprof->setObjectName(QString::fromUtf8("pushButton_supprof"));
        pushButton_supprof->setGeometry(QRect(130, 300, 75, 23));
        tableView_prof = new QTableView(professeur);
        tableView_prof->setObjectName(QString::fromUtf8("tableView_prof"));
        tableView_prof->setGeometry(QRect(315, 11, 511, 311));
        pushButton_afficheprof = new QPushButton(professeur);
        pushButton_afficheprof->setObjectName(QString::fromUtf8("pushButton_afficheprof"));
        pushButton_afficheprof->setGeometry(QRect(470, 330, 191, 23));

        retranslateUi(professeur);

        QMetaObject::connectSlotsByName(professeur);
    } // setupUi

    void retranslateUi(QDialog *professeur)
    {
        professeur->setWindowTitle(QCoreApplication::translate("professeur", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("professeur", "Professeur", nullptr));
        label_3->setText(QCoreApplication::translate("professeur", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("professeur", "Nom", nullptr));
        label_5->setText(QCoreApplication::translate("professeur", "Prenom", nullptr));
        label_6->setText(QCoreApplication::translate("professeur", "Adresse", nullptr));
        label_7->setText(QCoreApplication::translate("professeur", "Telephone", nullptr));
        pushButton_ajoutprof->setText(QCoreApplication::translate("professeur", "Ajouter", nullptr));
        pushButton_modiprof->setText(QCoreApplication::translate("professeur", "Modifier", nullptr));
        pushButton_supprof->setText(QCoreApplication::translate("professeur", "Supprimer", nullptr));
        pushButton_afficheprof->setText(QCoreApplication::translate("professeur", "Afficher la liste", nullptr));
    } // retranslateUi

};

namespace Ui {
    class professeur: public Ui_professeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSEUR_H
