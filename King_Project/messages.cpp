#include <QtSql>
#include "messages.h"
#include <vector>
#include <string>



Messages::Messages(QWidget *parent) : QWidget(parent), ui(new Ui::MessagesForm) {
    ui->setupUi(this);
    ui->category->addItem("Sent");
    ui->category->addItem("Received");
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(on_refresh_clicked()));
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

void Messages::on_refresh_clicked(){
    QSqlQuery qry;
    QString rid = "mike";
    QString sid = "greg";
    //std::vector<QObject> m {ui->message1,ui->message2,ui->message3,ui->message4,ui->message5,ui->message6};
    QVector<QString> s;
    s.reserve(6);
    s.resize(6);
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
    }
        if(s.at(0)!=""){
            ui->message1->clear();
            ui->message1->setPlainText(s.at(0));
           // qDebug() << s.at(0);
        }
        if(s.at(1)!=""){
            ui->message2->setPlainText(s.at(1));
        }
        if(s.at(2)!=""){
            ui->message3->setPlainText(s.at(2));
        }
        if(s.at(3)!=""){
            ui->message4->setPlainText(s.at(3));
        }
        if(s.at(4)!=""){
            ui->message5->setPlainText(s.at(4));
        }
        if(s.at(5)!=""){
            ui->message6->setPlainText(s.at(5));
        }


}

Messages::~Messages() {
    delete ui;
}
