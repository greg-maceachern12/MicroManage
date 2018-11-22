/********************************************************************************
** Form generated from reading UI file 'propertymainform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYMAINFORM_H
#define UI_PROPERTYMAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyMainForm
{
public:
    QToolButton *menuButton;
    QWidget *Properties;
    QTextBrowser *address;
    QGraphicsView *graphicsView;
    QLabel *headerLabel;
    QTextBrowser *tenant;
    QToolButton *addButton;

    void setupUi(QWidget *PropertyMainForm)
    {
        if (PropertyMainForm->objectName().isEmpty())
            PropertyMainForm->setObjectName(QStringLiteral("PropertyMainForm"));
        PropertyMainForm->setEnabled(true);
        PropertyMainForm->resize(829, 590);
        PropertyMainForm->setMouseTracking(false);
        PropertyMainForm->setAutoFillBackground(false);
        PropertyMainForm->setStyleSheet(QStringLiteral(""));
        menuButton = new QToolButton(PropertyMainForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        Properties = new QWidget(PropertyMainForm);
        Properties->setObjectName(QStringLiteral("Properties"));
        Properties->setGeometry(QRect(0, 0, 829, 590));
        address = new QTextBrowser(PropertyMainForm);
        address->setObjectName(QStringLiteral("address"));
        address->setEnabled(true);
        address->setGeometry(QRect(400, 100, 231, 81));
        address->setFrameShape(QFrame::NoFrame);
        address->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        address->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView = new QGraphicsView(PropertyMainForm);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(140, 100, 191, 161));
        headerLabel = new QLabel(PropertyMainForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(110, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        tenant = new QTextBrowser(PropertyMainForm);
        tenant->setObjectName(QStringLiteral("tenant"));
        tenant->setEnabled(true);
        tenant->setGeometry(QRect(400, 200, 121, 31));
        tenant->setFrameShape(QFrame::NoFrame);
        tenant->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tenant->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        addButton = new QToolButton(PropertyMainForm);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(720, 490, 45, 45));
        Properties->raise();
        menuButton->raise();
        address->raise();
        graphicsView->raise();
        headerLabel->raise();
        tenant->raise();
        addButton->raise();

        retranslateUi(PropertyMainForm);

        QMetaObject::connectSlotsByName(PropertyMainForm);
    } // setupUi

    void retranslateUi(QWidget *PropertyMainForm)
    {
        PropertyMainForm->setWindowTitle(QApplication::translate("PropertyMainForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("PropertyMainForm", "...", nullptr));
        address->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">444 King St.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Kingston,ON Canada</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">K7L 5W2</span></p>\n"
"<p style=\"-qt-paragraph-typ"
                        "e:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:14pt; color:#ffaa00;\"><br /></p></body></html>", nullptr));
        headerLabel->setText(QApplication::translate("PropertyMainForm", "My Properties", nullptr));
        tenant->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">7 Tenants</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:14pt; color:#ffaa00;\"><br /></p></body></html>", nullptr));
        addButton->setText(QApplication::translate("PropertyMainForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyMainForm: public Ui_PropertyMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYMAINFORM_H
