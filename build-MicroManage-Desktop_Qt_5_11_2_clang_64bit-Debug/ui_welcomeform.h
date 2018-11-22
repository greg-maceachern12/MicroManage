/********************************************************************************
** Form generated from reading UI file 'welcomeform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
    QLabel *welcomeToLabel;
    QLabel *chooseLabel;
    QPushButton *landlordButton;
    QPushButton *tenantButton;
    QToolButton *loginButton;
    QWidget *Welcome;
    QLabel *micromanageLabel;

    void setupUi(QWidget *WelcomeForm)
    {
        if (WelcomeForm->objectName().isEmpty())
            WelcomeForm->setObjectName(QStringLiteral("WelcomeForm"));
        WelcomeForm->resize(829, 590);
        logoLabel = new QLabel(WelcomeForm);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(40, 30, 100, 100));
        welcomeToLabel = new QLabel(WelcomeForm);
        welcomeToLabel->setObjectName(QStringLiteral("welcomeToLabel"));
        welcomeToLabel->setGeometry(QRect(280, 40, 281, 51));
        QFont font;
        font.setPointSize(35);
        welcomeToLabel->setFont(font);
        welcomeToLabel->setAlignment(Qt::AlignCenter);
        chooseLabel = new QLabel(WelcomeForm);
        chooseLabel->setObjectName(QStringLiteral("chooseLabel"));
        chooseLabel->setGeometry(QRect(300, 190, 241, 31));
        QFont font1;
        font1.setPointSize(16);
        chooseLabel->setFont(font1);
        chooseLabel->setAlignment(Qt::AlignCenter);
        landlordButton = new QPushButton(WelcomeForm);
        landlordButton->setObjectName(QStringLiteral("landlordButton"));
        landlordButton->setGeometry(QRect(240, 240, 361, 81));
        tenantButton = new QPushButton(WelcomeForm);
        tenantButton->setObjectName(QStringLiteral("tenantButton"));
        tenantButton->setGeometry(QRect(240, 340, 361, 81));
        loginButton = new QToolButton(WelcomeForm);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(300, 460, 241, 21));
        QFont font2;
        font2.setPointSize(13);
        loginButton->setFont(font2);
        Welcome = new QWidget(WelcomeForm);
        Welcome->setObjectName(QStringLiteral("Welcome"));
        Welcome->setGeometry(QRect(0, 0, 829, 590));
        Welcome->setAutoFillBackground(false);
        micromanageLabel = new QLabel(WelcomeForm);
        micromanageLabel->setObjectName(QStringLiteral("micromanageLabel"));
        micromanageLabel->setGeometry(QRect(220, 90, 401, 91));
        Welcome->raise();
        logoLabel->raise();
        welcomeToLabel->raise();
        chooseLabel->raise();
        landlordButton->raise();
        tenantButton->raise();
        loginButton->raise();
        micromanageLabel->raise();

        retranslateUi(WelcomeForm);

        QMetaObject::connectSlotsByName(WelcomeForm);
    } // setupUi

    void retranslateUi(QWidget *WelcomeForm)
    {
        WelcomeForm->setWindowTitle(QApplication::translate("WelcomeForm", "Form", nullptr));
        logoLabel->setText(QString());
        welcomeToLabel->setText(QApplication::translate("WelcomeForm", "Welcome to ", nullptr));
        chooseLabel->setText(QApplication::translate("WelcomeForm", "Choose your position to begin", nullptr));
        landlordButton->setText(QApplication::translate("WelcomeForm", "Landlord", nullptr));
        tenantButton->setText(QApplication::translate("WelcomeForm", "Tenant", nullptr));
        loginButton->setText(QApplication::translate("WelcomeForm", "Already have an account? Log in here", nullptr));
        micromanageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WelcomeForm: public Ui_WelcomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEFORM_H
