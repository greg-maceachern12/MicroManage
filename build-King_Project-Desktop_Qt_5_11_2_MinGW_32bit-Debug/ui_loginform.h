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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *txtUser;
    QLineEdit *txtPass;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(752, 617);
        label_2 = new QLabel(LoginForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-180, 160, 1061, 41));
        label_2->setStyleSheet(QStringLiteral("font: 22pt \"Avenir Next\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(LoginForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-180, 30, 1061, 151));
        label->setStyleSheet(QStringLiteral("font: 36pt \"Avenir Next\";"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(LoginForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 350, 114, 32));
        txtUser = new QLineEdit(LoginForm);
        txtUser->setObjectName(QStringLiteral("txtUser"));
        txtUser->setGeometry(QRect(210, 230, 291, 31));
        txtPass = new QLineEdit(LoginForm);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setGeometry(QRect(210, 270, 291, 31));

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "Form", nullptr));
        label_2->setText(QApplication::translate("LoginForm", "<html><head/><body><p><span style=\" font-size:18pt;\">Log In to Your Account</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("LoginForm", "<html><head/><body><p><span style=\" color:#ffffff;\">MICROMANAGE</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("LoginForm", "Login", nullptr));
        txtUser->setText(QString());
        txtPass->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
