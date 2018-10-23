#include "micromanage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"
#include "profile.h"

MicroManage::MicroManage(QWidget *parent) : QMainWindow(parent), ui(new Ui::MicroManage) {
    ui->setupUi(this); // Sets up the .ui file GUI

    // IMPORTANT: This initializes your Qt attributes for this class
    sideMenu = new QDockWidget("Menu", this);
    QWidget* multiWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout();
    stackedWidget = new QStackedWidget;
    mainPage = new MainPage(this);
    signUp = new SignUp(this);
    settings = new Settings(this);
    messages = new Messages(this);
    profile = new Profile(this);


    sideMenu->setAllowedAreas(Qt::LeftDockWidgetArea);
    sideMenu->setFeatures(QDockWidget::NoDockWidgetFeatures);
    sideMenu->setVisible(false);
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


    layout->addWidget(settingsButton);
    layout->addWidget(signUpButton);
    layout->addWidget(messagesButton);
    layout->addWidget(profileButton);
    multiWidget->setLayout(layout);
    sideMenu->setWidget(multiWidget);
    addDockWidget(Qt::LeftDockWidgetArea, sideMenu);

    stackedWidget->addWidget(mainPage);
    stackedWidget->addWidget(signUp);
    stackedWidget->addWidget(settings);
    stackedWidget->addWidget(messages);
    stackedWidget->addWidget(profile);
    QLineEdit *line = new QLineEdit;
    line->setText("Hello! You're on the second page, which shows the other widget. This would be your custom widget.");
    stackedWidget->addWidget(line); // Adds another page to the stack with this widget
    setCentralWidget(stackedWidget); //

}

void MicroManage::createInterface() {
    // WIP

}

void MicroManage::showSideMenu() {
    /* Toggles the side menu */
    sideMenu->setVisible(!sideMenu->isVisible()); // If it's visible, it hides it; if it's already hidden, it shows it
    repaint(); // Forces the repaint so the menu opens and closes without glitch
}

void MicroManage::changePage(){
    /* This is just rough so you get an idea of how this could work */
    stackedWidget->setCurrentIndex(2); // Should change it to the second page with the line edit
}

void MicroManage::openSettings() {
    stackedWidget->setCurrentIndex(2);
}
void MicroManage::openSignUp() {
    stackedWidget->setCurrentIndex(1);
}
void MicroManage::openMessages() {
    stackedWidget->setCurrentIndex(3);
}
void MicroManage::openProfile() {
    stackedWidget->setCurrentIndex(4);
}



/*MicroManage::~MicroManage() Probably don't need this
{
    delete ui;
}*/


