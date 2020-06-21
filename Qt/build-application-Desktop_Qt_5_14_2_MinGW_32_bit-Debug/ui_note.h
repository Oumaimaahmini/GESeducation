/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QLabel *label;
    QLineEdit *lineEdit_cne;
    QLineEdit *lineEdit_idmat;
    QLineEdit *lineEdit_note;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_ajoutnot;
    QPushButton *pushButton_modifnot;
    QPushButton *pushButton_supnote;
    QComboBox *comboBox_CNE;
    QComboBox *comboBox_ID;
    QPushButton *pushButton_affnoteleve;
    QPushButton *pushButton_affnotemat;
    QTableView *tableView_note;
    QLineEdit *lineEdit_nommat;
    QLabel *label_5;
    QPushButton *pushButton_rafraichir;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName(QString::fromUtf8("Note"));
        Note->resize(844, 389);
        label = new QLabel(Note);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_cne = new QLineEdit(Note);
        lineEdit_cne->setObjectName(QString::fromUtf8("lineEdit_cne"));
        lineEdit_cne->setGeometry(QRect(110, 60, 113, 20));
        lineEdit_idmat = new QLineEdit(Note);
        lineEdit_idmat->setObjectName(QString::fromUtf8("lineEdit_idmat"));
        lineEdit_idmat->setGeometry(QRect(110, 100, 113, 20));
        lineEdit_note = new QLineEdit(Note);
        lineEdit_note->setObjectName(QString::fromUtf8("lineEdit_note"));
        lineEdit_note->setGeometry(QRect(110, 140, 113, 20));
        label_2 = new QLabel(Note);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 13));
        label_3 = new QLabel(Note);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 61, 16));
        label_4 = new QLabel(Note);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 47, 13));
        pushButton_ajoutnot = new QPushButton(Note);
        pushButton_ajoutnot->setObjectName(QString::fromUtf8("pushButton_ajoutnot"));
        pushButton_ajoutnot->setGeometry(QRect(120, 220, 75, 23));
        pushButton_modifnot = new QPushButton(Note);
        pushButton_modifnot->setObjectName(QString::fromUtf8("pushButton_modifnot"));
        pushButton_modifnot->setGeometry(QRect(120, 260, 75, 23));
        pushButton_supnote = new QPushButton(Note);
        pushButton_supnote->setObjectName(QString::fromUtf8("pushButton_supnote"));
        pushButton_supnote->setGeometry(QRect(120, 300, 75, 23));
        comboBox_CNE = new QComboBox(Note);
        comboBox_CNE->setObjectName(QString::fromUtf8("comboBox_CNE"));
        comboBox_CNE->setGeometry(QRect(260, 60, 81, 22));
        comboBox_ID = new QComboBox(Note);
        comboBox_ID->setObjectName(QString::fromUtf8("comboBox_ID"));
        comboBox_ID->setGeometry(QRect(260, 100, 81, 22));
        pushButton_affnoteleve = new QPushButton(Note);
        pushButton_affnoteleve->setObjectName(QString::fromUtf8("pushButton_affnoteleve"));
        pushButton_affnoteleve->setGeometry(QRect(550, 300, 151, 23));
        pushButton_affnotemat = new QPushButton(Note);
        pushButton_affnotemat->setObjectName(QString::fromUtf8("pushButton_affnotemat"));
        pushButton_affnotemat->setGeometry(QRect(520, 340, 211, 23));
        tableView_note = new QTableView(Note);
        tableView_note->setObjectName(QString::fromUtf8("tableView_note"));
        tableView_note->setGeometry(QRect(415, 20, 411, 261));
        lineEdit_nommat = new QLineEdit(Note);
        lineEdit_nommat->setObjectName(QString::fromUtf8("lineEdit_nommat"));
        lineEdit_nommat->setGeometry(QRect(110, 180, 113, 20));
        label_5 = new QLabel(Note);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 180, 91, 16));
        pushButton_rafraichir = new QPushButton(Note);
        pushButton_rafraichir->setObjectName(QString::fromUtf8("pushButton_rafraichir"));
        pushButton_rafraichir->setGeometry(QRect(370, 60, 41, 23));
        pushButton_ok = new QPushButton(Note);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(370, 100, 41, 23));

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QDialog *Note)
    {
        Note->setWindowTitle(QCoreApplication::translate("Note", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Note", "NOTES", nullptr));
        label_2->setText(QCoreApplication::translate("Note", "CNE", nullptr));
        label_3->setText(QCoreApplication::translate("Note", "ID matiere", nullptr));
        label_4->setText(QCoreApplication::translate("Note", "Note", nullptr));
        pushButton_ajoutnot->setText(QCoreApplication::translate("Note", "Ajouter", nullptr));
        pushButton_modifnot->setText(QCoreApplication::translate("Note", "Modifier", nullptr));
        pushButton_supnote->setText(QCoreApplication::translate("Note", "Supprimer", nullptr));
        pushButton_affnoteleve->setText(QCoreApplication::translate("Note", "Afficher les notes d'eleve", nullptr));
        pushButton_affnotemat->setText(QCoreApplication::translate("Note", "Afficher les notes dans une matiere", nullptr));
        label_5->setText(QCoreApplication::translate("Note", "Nom de la matiere", nullptr));
        pushButton_rafraichir->setText(QCoreApplication::translate("Note", "OK", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("Note", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
