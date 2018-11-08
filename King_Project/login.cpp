#include "login.h"
#include "dbmodel.h"
#include "profile.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::LoginForm) {
    ui->setupUi(this);
    //mainParent = this->window();

}

Login::~Login() {
    delete ui;
}

void Login::on_pushButton_clicked()
{
    qDebug() << username;
    QString txt_username, txt_password;
    txt_username = ui->txtUser->text();
    txt_password = ui->txtPass->text();
    QSqlQuery qry;
    if (qry.exec("SELECT username FROM user WHERE username='"+txt_username+"'and password='"+ txt_password+"'" )) {
        int count = 0;
        while (qry.next()) {
            qDebug() << qry.value(0).toString();
            count ++;
        }
        if (count == 1) {
            qDebug() << "user and password correct";
            username = txt_username;
            qDebug() << username;
            QCoreApplication::processEvents(nullptr);
        }
        if (count > 1) {
            qDebug() << "Duplicate user and password correct";
        }
        if (count < 1) {
            qDebug() << "user and password incorrect";
        }
    }
}
