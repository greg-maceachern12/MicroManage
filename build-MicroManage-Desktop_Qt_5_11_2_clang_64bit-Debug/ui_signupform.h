/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpForm
{
public:
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_8;
    QPushButton *btnCancel;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnSubmit;
    QLineEdit *txtName;
    QLabel *label_11;
    QLineEdit *txtUid;
    QLineEdit *txtAge;
    QLineEdit *txtAddress;
    QLineEdit *txtEmail;
    QToolButton *menuButton;
    QLineEdit *txtPassword;
    QLabel *label_9;
    QLineEdit *txtPhone;
    QWidget *SignUp;
    QLabel *label_user;
    QLineEdit *txtType;

    void setupUi(QWidget *SignUpForm)
    {
        if (SignUpForm->objectName().isEmpty())
            SignUpForm->setObjectName(QStringLiteral("SignUpForm"));
        SignUpForm->resize(829, 590);
        SignUpForm->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(SignUpForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 190, 71, 41));
        label_5->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(SignUpForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(300, 10, 201, 81));
        label_10->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 20px;\n"
"background-color: white;"));
        label_10->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(SignUpForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 280, 91, 21));
        label_4->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(SignUpForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 350, 101, 41));
        label_8->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnCancel = new QPushButton(SignUpForm);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(220, 470, 111, 41));
        btnCancel->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"background-color: transparent;\n"
"font-size: 15px;"));
        label_2 = new QLabel(SignUpForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 150, 71, 41));
        label_2->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(SignUpForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 240, 81, 21));
        label_3->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnSubmit = new QPushButton(SignUpForm);
        btnSubmit->setObjectName(QStringLiteral("btnSubmit"));
        btnSubmit->setGeometry(QRect(420, 470, 131, 41));
        btnSubmit->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"background-color: orange;\n"
"font-size: 15px;"));
        txtName = new QLineEdit(SignUpForm);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(360, 160, 201, 21));
        label_11 = new QLabel(SignUpForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(240, 110, 101, 41));
        label_11->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtUid = new QLineEdit(SignUpForm);
        txtUid->setObjectName(QStringLiteral("txtUid"));
        txtUid->setGeometry(QRect(360, 120, 201, 21));
        txtAge = new QLineEdit(SignUpForm);
        txtAge->setObjectName(QStringLiteral("txtAge"));
        txtAge->setGeometry(QRect(360, 240, 201, 21));
        txtAddress = new QLineEdit(SignUpForm);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));
        txtAddress->setGeometry(QRect(360, 280, 201, 21));
        txtEmail = new QLineEdit(SignUpForm);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(360, 200, 201, 21));
        menuButton = new QToolButton(SignUpForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        txtPassword = new QLineEdit(SignUpForm);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setGeometry(QRect(360, 400, 201, 21));
        label_9 = new QLabel(SignUpForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 390, 101, 41));
        label_9->setStyleSheet(QStringLiteral("font-family: \"Avenir Next\";"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtPhone = new QLineEdit(SignUpForm);
        txtPhone->setObjectName(QStringLiteral("txtPhone"));
        txtPhone->setGeometry(QRect(360, 360, 201, 21));
        SignUp = new QWidget(SignUpForm);
        SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->setGeometry(QRect(0, 0, 829, 590));
        label_user = new QLabel(SignUpForm);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(230, 320, 111, 20));
        label_user->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtType = new QLineEdit(SignUpForm);
        txtType->setObjectName(QStringLiteral("txtType"));
        txtType->setGeometry(QRect(360, 320, 201, 21));
        txtType->setReadOnly(true);
        SignUp->raise();
        btnCancel->raise();
        btnSubmit->raise();
        txtName->raise();
        label_11->raise();
        txtUid->raise();
        txtAge->raise();
        txtAddress->raise();
        txtEmail->raise();
        txtPassword->raise();
        txtPhone->raise();
        label_5->raise();
        label_9->raise();
        label_10->raise();
        label_4->raise();
        label_8->raise();
        label_2->raise();
        label_3->raise();
        menuButton->raise();
        label_user->raise();
        txtType->raise();
        QWidget::setTabOrder(txtUid, txtName);
        QWidget::setTabOrder(txtName, txtEmail);
        QWidget::setTabOrder(txtEmail, txtAge);
        QWidget::setTabOrder(txtAge, txtAddress);
        QWidget::setTabOrder(txtAddress, txtPhone);
        QWidget::setTabOrder(txtPhone, txtPassword);
        QWidget::setTabOrder(txtPassword, btnCancel);
        QWidget::setTabOrder(btnCancel, btnSubmit);
        QWidget::setTabOrder(btnSubmit, menuButton);

        retranslateUi(SignUpForm);

        QMetaObject::connectSlotsByName(SignUpForm);
    } // setupUi

    void retranslateUi(QWidget *SignUpForm)
    {
        SignUpForm->setWindowTitle(QApplication::translate("SignUpForm", "Form", nullptr));
        label_5->setText(QApplication::translate("SignUpForm", "Email*", nullptr));
        label_10->setText(QApplication::translate("SignUpForm", "Your Image", nullptr));
        label_4->setText(QApplication::translate("SignUpForm", "Address*", nullptr));
        label_8->setText(QApplication::translate("SignUpForm", "Phone Number", nullptr));
        btnCancel->setText(QApplication::translate("SignUpForm", "Cancel", nullptr));
        label_2->setText(QApplication::translate("SignUpForm", "Full Name*", nullptr));
        label_3->setText(QApplication::translate("SignUpForm", "Age", nullptr));
        btnSubmit->setText(QApplication::translate("SignUpForm", "Submit", nullptr));
        label_11->setText(QApplication::translate("SignUpForm", "Username*", nullptr));
        txtUid->setText(QString());
        txtPassword->setText(QString());
        label_9->setText(QApplication::translate("SignUpForm", "Password", nullptr));
        txtPhone->setText(QString());
        label_user->setText(QApplication::translate("SignUpForm", "Type of User*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpForm: public Ui_SignUpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
