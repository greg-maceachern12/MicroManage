/********************************************************************************
** Form generated from reading UI file 'propertymainform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYMAINFORM_H
#define UI_PROPERTYMAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyMainForm
{
public:
    QTextEdit *titleText;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_9;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *PropertyMainForm)
    {
        if (PropertyMainForm->objectName().isEmpty())
            PropertyMainForm->setObjectName(QString::fromUtf8("PropertyMainForm"));
        PropertyMainForm->setEnabled(true);
        PropertyMainForm->resize(738, 547);
        PropertyMainForm->setMouseTracking(false);
        PropertyMainForm->setAutoFillBackground(false);
        PropertyMainForm->setStyleSheet(QString::fromUtf8(""));
        titleText = new QTextEdit(PropertyMainForm);
        titleText->setObjectName(QString::fromUtf8("titleText"));
        titleText->setEnabled(true);
        titleText->setGeometry(QRect(140, 10, 470, 70));
        QFont font;
        font.setPointSize(36);
        font.setKerning(true);
        titleText->setFont(font);
        titleText->setMouseTracking(false);
        titleText->setFocusPolicy(Qt::StrongFocus);
        titleText->setContextMenuPolicy(Qt::DefaultContextMenu);
        titleText->setStyleSheet(QString::fromUtf8(""));
        titleText->setFrameShape(QFrame::NoFrame);
        titleText->setFrameShadow(QFrame::Plain);
        titleText->setLineWidth(1);
        titleText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser = new QTextBrowser(PropertyMainForm);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(70, 90, 110, 40));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2 = new QTextBrowser(PropertyMainForm);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setEnabled(true);
        textBrowser_2->setGeometry(QRect(70, 140, 120, 40));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3 = new QTextBrowser(PropertyMainForm);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setEnabled(true);
        textBrowser_3->setGeometry(QRect(270, 210, 160, 40));
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5 = new QTextBrowser(PropertyMainForm);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setEnabled(true);
        textBrowser_5->setGeometry(QRect(190, 90, 500, 40));
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6 = new QTextBrowser(PropertyMainForm);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setEnabled(true);
        textBrowser_6->setGeometry(QRect(260, 140, 300, 40));
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea = new QScrollArea(PropertyMainForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(80, 260, 541, 220));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 218));
        textBrowser_7 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setEnabled(true);
        textBrowser_7->setGeometry(QRect(10, 155, 160, 40));
        textBrowser_7->setFrameShape(QFrame::NoFrame);
        textBrowser_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setEnabled(true);
        textBrowser_8->setGeometry(QRect(190, 155, 160, 40));
        textBrowser_8->setFrameShape(QFrame::NoFrame);
        textBrowser_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBrowser_9 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setEnabled(true);
        textBrowser_9->setGeometry(QRect(370, 155, 160, 40));
        textBrowser_9->setFrameShape(QFrame::NoFrame);
        textBrowser_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_9->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView_2 = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 10, 161, 131));
        graphicsView_3 = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(190, 10, 161, 131));
        graphicsView_4 = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(370, 10, 161, 131));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(PropertyMainForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 490, 190, 50));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(PropertyMainForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 490, 190, 50));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(PropertyMainForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 490, 190, 50));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(PropertyMainForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 0, 61, 50));
        pushButton_4->setFont(font1);

        retranslateUi(PropertyMainForm);

        QMetaObject::connectSlotsByName(PropertyMainForm);
    } // setupUi

    void retranslateUi(QWidget *PropertyMainForm)
    {
        PropertyMainForm->setWindowTitle(QApplication::translate("PropertyMainForm", "Form", nullptr));
        titleText->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:36pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-weight:600; color:#ffaa00;\">379 JOHNSON</span></p></body></html>", nullptr));
        textBrowser->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Adress:</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Landlord:</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Tenant List:</span></p></body></html>", nullptr));
        textBrowser_5->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">379 Johnson Street, Kingston</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:14pt; color:#ffaa00;\"><br /></p></body></html>", nullptr));
        textBrowser_6->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Sheldon Richard</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:14pt; color:#ffaa00;\"><br /></p></body></html>", nullptr));
        textBrowser_7->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Alex</span></p></body></html>", nullptr));
        textBrowser_8->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Ben</span></p></body></html>", nullptr));
        textBrowser_9->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; color:#ffaa00;\">Jeff</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("PropertyMainForm", "Notification", nullptr));
        pushButton_2->setText(QApplication::translate("PropertyMainForm", "Repair request", nullptr));
        pushButton_3->setText(QApplication::translate("PropertyMainForm", "Chat Channel", nullptr));
        pushButton_4->setText(QApplication::translate("PropertyMainForm", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyMainForm: public Ui_PropertyMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYMAINFORM_H
