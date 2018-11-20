#include "signup.h"
#include "micromanage.h"
#include "dbmodel.h"
#include <string>

SignUp::SignUp(QWidget *parent, QStackedWidget *stacked_widget, Profile *pro, MainPage *main) : QWidget(parent), ui(new Ui::SignUpForm) {
    stackedWidget = stacked_widget;
    mainPage = main;

    ui->setupUi(this); // Sets up the .ui file GUI
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->btnSubmit, SIGNAL(clicked()), this, SLOT(createUser()));
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(cancelAction()));


}

QToolButton* SignUp::getMenuButton() {
    return ui->menuButton;
}

SignUp::~SignUp() {
    delete ui;
}

void SignUp::createUser() {
    QString username = ui->txtUid->text();
    QSqlQuery qry;
    int count = 0;
    if (qry.exec("SELECT username FROM user WHERE username='"+username+"'")) {
        while (qry.next()) {
            count ++;
        }
        qDebug() << count;
        if (count == 0){
            QSqlQuery qryWrite;
            qDebug() << username;

            qryWrite.prepare("insert into user (username,name,age,type, address, email, phone, password)"
                             "VALUES (:username, :name, :age, :type, :address, :email, :phone, :password)");
                             qryWrite.bindValue(":username", username);
                             qryWrite.bindValue(":name", ui->txtName->text());
                             qryWrite.bindValue(":age", ui->txtAge->text());
                             qryWrite.bindValue(":type", ui->txtType->text());
                             qryWrite.bindValue(":address", ui->txtAddress->text());
                             qryWrite.bindValue(":email", ui->txtEmail->text());
                             qryWrite.bindValue(":phone", ui->txtPhone->text());
                             qryWrite.bindValue(":password", ui->txtPassword->text());
            if (qryWrite.exec()) {
                ui->logMsg->setText("Success");
                dbmodel::username = username;
                mainPage->updateMain();
                stackedWidget->setCurrentIndex(4); // Go to main page
            } else {
               qDebug() << qryWrite.lastError();
            }
        } else {
            ui->logMsg->setText("Error. User already exists");
        }
    }

}

void SignUp::setLandlord() {
    ui->txtType->setText("Landlord");
}

void SignUp::setTenant() {
    ui->txtType->setText("Tenant");
}

void SignUp::cancelAction() {
    stackedWidget->setCurrentIndex(0);
}
