/********************************************************************************
** Form generated from reading UI file 'matiere.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE_H
#define UI_MATIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_matiere
{
public:
    QLabel *label;
    QLineEdit *lineEdit_idmat;
    QLineEdit *lineEdit_libel;
    QLineEdit *lineEdit_idfil;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_ajoutmat;
    QPushButton *pushButton_modifmat;
    QPushButton *pushButton_suppmat;
    QTableView *tableView_mat;
    QPushButton *pushButton_affichmat;

    void setupUi(QDialog *matiere)
    {
        if (matiere->objectName().isEmpty())
            matiere->setObjectName(QString::fromUtf8("matiere"));
        matiere->resize(838, 385);
        label = new QLabel(matiere);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 371, 271));
        lineEdit_idmat = new QLineEdit(matiere);
        lineEdit_idmat->setObjectName(QString::fromUtf8("lineEdit_idmat"));
        lineEdit_idmat->setGeometry(QRect(100, 60, 113, 20));
        lineEdit_libel = new QLineEdit(matiere);
        lineEdit_libel->setObjectName(QString::fromUtf8("lineEdit_libel"));
        lineEdit_libel->setGeometry(QRect(100, 100, 113, 20));
        lineEdit_idfil = new QLineEdit(matiere);
        lineEdit_idfil->setObjectName(QString::fromUtf8("lineEdit_idfil"));
        lineEdit_idfil->setGeometry(QRect(100, 140, 113, 20));
        label_2 = new QLabel(matiere);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 47, 13));
        label_3 = new QLabel(matiere);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 47, 13));
        label_4 = new QLabel(matiere);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 71, 20));
        label_5 = new QLabel(matiere);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 10, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        pushButton_ajoutmat = new QPushButton(matiere);
        pushButton_ajoutmat->setObjectName(QString::fromUtf8("pushButton_ajoutmat"));
        pushButton_ajoutmat->setGeometry(QRect(120, 210, 75, 23));
        pushButton_modifmat = new QPushButton(matiere);
        pushButton_modifmat->setObjectName(QString::fromUtf8("pushButton_modifmat"));
        pushButton_modifmat->setGeometry(QRect(120, 250, 75, 23));
        pushButton_suppmat = new QPushButton(matiere);
        pushButton_suppmat->setObjectName(QString::fromUtf8("pushButton_suppmat"));
        pushButton_suppmat->setGeometry(QRect(120, 290, 75, 23));
        tableView_mat = new QTableView(matiere);
        tableView_mat->setObjectName(QString::fromUtf8("tableView_mat"));
        tableView_mat->setGeometry(QRect(310, 10, 511, 311));
        pushButton_affichmat = new QPushButton(matiere);
        pushButton_affichmat->setObjectName(QString::fromUtf8("pushButton_affichmat"));
        pushButton_affichmat->setGeometry(QRect(490, 340, 161, 23));

        retranslateUi(matiere);

        QMetaObject::connectSlotsByName(matiere);
    } // setupUi

    void retranslateUi(QDialog *matiere)
    {
        matiere->setWindowTitle(QCoreApplication::translate("matiere", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("matiere", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("matiere", "Libelle", nullptr));
        label_4->setText(QCoreApplication::translate("matiere", "ID de la filiere", nullptr));
        label_5->setText(QCoreApplication::translate("matiere", "Matiere", nullptr));
        pushButton_ajoutmat->setText(QCoreApplication::translate("matiere", "Ajouter", nullptr));
        pushButton_modifmat->setText(QCoreApplication::translate("matiere", "Modifier", nullptr));
        pushButton_suppmat->setText(QCoreApplication::translate("matiere", "Supprimer", nullptr));
        pushButton_affichmat->setText(QCoreApplication::translate("matiere", "Afficher la liste", nullptr));
    } // retranslateUi

};

namespace Ui {
    class matiere: public Ui_matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE_H
