#include <QtSql>
#include "messages.h"
#include <vector>
#include <string>
#include "dbmodel.h"


Messages::Messages(QWidget *parent) : QWidget(parent), ui(new Ui::MessagesForm) {

    ui->setupUi(this);
    ui->category->addItem("Sent");
    ui->category->addItem("Received");
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(on_refresh_clicked()));
    connect(ui->sendMessage, SIGNAL(clicked()), this, SLOT(on_send_clicked()));
    ui->message1->setReadOnly(true);
    ui->message2->setReadOnly(true);
    ui->message3->setReadOnly(true);

    ui->subject->setPlaceholderText("Subject");
    ui->message->setPlaceholderText("Message");

    QPalette *palette = new QPalette();
    palette->setColor(QPalette::Base, Qt::white);
    palette->setColor(QPalette::Text, Qt::darkGray);
    ui->message1->setPalette(*palette);
    ui->message2->setPalette(*palette);
    ui->message3->setPalette(*palette);

    ui->messageInfo1->setText("");
    ui->messageInfo2->setText("");
    ui->messageInfo3->setText("");


    ui->sendTo->addItem("To Greg");
    ui->sendTo->addItem("To Mike");
    ui->sendTo->addItem("To Lauren");
    ui->sendTo->addItem("To Trevor");
    ui->sendTo->addItem("To Xinbo");
    ui->sendTo->addItem("To Jinzao");

    pullMessages();

}


void Messages::sendMessage(char message, int uid){
       QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("michaelbriggs03651.ipagemysql.com");
       db.setDatabaseName("micromanage");
       db.setUserName("mike");
       db.setPassword("password");
       bool ok = db.open();
}


void Messages::on_send_clicked(){
    qDebug() << QDateTime::currentDateTime();
    QString message = ui->message->toPlainText();
    QString subject = ui->subject->text();
    QString rid = ui->send_to->currentText();
    rid.remove(0, 3);
    qDebug() << rid;
    QString user = dbmodel::username;

    if(ui->message->toPlainText()!="" && ui->subject->text() != ""){

    QSqlQuery query;
       query.prepare("INSERT INTO messages (rid, content, subject, sid, date) "
                  "VALUES (:rid, :content, :subject, :sid, :date)");
       query.bindValue(":rid", rid);
           query.bindValue(":content", message);
           query.bindValue(":subject", subject);
           query.bindValue(":sid", user);
           query.bindValue(":date", QDateTime::currentDateTime());
    query.exec();

    }

    else{
        //ui->error->setText("please fill in all fields");

    }
    ui->message->clear();
    ui->subject->clear();
}


QToolButton* Messages::getMenuButton() {
    return ui->menuButton;
}
void Messages::pullMessages(){
    qDebug() << "messagesssssß";
    QSqlQuery qry;
    QString user = dbmodel::username;
    QVector<QString> s;
    s.reserve(6);
    s.resize(6);
    QVector<QString> s2;
    s2.reserve(6);
    s2.resize(6);
    ui->message1->clear();
    ui->message2->clear();
    ui->message3->clear();

    ui->messageInfo1->clear();
    ui->messageInfo2->clear();
    ui->messageInfo3->clear();

    int count = 0;
    if(ui->category->currentText() == "Received"){
    if (qry.exec("SELECT content FROM messages WHERE rid='"+user+"'" )) {

        while (qry.next()) {
            s.push_front(qry.value(0).toString());
            count ++;
           }
    }
    if (qry.exec("SELECT subject FROM messages WHERE rid='"+user+"'" )) {

        while (qry.next()) {
            s2.push_front(qry.value(0).toString());
            count ++;
           }
    }
    }

    if(ui->category->currentText() == "Sent"){
    if (qry.exec("SELECT content FROM messages WHERE sid='"+user+"'" )) {

        while (qry.next()) {
            s.push_front(qry.value(0).toString());
            count ++;
           }
    }
    if (qry.exec("SELECT subject,rid FROM messages WHERE sid='"+user+"'" )) {

        while (qry.next()) {
            s2.push_front( "From: "+qry.value(1).toString() + " | Subject: " + qry.value(0).toString());
            count ++;
           }
    }
    }
        if(s.at(0)!=""){
            ui->message1->clear();
            ui->messageInfo1->setText(s2.at(0));
            qDebug() << s.at(0);
            ui->message1->setPlainText(s.at(0));
        }
        if(s.at(1)!=""){
            ui->messageInfo2->setText(s2.at(1));
            ui->message2->setPlainText(s.at(1));
        }
        if(s.at(2)!=""){
            ui->messageInfo3->setText(s2.at(2));

            ui->message3->setPlainText(s.at(2));
        }
}

void Messages::on_refresh_clicked(){
    pullMessages();
 }


Messages::~Messages() {
    delete ui;
}
