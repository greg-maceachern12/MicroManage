/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *txtUser;
    QLineEdit *txtPass;
    QToolButton *signupButton;
    QWidget *Login;
    QCheckBox *rememberMe;
    QLabel *micromanageLabel;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(829, 590);
        LoginForm->setAutoFillBackground(false);
        LoginForm->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(LoginForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 190, 211, 41));
        QFont font;
        font.setFamily(QStringLiteral("Avenir Next"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("font: 22pt \"Avenir Next\";"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(LoginForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 380, 114, 32));
        txtUser = new QLineEdit(LoginForm);
        txtUser->setObjectName(QStringLiteral("txtUser"));
        txtUser->setGeometry(QRect(270, 260, 291, 31));
        txtPass = new QLineEdit(LoginForm);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setGeometry(QRect(270, 300, 291, 31));
        txtPass->setEchoMode(QLineEdit::Password);
        signupButton = new QToolButton(LoginForm);
        signupButton->setObjectName(QStringLiteral("signupButton"));
        signupButton->setGeometry(QRect(300, 440, 231, 22));
        QFont font1;
        font1.setPointSize(13);
        signupButton->setFont(font1);
        Login = new QWidget(LoginForm);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(0, 0, 829, 590));
        Login->setAutoFillBackground(false);
        rememberMe = new QCheckBox(LoginForm);
        rememberMe->setObjectName(QStringLiteral("rememberMe"));
        rememberMe->setGeometry(QRect(270, 350, 121, 20));
        micromanageLabel = new QLabel(LoginForm);
        micromanageLabel->setObjectName(QStringLiteral("micromanageLabel"));
        micromanageLabel->setGeometry(QRect(200, 90, 431, 101));
        Login->raise();
        label_2->raise();
        pushButton->raise();
        txtUser->raise();
        txtPass->raise();
        signupButton->raise();
        rememberMe->raise();
        micromanageLabel->raise();

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "Form", nullptr));
        label_2->setText(QApplication::translate("LoginForm", "<html><head/><body><p><span style=\" font-size:18pt;\">Log In to Your Account</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("LoginForm", "Log In", nullptr));
        txtUser->setText(QString());
        txtPass->setText(QString());
        signupButton->setText(QApplication::translate("LoginForm", "Don't have an account? Sign up here", nullptr));
        rememberMe->setText(QApplication::translate("LoginForm", "Remember me", nullptr));
        micromanageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H