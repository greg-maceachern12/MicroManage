#include "login.h"
#include "micromanage.h"

Login::Login(QWidget *parent, QStackedWidget *stacked_widget, Profile *pro, MainPage *main, QStatusBar *status_bar) : QWidget(parent), ui(new Ui::LoginForm) {
    ui->setupUi(this);

    stackedWidget = stacked_widget;
    profile = pro;
    mainPage = main;
    statusBar = status_bar;

    ui->txtUser->setPlaceholderText("Username");
    ui->txtPass->setPlaceholderText("Password");
    ui->micromanageLabel->setPixmap(QPixmap(":images/icons/micromanage_name.png"));
    ui->micromanageLabel->setScaledContents(true);

    connect(ui->signupButton, SIGNAL(clicked()), parent, SLOT(openWelcome()));
}


Login::~Login() {
    delete ui;
}


QCheckBox* Login::getRememberMe() {
    return ui->rememberMe;
}

void Login::clearInputs() {
    ui->txtUser->clear();
    ui->txtPass->clear();
}

void Login::on_logInPushButton_clicked() {
    qDebug() << dbmodel::username;
    QString username, password;
    username = ui->txtUser->text();
    password = ui->txtPass->text();
    QSqlQuery qry;
    if (qry.exec("SELECT username FROM user WHERE username='"+username+"'and password='"+ password+"'" )) {
        int count = 0;
        while (qry.next()) {
            qDebug() << qry.value(0).toString();
            count ++;
        }
        if (count == 1) {
            qDebug() << "user and password correct";
            statusBar->clearMessage();
            dbmodel::username = username;

//            qry2.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+dbmodel::username+"'");
            profile->updateProfile();
            mainPage->updateMain();
            stackedWidget->setCurrentIndex(4); // Go to main page
        }
        if (count > 1) {
            statusBar->showMessage("Duplicate user and password correct.", 10000);
           // qDebug() << "Duplicate user and password correct";
        }
        if (count < 1) {
            statusBar->showMessage("Username or password incorrect.", 10000);
            //qDebug() << "user and password incorrect";
        }
    }

}
