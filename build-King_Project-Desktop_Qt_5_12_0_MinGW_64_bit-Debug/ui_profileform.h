/********************************************************************************
** Form generated from reading UI file 'profileform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEFORM_H
#define UI_PROFILEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileForm
{
public:
    QLineEdit *landlord;
    QTextEdit *contact;
    QTextEdit *properties;
    QTextEdit *name;
    QTextEdit *description;
    QTextEdit *txtEmail;
    QTextEdit *age;
    QPushButton *refresh;
    QToolButton *menuButton;
    QToolButton *editButton;

    void setupUi(QWidget *ProfileForm)
    {
        if (ProfileForm->objectName().isEmpty())
            ProfileForm->setObjectName(QString::fromUtf8("ProfileForm"));
        ProfileForm->resize(829, 590);
        landlord = new QLineEdit(ProfileForm);
        landlord->setObjectName(QString::fromUtf8("landlord"));
        landlord->setGeometry(QRect(600, 60, 101, 41));
        QFont font;
        font.setPointSize(22);
        landlord->setFont(font);
        contact = new QTextEdit(ProfileForm);
        contact->setObjectName(QString::fromUtf8("contact"));
        contact->setGeometry(QRect(130, 470, 531, 81));
        properties = new QTextEdit(ProfileForm);
        properties->setObjectName(QString::fromUtf8("properties"));
        properties->setGeometry(QRect(130, 400, 531, 61));
        name = new QTextEdit(ProfileForm);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(270, 90, 311, 71));
        description = new QTextEdit(ProfileForm);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(130, 290, 531, 111));
        txtEmail = new QTextEdit(ProfileForm);
        txtEmail->setObjectName(QString::fromUtf8("txtEmail"));
        txtEmail->setGeometry(QRect(250, 270, 151, 31));
        age = new QTextEdit(ProfileForm);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(400, 170, 181, 111));
        refresh = new QPushButton(ProfileForm);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(30, 40, 114, 32));
        menuButton = new QToolButton(ProfileForm);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        editButton = new QToolButton(ProfileForm);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(640, 500, 45, 45));
        editButton->setCheckable(true);

        retranslateUi(ProfileForm);

        QMetaObject::connectSlotsByName(ProfileForm);
    } // setupUi

    void retranslateUi(QWidget *ProfileForm)
    {
        ProfileForm->setWindowTitle(QApplication::translate("ProfileForm", "Form", nullptr));
        landlord->setText(QApplication::translate("ProfileForm", "Landlord", nullptr));
        contact->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Daniel Wellington</span></p></body></html>", nullptr));
        properties->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Landlord</p></body></html>", nullptr));
        name->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:600;\">Daniel Wellington</span></p></body></html>", nullptr));
        description->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Hi, I am a landlord in the Kingston area.</span></p></body></html>", nullptr));
        txtEmail->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">15jgjf2@queensu.ca</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        age->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Age: 38</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">673 King St,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Kingston, ON Canada</p></body></html>", nullptr));
        refresh->setText(QApplication::translate("ProfileForm", "PushButton", nullptr));
        menuButton->setText(QApplication::translate("ProfileForm", "...", nullptr));
        editButton->setText(QApplication::translate("ProfileForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileForm: public Ui_ProfileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEFORM_H
