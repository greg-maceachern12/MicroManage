/********************************************************************************
** Form generated from reading UI file 'welcomeform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEFORM_H
#define UI_WELCOMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeForm
{
public:
    QLabel *logoLabel;
    QLabel *welcomeLabel;
    QLabel *micromanageLabel;
    QLabel *chooseLabel;
    QPushButton *landlordButton;
    QPushButton *tenantButton;
    QToolButton *loginButton;

    void setupUi(QWidget *WelcomeForm)
    {
        if (WelcomeForm->objectName().isEmpty())
            WelcomeForm->setObjectName(QString::fromUtf8("WelcomeForm"));
        WelcomeForm->resize(829, 590);
        logoLabel = new QLabel(WelcomeForm);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(40, 30, 71, 71));
        welcomeLabel = new QLabel(WelcomeForm);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(280, 40, 281, 51));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        micromanageLabel = new QLabel(WelcomeForm);
        micromanageLabel->setObjectName(QString::fromUtf8("micromanageLabel"));
        micromanageLabel->setGeometry(QRect(300, 100, 241, 41));
        QFont font;
        font.setPointSize(24);
        micromanageLabel->setFont(font);
        micromanageLabel->setAlignment(Qt::AlignCenter);
        chooseLabel = new QLabel(WelcomeForm);
        chooseLabel->setObjectName(QString::fromUtf8("chooseLabel"));
        chooseLabel->setGeometry(QRect(330, 180, 191, 16));
        landlordButton = new QPushButton(WelcomeForm);
        landlordButton->setObjectName(QString::fromUtf8("landlordButton"));
        landlordButton->setGeometry(QRect(240, 240, 361, 81));
        tenantButton = new QPushButton(WelcomeForm);
        tenantButton->setObjectName(QString::fromUtf8("tenantButton"));
        tenantButton->setGeometry(QRect(240, 340, 361, 81));
        loginButton = new QToolButton(WelcomeForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(300, 460, 241, 21));
        QFont font1;
        font1.setPointSize(13);
        loginButton->setFont(font1);

        retranslateUi(WelcomeForm);

        QMetaObject::connectSlotsByName(WelcomeForm);
    } // setupUi

    void retranslateUi(QWidget *WelcomeForm)
    {
        WelcomeForm->setWindowTitle(QApplication::translate("WelcomeForm", "Form", nullptr));
        logoLabel->setText(QString());
        welcomeLabel->setText(QApplication::translate("WelcomeForm", "Welcome to ", nullptr));
        micromanageLabel->setText(QApplication::translate("WelcomeForm", "MICROMANAGE", nullptr));
        chooseLabel->setText(QApplication::translate("WelcomeForm", "Choose your position to begin", nullptr));
        landlordButton->setText(QApplication::translate("WelcomeForm", "Landlord", nullptr));
        tenantButton->setText(QApplication::translate("WelcomeForm", "Tenant", nullptr));
        loginButton->setText(QApplication::translate("WelcomeForm", "Already have an account? Log in here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeForm: public Ui_WelcomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEFORM_H
