#include "login.h"

Login::Login(QWidget *parent, Profile *pro) : QWidget(parent), ui(new Ui::LoginForm) {
    ui->setupUi(this);
    profile = pro;

    connect(ui->signupButton, SIGNAL(clicked()), parent, SLOT(openWelcome()));
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
            QSqlQuery qry2;
            qry2.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+username+"'");
            profile->updateProfile(qry2);

        }
        if (count > 1) {
            qDebug() << "Duplicate user and password correct";
        }
        if (count < 1) {
            qDebug() << "user and password incorrect";
        }
    }

}
