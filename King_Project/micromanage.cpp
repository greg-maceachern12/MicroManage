#include "micromanage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"
#include "profile.h"
#include "propertymain.h"
#include "login.h"
#include "help.h"

MicroManage::MicroManage(QWidget *parent) : QMainWindow(parent), ui(new Ui::MicroManage) {
    ui->setupUi(this); // Sets up the .ui file GUI

    this->setFixedSize(this->size());

    // IMPORTANT: This initializes your Qt attributes for this class
    sideMenu = new QDockWidget("", this);
    QWidget* multiWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout();
    stackedWidget = new QStackedWidget;
    welcomePage = new Welcome(this);
    mainPage = new MainPage(this);
    signUp = new SignUp(this, stackedWidget, profile);
    settings = new Settings(this);
    messages = new Messages(this);
    profile = new Profile(this);
    properties = new PropertyMain(this);
    notices = new Notices(this);
    //logs = new Logs(this);
    maintenance = new Maintenance(this);
    login = new Login(this, stackedWidget, profile, mainPage);
    helpPage = new Help(this);


    sideMenu->setAllowedAreas(Qt::LeftDockWidgetArea);
    sideMenu->setFeatures(QDockWidget::NoDockWidgetFeatures);
    sideMenu->setVisible(false);
    sideMenu->setFixedWidth(150);
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

    QPushButton *propertiesButton = new QPushButton;
    propertiesButton->setText("Properties");
    propertiesButton->setObjectName("propertyButton");
    connect(propertiesButton, SIGNAL(clicked()), this, SLOT(openProperties()));

    QPushButton *loginButton = new QPushButton;
    loginButton->setText("Login");
    loginButton->setObjectName("loginButton");
    connect(loginButton, SIGNAL(clicked()), this, SLOT(openLogin()));


    QPushButton *helpButton = new QPushButton;
    helpButton->setText("Help");
    helpButton->setObjectName("helpButton");
    connect(helpButton, SIGNAL(clicked()), this, SLOT(openHelp()));

    layout->addWidget(profileButton);
    layout->addWidget(settingsButton);
    layout->addWidget(signUpButton);
    layout->addWidget(messagesButton);
    layout->addWidget(profileButton);
    layout->addWidget(propertiesButton);
    layout->addWidget(loginButton);
    layout->addWidget(helpButton);
    multiWidget->setLayout(layout);
    sideMenu->setWidget(multiWidget);
    addDockWidget(Qt::LeftDockWidgetArea, sideMenu);

    stackedWidget->addWidget(welcomePage);
    stackedWidget->addWidget(signUp);
    stackedWidget->addWidget(settings);
    stackedWidget->addWidget(login);
    stackedWidget->addWidget(mainPage);
    stackedWidget->addWidget(profile);
    stackedWidget->addWidget(properties);
    stackedWidget->addWidget(notices);
    stackedWidget->addWidget(maintenance);
    stackedWidget->addWidget(messages);
    stackedWidget->addWidget(helpPage);

    QLineEdit *line = new QLineEdit;
    line->setText("Hello! You're on the second page, which shows the other widget. This would be your custom widget.");
    setCentralWidget(stackedWidget); //

    //stackedWidget->setCurrentIndex(2);
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
    properties->getMenuButton()->setChecked(sideMenuIsVisible);
    repaint(); // Forces the repaint so the menu opens and closes without glitch
}


void MicroManage::openWelcome() {
    stackedWidget->setCurrentIndex(0);
}


void MicroManage::openSignUp() {
    stackedWidget->setCurrentIndex(1);
}


void MicroManage::openSettings() {
    stackedWidget->setCurrentIndex(2);
}


void MicroManage::openLogin() {
    stackedWidget->setCurrentIndex(3);
}


void MicroManage::openMainPage() {
    stackedWidget->setCurrentIndex(4);
}


void MicroManage::openProfile() {
    stackedWidget->setCurrentIndex(5);
}


void MicroManage::openProperties() {
    stackedWidget->setCurrentIndex(6);
}

void MicroManage::openHelp() {
    stackedWidget->setCurrentIndex(10);
}


void MicroManage::openNotices() {
    stackedWidget->setCurrentIndex(7);
}


void MicroManage::openMaintenance() {
    stackedWidget->setCurrentIndex(8);
}


void MicroManage::openMessages() {
    stackedWidget->setCurrentIndex(9);
}



void MicroManage::closeEvent(QCloseEvent *event) {
    dbmodel::myDb.close(); // FIX
    QWidget::closeEvent(event);
}


MicroManage::~MicroManage() {
    delete ui;
}
