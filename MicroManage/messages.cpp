#include <QtSql>
#include "messages.h"
#include <vector>
#include <string>



Messages::Messages(QWidget *parent) : QWidget(parent), ui(new Ui::MessagesForm) {
    ui->setupUi(this);
    ui->category->addItem("Sent");
    ui->category->addItem("Received");
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(on_refresh_clicked()));
    connect(ui->send_message, SIGNAL(clicked()), this, SLOT(on_send_clicked()));
    ui->message1->setReadOnly(true);
    ui->message2->setReadOnly(true);
    ui->message3->setReadOnly(true);
    ui->message4->setReadOnly(true);
    ui->message5->setReadOnly(true);
    ui->message6->setReadOnly(true);

    QPalette *palette = new QPalette();
    palette->setColor(QPalette::Base, Qt::white);
    palette->setColor(QPalette::Text, Qt::darkGray);
    ui->message1->setPalette(*palette);
    ui->message2->setPalette(*palette);
    ui->message3->setPalette(*palette);
    ui->message4->setPalette(*palette);
    ui->message5->setPalette(*palette);
    ui->message6->setPalette(*palette);
    ui->label1->setText("");
    ui->label2->setText("");
    ui->label3->setText("");
    ui->label4->setText("");
    ui->label5->setText("");
    ui->label6->setText("");

    ui->to->addItem("greg");
    ui->to->addItem("mike");
    ui->to->addItem("lauren");
    ui->to->addItem("trevor");
    ui->to->addItem("xinbo");
    ui->to->addItem("jinzao");

}


void Messages::pullMessages() {

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
    QString rid = ui->to->currentText();
    QString username = "mike";

    if(ui->message->toPlainText()!="" && ui->subject->text() != ""){

    QSqlQuery query;
       query.prepare("INSERT INTO messages (rid, content, subject, sid, date) "
                  "VALUES (:rid, :content, :subject, :sid, :date)");
       query.bindValue(":rid", rid);
           query.bindValue(":content", message);
           query.bindValue(":subject", subject);
           query.bindValue(":sid", username);
           query.bindValue(":date", QDateTime::currentDateTime());
    query.exec();

    }

    else{
        ui->error->setText("please fill in all fields");

    }
    ui->message->clear();
    ui->subject->clear();
}


QToolButton* Messages::getMenuButton() {
    return ui->menuButton;
}


void Messages::on_refresh_clicked(){
    QSqlQuery qry;
    QString rid = "mike";
    QString sid = "greg";
    //std::vector<QObject> m {ui->message1,ui->message2,ui->message3,ui->message4,ui->message5,ui->message6};
    QVector<QString> s;
    s.reserve(6);
    s.resize(6);
    QVector<QString> s2;
    s2.reserve(6);
    s2.resize(6);
    ui->message1->clear();
    ui->message2->clear();
    ui->message3->clear();
    ui->message4->clear();
    ui->message5->clear();
    ui->message6->clear();
    ui->label1->clear();
    ui->label2->clear();
    ui->label3->clear();
    ui->label4->clear();
    ui->label5->clear();
    ui->label6->clear();

    //s.append(*ui->message1);
    int count = 0;
    if(ui->category->currentText() == "Received"){
    if (qry.exec("SELECT content FROM messages WHERE rid='"+rid+"'and sid='"+ sid +"'" )) {

        while (qry.next()) {
            //qDebug() << qry.value(0).toString();
            s.push_front(qry.value(0).toString());
            //qDebug() << s.at(count);
            count ++;
           }
    }
    if (qry.exec("SELECT subject FROM messages WHERE rid='"+rid+"'and sid='"+ sid +"'" )) {

        while (qry.next()) {
            //qDebug() << qry.value(0).toString();
            s2.push_front(qry.value(0).toString());
            //qDebug() << s.at(count);
            count ++;
           }
    }
    }

    if(ui->category->currentText() == "Sent"){
    if (qry.exec("SELECT content FROM messages WHERE rid='"+sid+"'and sid='"+ rid +"'" )) {

        while (qry.next()) {
            //qDebug() << qry.value(0).toString();
            s.push_front(qry.value(0).toString());
            //qDebug() << s.at(count);
            count ++;
           }
    }
    if (qry.exec("SELECT subject FROM messages WHERE rid='"+sid+"'and sid='"+ rid +"'" )) {

        while (qry.next()) {
            //qDebug() << qry.value(0).toString();
            s2.push_front(qry.value(0).toString());
            //qDebug() << s.at(count);
            count ++;
           }
    }
    }
        if(s.at(0)!=""){
            ui->message1->clear();
            ui->label1->setText(s2.at(0));
            ui->message1->setPlainText(s.at(0));
           // qDebug() << s.at(0);
        }
        if(s.at(1)!=""){
            ui->label2->setText(s2.at(1));
            ui->message2->setPlainText(s.at(1));
        }
        if(s.at(2)!=""){
            ui->label3->setText(s2.at(2));
            ui->message3->setPlainText(s.at(2));
        }
        if(s.at(3)!=""){
            ui->label4->setText(s2.at(3));
            ui->message4->setPlainText(s.at(3));
        }
        if(s.at(4)!=""){
            ui->label5->setText(s2.at(4));
            ui->message5->setPlainText(s.at(4));
        }
        if(s.at(5)!=""){
            ui->label6->setText(s2.at(5));
            ui->message6->setPlainText(s.at(5));
        }
}


Messages::~Messages() {
    delete ui;
}
