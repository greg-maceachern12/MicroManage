/********************************************************************************
** Form generated from reading UI file 'profileform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEFORM_H
#define UI_PROFILEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileForm
{
public:
    QToolButton *menuButton;
    QWidget *Profile;
    QLineEdit *landlord;
    QTextEdit *name;
    QTextEdit *age;
    QTextEdit *txtEmail;
    QToolButton *editButton;
    QTextEdit *description;
    QTextEdit *properties;
    QTextEdit *contact;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *importButton;
    QLabel *image;

    void setupUi(QWidget *ProfileForm)
    {
        if (ProfileForm->objectName().isEmpty())
            ProfileForm->setObjectName(QStringLiteral("ProfileForm"));
        ProfileForm->resize(829, 590);
        menuButton = new QToolButton(ProfileForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        Profile = new QWidget(ProfileForm);
        Profile->setObjectName(QStringLiteral("Profile"));
        Profile->setGeometry(QRect(0, 0, 829, 590));
        landlord = new QLineEdit(Profile);
        landlord->setObjectName(QStringLiteral("landlord"));
        landlord->setGeometry(QRect(710, 30, 101, 41));
        QFont font;
        font.setPointSize(22);
        landlord->setFont(font);
        name = new QTextEdit(Profile);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(370, 60, 311, 71));
        QFont font1;
        font1.setPointSize(36);
        name->setFont(font1);
        age = new QTextEdit(Profile);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(530, 140, 151, 101));
        txtEmail = new QTextEdit(Profile);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(460, 470, 201, 31));
        editButton = new QToolButton(Profile);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(750, 520, 45, 45));
        editButton->setCheckable(true);
        description = new QTextEdit(Profile);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(140, 270, 531, 71));
        properties = new QTextEdit(Profile);
        properties->setObjectName(QStringLiteral("properties"));
        properties->setGeometry(QRect(140, 370, 531, 61));
        contact = new QTextEdit(Profile);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(140, 470, 531, 81));
        label = new QLabel(Profile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 350, 81, 16));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(Profile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 450, 59, 16));
        label_2->setFont(font2);
        textEdit = new QTextEdit(Profile);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(460, 140, 71, 101));
        importButton = new QPushButton(Profile);
        importButton->setObjectName(QStringLiteral("importButton"));
        importButton->setGeometry(QRect(190, 210, 114, 32));
        image = new QLabel(Profile);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(150, 40, 161, 161));
        landlord->raise();
        name->raise();
        age->raise();
        editButton->raise();
        description->raise();
        properties->raise();
        contact->raise();
        label->raise();
        label_2->raise();
        textEdit->raise();
        importButton->raise();
        txtEmail->raise();
        image->raise();
        Profile->raise();
        menuButton->raise();

        retranslateUi(ProfileForm);

        QMetaObject::connectSlotsByName(ProfileForm);
    } // setupUi

    void retranslateUi(QWidget *ProfileForm)
    {
        ProfileForm->setWindowTitle(QApplication::translate("ProfileForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("ProfileForm", "...", nullptr));
        landlord->setText(QApplication::translate("ProfileForm", "Landlord", nullptr));
        name->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:36pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Daniel Wellington</span></p></body></html>", nullptr));
        age->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">38</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">673 King St,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Kingston, ON Canada</p></body></html>", nullptr));
        txtEmail->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">15jgjf2@queensu.ca</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        editButton->setText(QApplication::translate("ProfileForm", "...", nullptr));
        description->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Hi, I am a landlord in the Kingston area.</span></p></body></html>", nullptr));
        properties->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Landlord</p></body></html>", nullptr));
        contact->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Daniel Wellington</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("ProfileForm", "Properties", nullptr));
        label_2->setText(QApplication::translate("ProfileForm", "Contact", nullptr));
        textEdit->setHtml(QApplication::translate("ProfileForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       Age:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Address:</p></body></html>", nullptr));
        importButton->setText(QApplication::translate("ProfileForm", "Import Photo", nullptr));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProfileForm: public Ui_ProfileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEFORM_H
