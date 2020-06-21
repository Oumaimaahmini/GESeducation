/********************************************************************************
** Form generated from reading UI file 'secendlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECENDLOGIN_H
#define UI_SECENDLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secendlogin
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_3;

    void setupUi(QDialog *secendlogin)
    {
        if (secendlogin->objectName().isEmpty())
            secendlogin->setObjectName(QString::fromUtf8("secendlogin"));
        secendlogin->resize(346, 177);
        groupBox = new QGroupBox(secendlogin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 301, 141));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 78, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 64, 16));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 110, 75, 23));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(95, 41, 135, 48));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        verticalLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);

        label_3 = new QLabel(secendlogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 150, 191, 16));

        retranslateUi(secendlogin);

        QMetaObject::connectSlotsByName(secendlogin);
    } // setupUi

    void retranslateUi(QDialog *secendlogin)
    {
        secendlogin->setWindowTitle(QCoreApplication::translate("secendlogin", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("secendlogin", "Connecter", nullptr));
        label->setText(QCoreApplication::translate("secendlogin", "nom d'utilisateur", nullptr));
        label_2->setText(QCoreApplication::translate("secendlogin", "mot de passe", nullptr));
        pushButton->setText(QCoreApplication::translate("secendlogin", "connecter", nullptr));
        label_3->setText(QCoreApplication::translate("secendlogin", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secendlogin: public Ui_secendlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECENDLOGIN_H
