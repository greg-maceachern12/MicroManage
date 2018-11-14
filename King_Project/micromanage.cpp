#include "micromanage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"
#include "profile.h"
#include "propertymain.h"
#include "login.h"
#include "logs.h"

MicroManage::MicroManage(QWidget *parent) : QMainWindow(parent), ui(new Ui::MicroManage) {
    ui->setupUi(this); // Sets up the .ui file GUI

    this->setFixedSize(this->size());


    // IMPORTANT: This initializes your Qt attributes for this class
    sideMenu = new QDockWidget("", this);
    QWidget* multiWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout();
    stackedWidget = new QStackedWidget;
    mainPage = new MainPage(this);
    signUp = new SignUp(this);
    settings = new Settings(this);
    messages = new Messages(this);
    profile = new Profile(this);
    property = new PropertyMain(this);
    logs = new Logs(this);
    login = new Login(this, profile);



    sideMenu->setAllowedAreas(Qt::LeftDockWidgetArea);
    sideMenu->setFeatures(QDockWidget::NoDockWidgetFeatures);
    sideMenu->setVisible(false);
    sideMenu->setFixedWidth(130);
    sideMenu->toggleViewAction()->setVisible(false); // This hides the action so you don't see it when you RMB-click on the QDockWidget

    QPushButton *signUpButton = new QPushButton;
    signUpButton->setText("Sign Up");
    signUpButton->setObjectName("signUpButton");
    connect(signUpButton, SIGNAL(clicked()), this, SLOT(openSignUp()));

    QPushButton *settingsButton = new QPushButton;
    settingsButton->setText("Settings");
    settingsButton->setObjectName("settingsButton");
    connect(settingsButton, SIGNAL(clicked()), this, SLOT(openSettings()));

    QPushButton *messagesButton = new QPushButton;
    messagesButton->setText("Messages");
    messagesButton->setObjectName("messagesButton");
    connect(messagesButton, SIGNAL(clicked()), this, SLOT(openMessages()));

    QPushButton *profileButton = new QPushButton;
    profileButton->setText("Profile");
    profileButton->setObjectName("profileButton");
    connect(profileButton, SIGNAL(clicked()), this, SLOT(openProfile()));

    QPushButton *propertyButton = new QPushButton;
    propertyButton->setText("Properties");
    propertyButton->setObjectName("propertyButton");
    connect(propertyButton, SIGNAL(clicked()), this, SLOT(openProperty()));

    QPushButton *loginButton = new QPushButton;
    loginButton->setText("Login");
    loginButton->setObjectName("loginButton");
    connect(loginButton, SIGNAL(clicked()), this, SLOT(openLogin()));

    QPushButton *logsButton = new QPushButton;
    logsButton->setText("Logs");
    logsButton->setObjectName("logsButton");
    connect(logsButton, SIGNAL(clicked()), this, SLOT(openLogs()));



    layout->addWidget(settingsButton);
    layout->addWidget(signUpButton);
    layout->addWidget(messagesButton);
    layout->addWidget(profileButton);
    layout->addWidget(propertyButton);
    layout->addWidget(loginButton);
    layout->addWidget(logsButton);
    multiWidget->setLayout(layout);
    sideMenu->setWidget(multiWidget);
    addDockWidget(Qt::LeftDockWidgetArea, sideMenu);

    stackedWidget->addWidget(mainPage);
    stackedWidget->addWidget(signUp);
    stackedWidget->addWidget(settings);
    stackedWidget->addWidget(profile);
    stackedWidget->addWidget(messages);
    stackedWidget->addWidget(property);
    stackedWidget->addWidget(login);
    stackedWidget->addWidget(logs);
    QLineEdit *line = new QLineEdit;
    line->setText("Hello! You're on the second page, which shows the other widget. This would be your custom widget.");
    stackedWidget->addWidget(line); // Adds another page to the stack with this widget
    setCentralWidget(stackedWidget); //

}


Profile* MicroManage::getProfile() {
    return profile;
}


void MicroManage::createInterface() {
    // WIP

}


void MicroManage::showSideMenu() {
    /* Toggles the side menu */
    sideMenu->setVisible(!sideMenu->isVisible()); // If it's visible, it hides it; if it's already hidden, it shows it
    bool sideMenuIsVisible = sideMenu->isVisible();
    mainPage->getMenuButton()->setChecked(sideMenuIsVisible);
    signUp->getMenuButton()->setChecked(sideMenuIsVisible);
    settings->getMenuButton()->setChecked(sideMenuIsVisible);
    messages->getMenuButton()->setChecked(sideMenuIsVisible);
    profile->getMenuButton()->setChecked(sideMenuIsVisible);
    property->getMenuButton()->setChecked(sideMenuIsVisible);
    repaint(); // Forces the repaint so the menu opens and closes without glitch
}


void MicroManage::changePage(int index){
    /* This is just rough so you get an idea of how this could work */
    stackedWidget->setCurrentIndex(index); // Should change it to the second page with the line edit
}


void MicroManage::openSettings() {
    stackedWidget->setCurrentIndex(2);
}


void MicroManage::openSignUp() {
    stackedWidget->setCurrentIndex(1);
}


void MicroManage::openMessages() {
    stackedWidget->setCurrentIndex(4);
}


void MicroManage::openProfile() {
    stackedWidget->setCurrentIndex(3);
}


void MicroManage::openProperty() {
    stackedWidget->setCurrentIndex(5);
}


void MicroManage::openLogin() {
    stackedWidget->setCurrentIndex(6);
}

void MicroManage::openLogs() {
    stackedWidget->setCurrentIndex(7);
}


void MicroManage::closeEvent(QCloseEvent *event) {
    myDb.close(); // FIX
    QWidget::closeEvent(event);
}


MicroManage::~MicroManage() {
    delete ui;
}
