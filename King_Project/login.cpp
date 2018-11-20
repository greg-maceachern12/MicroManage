#include "login.h"
#include "micromanage.h"

Login::Login(QWidget *parent, QStackedWidget *stacked_widget, Profile *pro, MainPage *main) : QWidget(parent), ui(new Ui::LoginForm) {
    ui->setupUi(this);

    stackedWidget = stacked_widget;
    profile = pro;
    mainPage = main;
    connect(ui->signupButton, SIGNAL(clicked()), parent, SLOT(openWelcome()));
}


Login::~Login() {
    delete ui;
}


void Login::on_pushButton_clicked() {
    qDebug() << dbmodel::username;
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
            dbmodel::username = txt_username;

//            qry2.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+dbmodel::username+"'");
            profile->updateProfile();
            mainPage->updateMain();
            stackedWidget->setCurrentIndex(4); // Go to main page
        }
        if (count > 1) {
            qDebug() << "Duplicate user and password correct";
        }
        if (count < 1) {
            qDebug() << "user and password incorrect";
        }
    }

}
