#include "signup.h"
#include <string>

SignUp::SignUp(QWidget *parent) : QWidget(parent), ui(new Ui::SignUpForm) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->btnSubmit, SIGNAL(clicked()), this, SLOT(createUser()));

}

SignUp::~SignUp() {
    delete ui;
}

void SignUp::createUser() {
    QString username = ui->txtUid->text();
    QSqlQuery qryWrite;
    qDebug() << username;
    qryWrite.prepare("insert into user (username,name,age,type, address, email, phone, password) VALUES ('"+username+"', '"+ ui->txtName->text() +"', '"+ ui->txtAge->text() +"', ''"+ ui->txtType->text() +"'', '"+ ui->txtAddress->text() +"', '"+ ui->txtEmail->text() +"' , '"+ ui->txtPhone->text() +"', '"+ ui->txtPassword->text()+"')");
    qryWrite.exec();

}
