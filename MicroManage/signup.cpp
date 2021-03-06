#include "signup.h"
#include "micromanage.h"
#include "dbmodel.h"
#include <string>

SignUp::SignUp(QWidget *parent, QStackedWidget *stacked_widget, Profile *pro, MainPage *main, QStatusBar *status_bar) : QWidget(parent), ui(new Ui::SignUpForm) {
    stackedWidget = stacked_widget;
    mainPage = main;
    statusBar = status_bar;

    ui->setupUi(this); // Sets up the .ui file GUI
    ui->menuButton->setCheckable(true);
    ui->menuButton->setShortcut(QKeySequence("M"));
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));

    QRegion circle(ui->photoLabel->rect(), QRegion::Ellipse);
    ui->photoLabel->setMask(circle);
    ui->photoLabel->setScaledContents(true);
    ui->photoLabel->setPixmap(QPixmap(":images/photo_temp.png"));

    connect(ui->changePhotoButton, SIGNAL(clicked()), this, SLOT(choosePhoto()));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->submitButton, SIGNAL(clicked()), this, SLOT(createUser()));
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(cancelAction()));

}

bool SignUp::choosePhoto() {
    QString imagename = QFileDialog::getOpenFileName(this, "Open Image", "Image Files (*.png *.jpg *.bmp *.jpeg)");

    if (imagename != "") {
        QPixmap p;
        p.load(imagename, nullptr, Qt::AutoColor);
        ui->photoLabel->setPixmap(p);
    }
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
                             qryWrite.bindValue(":type", ui->typeText->text());
                             qryWrite.bindValue(":address", ui->txtAddress->text());
                             qryWrite.bindValue(":email", ui->txtEmail->text());
                             qryWrite.bindValue(":phone", ui->txtPhone->text());
                             qryWrite.bindValue(":password", ui->txtPassword->text());
            if (qryWrite.exec()) {
                statusBar->showMessage("Success! Account created.");
                dbmodel::username = username;
                stackedWidget->setCurrentIndex(3);
                if (ui->menuButton->isChecked()) {
                    ui->menuButton->click();
                }
            } else {
               qDebug() << qryWrite.lastError();
            }
        } else {
            statusBar->showMessage("ERROR: User already exists.");
        }
    }

}


void SignUp::setLandlord() {
    ui->typeText->setText("Landlord");
}


void SignUp::setTenant() {
    ui->typeText->setText("Tenant");
}


void SignUp::cancelAction() {
    if (ui->menuButton->isChecked()) {
        ui->menuButton->click();
    }
    ui->photoLabel->setPixmap(QPixmap(":images/photo_temp.png"));
    statusBar->clearMessage();
    stackedWidget->setCurrentIndex(0);
}
