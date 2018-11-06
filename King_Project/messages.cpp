#include <QtSql>
#include "messages.h"

Messages::Messages(QWidget *parent) : QWidget(parent), ui(new Ui::MessagesForm) {
    ui->setupUi(this);
    ui->category->addItem("Sent");
    ui->category->addItem("Received");
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
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

Messages::~Messages() {
    delete ui;
}
