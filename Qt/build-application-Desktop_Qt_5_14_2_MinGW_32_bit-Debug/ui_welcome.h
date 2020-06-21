/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QPushButton *pushButton_prof;
    QPushButton *pushButton_matiere;
    QPushButton *pushButton;
    QPushButton *pushButton_notes;

    void setupUi(QDialog *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->resize(421, 411);
        welcome->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/w.jpg);"));
        pushButton_prof = new QPushButton(welcome);
        pushButton_prof->setObjectName(QString::fromUtf8("pushButton_prof"));
        pushButton_prof->setGeometry(QRect(130, 140, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(12);
        pushButton_prof->setFont(font);
        pushButton_matiere = new QPushButton(welcome);
        pushButton_matiere->setObjectName(QString::fromUtf8("pushButton_matiere"));
        pushButton_matiere->setGeometry(QRect(130, 210, 131, 41));
        pushButton_matiere->setFont(font);
        pushButton = new QPushButton(welcome);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 70, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_notes = new QPushButton(welcome);
        pushButton_notes->setObjectName(QString::fromUtf8("pushButton_notes"));
        pushButton_notes->setGeometry(QRect(130, 280, 131, 41));
        pushButton_notes->setFont(font1);

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QDialog *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Dialog", nullptr));
        pushButton_prof->setText(QCoreApplication::translate("welcome", "Professeur", nullptr));
        pushButton_matiere->setText(QCoreApplication::translate("welcome", "Matiere", nullptr));
        pushButton->setText(QCoreApplication::translate("welcome", "Etudiant", nullptr));
        pushButton_notes->setText(QCoreApplication::translate("welcome", "Notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
