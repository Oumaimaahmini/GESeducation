/********************************************************************************
** Form generated from reading UI file 'etudiant.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANT_H
#define UI_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_etudiant
{
public:
    QLabel *label;
    QLineEdit *lineEdit_cne;
    QLineEdit *lineEdit_nometud;
    QLineEdit *lineEdit_prenometud;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dateEdit_dateetud;
    QPushButton *pushButton_ajouteretud;
    QPushButton *pushButton_modifieretud;
    QPushButton *pushButton_supprimeretud;
    QTableView *tableView;
    QPushButton *pushButton_afficheretud;
    QLabel *label_6;

    void setupUi(QDialog *etudiant)
    {
        if (etudiant->objectName().isEmpty())
            etudiant->setObjectName(QString::fromUtf8("etudiant"));
        etudiant->resize(843, 378);
        label = new QLabel(etudiant);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 821, 351));
        lineEdit_cne = new QLineEdit(etudiant);
        lineEdit_cne->setObjectName(QString::fromUtf8("lineEdit_cne"));
        lineEdit_cne->setGeometry(QRect(130, 40, 113, 20));
        lineEdit_nometud = new QLineEdit(etudiant);
        lineEdit_nometud->setObjectName(QString::fromUtf8("lineEdit_nometud"));
        lineEdit_nometud->setGeometry(QRect(130, 70, 113, 20));
        lineEdit_prenometud = new QLineEdit(etudiant);
        lineEdit_prenometud->setObjectName(QString::fromUtf8("lineEdit_prenometud"));
        lineEdit_prenometud->setGeometry(QRect(130, 100, 113, 20));
        label_2 = new QLabel(etudiant);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 47, 13));
        label_3 = new QLabel(etudiant);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 47, 13));
        label_4 = new QLabel(etudiant);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 100, 47, 13));
        label_5 = new QLabel(etudiant);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 130, 91, 16));
        dateEdit_dateetud = new QDateEdit(etudiant);
        dateEdit_dateetud->setObjectName(QString::fromUtf8("dateEdit_dateetud"));
        dateEdit_dateetud->setGeometry(QRect(130, 130, 110, 22));
        pushButton_ajouteretud = new QPushButton(etudiant);
        pushButton_ajouteretud->setObjectName(QString::fromUtf8("pushButton_ajouteretud"));
        pushButton_ajouteretud->setGeometry(QRect(90, 190, 75, 23));
        pushButton_modifieretud = new QPushButton(etudiant);
        pushButton_modifieretud->setObjectName(QString::fromUtf8("pushButton_modifieretud"));
        pushButton_modifieretud->setGeometry(QRect(90, 230, 75, 23));
        pushButton_supprimeretud = new QPushButton(etudiant);
        pushButton_supprimeretud->setObjectName(QString::fromUtf8("pushButton_supprimeretud"));
        pushButton_supprimeretud->setGeometry(QRect(90, 270, 75, 23));
        tableView = new QTableView(etudiant);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(320, 30, 491, 281));
        pushButton_afficheretud = new QPushButton(etudiant);
        pushButton_afficheretud->setObjectName(QString::fromUtf8("pushButton_afficheretud"));
        pushButton_afficheretud->setGeometry(QRect(510, 330, 151, 23));
        label_6 = new QLabel(etudiant);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 10, 101, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);

        retranslateUi(etudiant);

        QMetaObject::connectSlotsByName(etudiant);
    } // setupUi

    void retranslateUi(QDialog *etudiant)
    {
        etudiant->setWindowTitle(QCoreApplication::translate("etudiant", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("etudiant", "CNE", nullptr));
        label_3->setText(QCoreApplication::translate("etudiant", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("etudiant", "Prenom", nullptr));
        label_5->setText(QCoreApplication::translate("etudiant", "Date de naissance", nullptr));
        pushButton_ajouteretud->setText(QCoreApplication::translate("etudiant", "Ajouter", nullptr));
        pushButton_modifieretud->setText(QCoreApplication::translate("etudiant", "Modifier", nullptr));
        pushButton_supprimeretud->setText(QCoreApplication::translate("etudiant", "Supprimer", nullptr));
        pushButton_afficheretud->setText(QCoreApplication::translate("etudiant", "Afficher la liste", nullptr));
        label_6->setText(QCoreApplication::translate("etudiant", "ETUDIANT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiant: public Ui_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANT_H
