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
    sideMenu->setObjectName("sideMenu");
    stackedWidget = new QStackedWidget;
    welcomePage = new Welcome(this);
    mainPage = new MainPage(this);
    signUp = new SignUp(this, stackedWidget, profile, mainPage, ui->statusBar);
    settings = new Settings(this);
    messages = new Messages(this, ui->statusBar);
    profile = new Profile(this);
    properties = new PropertyMain(this);
    notices = new Notices(this);
    maintenance = new Maintenance(this);
    login = new Login(this, stackedWidget, profile, mainPage, ui->statusBar);
    helpPage = new Help(this);


    sideMenu->setAllowedAreas(Qt::LeftDockWidgetArea);
    sideMenu->setFeatures(QDockWidget::NoDockWidgetFeatures);
    sideMenu->setVisible(false);
    sideMenu->setFixedWidth(150);
    sideMenu->toggleViewAction()->setVisible(false); // This hides the action so you don't see it when you RMB-click on the QDockWidget

    setUserRole(0);
    setUpDefaultMenu();
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
    setCentralWidget(stackedWidget);

    hasDefaultMenu = true;
    connect(stackedWidget, SIGNAL(currentChanged(int)), this, SLOT(checkPage(int)));
}


void MicroManage::setUserRole(int role) {
    userRole = role;
}


void MicroManage::checkPage(int index) {
    if (index == 4 && !hasDefaultMenu) {
        setUpDefaultMenu();
    }
}


void MicroManage::setUpDefaultMenu() {
    QWidget* menu_button_widget = new QWidget();
    menu_button_widget->setObjectName("menuButtonWidget");
    QVBoxLayout *menu_layout = new QVBoxLayout();
    menu_layout->setContentsMargins(0, 50, 0, 50);
    QLabel *logo_label = new QLabel();
    logo_label->setFixedSize(120, 120);
    logo_label->setPixmap(QPixmap(":images/icons/micromanage_logo_overlay.png"));
    logo_label->setScaledContents(true);

    QPushButton *home_menu_button = new QPushButton("Home");
    home_menu_button->setObjectName("homeMenuButton");
    home_menu_button->setMinimumHeight(25);
    home_menu_button->setCheckable(true);
    home_menu_button->setChecked(true);
    connect(home_menu_button, &QPushButton::clicked, this, [this] { openMainPage(); });
    QPushButton *profile_menu_button = new QPushButton("My Profile");
    profile_menu_button->setObjectName("profileMenuButton");
    profile_menu_button->setMinimumHeight(25);
    profile_menu_button->setCheckable(true);
    connect(profile_menu_button, &QPushButton::clicked, this, [this] { openProfile(); });
    QPushButton *second_menu_button = new QPushButton();
    second_menu_button->setObjectName("secondMenuButton");
    second_menu_button->setMinimumHeight(25);
    second_menu_button->setCheckable(true);
    if (userRole == 0) {
        second_menu_button->setText("My Properties");
        connect(second_menu_button, &QPushButton::clicked, this, [this] { openProperties(); });
    }
    if (userRole == 1) {
        second_menu_button->setText("My Landlord");
    }
    QPushButton *notices_menu_button = new QPushButton("Notices");
    notices_menu_button->setObjectName("noticesMenuButton");
    notices_menu_button->setMinimumHeight(25);
    notices_menu_button->setCheckable(true);
    connect(notices_menu_button, &QPushButton::clicked, this, [this] { openNotices(); });
    QPushButton *maintenance_menu_button = new QPushButton("Maintenance");
    maintenance_menu_button->setObjectName("maintenanceMenuButton");
    maintenance_menu_button->setMinimumHeight(25);
    maintenance_menu_button->setCheckable(true);
    connect(maintenance_menu_button, &QPushButton::clicked, this, [this] { openMaintenance(); });
    QPushButton *messages_menu_button = new QPushButton("Messages");
    messages_menu_button->setObjectName("messagesMenuButton");
    messages_menu_button->setMinimumHeight(25);
    messages_menu_button->setCheckable(true);
    connect(messages_menu_button, &QPushButton::clicked, this, [this] { openMessages(); });
    QPushButton *settings_menu_button = new QPushButton("Settings");
    settings_menu_button->setObjectName("settingsMenuButton");
    settings_menu_button->setMinimumHeight(25);
    settings_menu_button->setCheckable(true);
    connect(settings_menu_button, &QPushButton::clicked, this, [this] { openSettings(); });
    QPushButton *help_menu_button = new QPushButton("Help");
    help_menu_button->setObjectName("helpMenuButton");
    help_menu_button->setMinimumHeight(25);
    help_menu_button->setCheckable(true);
    connect(help_menu_button, &QPushButton::clicked, this, [this] { openHelp(); });
    QPushButton *logout_menu_button = new QPushButton("Logout");
    logout_menu_button->setObjectName("logoutMenuButton");
    logout_menu_button->setMinimumHeight(25);
    connect(logout_menu_button, &QPushButton::clicked, this, [this] {
        openWelcome();
        showSideMenu();
        ui->statusBar->showMessage("You have successfully logged out.", 10000);
        if (!login->getRememberMe()->isChecked()) {
            login->clearInputs();
        }
    });

    QVBoxLayout *label_layout = new QVBoxLayout();
    label_layout->setContentsMargins(0, 0, 0, 0);
    label_layout->setAlignment(Qt::AlignHCenter);
    label_layout->addWidget(logo_label);
    menu_layout->addLayout(label_layout);
    menu_layout->addWidget(home_menu_button);
    menu_layout->addWidget(profile_menu_button);
    menu_layout->addWidget(second_menu_button);
    menu_layout->addWidget(notices_menu_button);
    menu_layout->addWidget(maintenance_menu_button);
    menu_layout->addWidget(messages_menu_button);
    menu_layout->addWidget(settings_menu_button);
    menu_layout->addWidget(help_menu_button);
    menu_layout->addWidget(logout_menu_button);

    menu_button_widget->setLayout(menu_layout);
    sideMenu->setWidget(menu_button_widget);
    menuButtons = menu_button_widget->findChildren<QPushButton *>();
}


void MicroManage::setUpCreateAccountMenu() {
    hasDefaultMenu = false;
    QWidget* menu_button_widget = new QWidget();
    menu_button_widget->setObjectName("menuButtonWidget");
    QVBoxLayout *menu_layout = new QVBoxLayout();
    menu_layout->setContentsMargins(0, 50, 0, 50);
    QLabel *logo_label = new QLabel();
    logo_label->setFixedSize(120, 120);
    logo_label->setPixmap(QPixmap(":images/icons/micromanage_logo_overlay.png"));
    logo_label->setScaledContents(true);
    QLabel *get_started_label = new QLabel("Let's get started");
    get_started_label->setObjectName("getStartedLabel");
    get_started_label->setAlignment(Qt::AlignHCenter);
    get_started_label->setFixedSize(140, 25);

    QPushButton *create_profile_menu_button = new QPushButton("Create Profile");
    create_profile_menu_button->setObjectName("createProfileMenuButton");
    create_profile_menu_button->setMinimumHeight(25);
    create_profile_menu_button->setCheckable(true);
    connect(create_profile_menu_button, &QPushButton::clicked, this, [this] { openSignUpTenant();});
    QPushButton *settings_menu_button = new QPushButton("Settings");
    settings_menu_button->setObjectName("settingsMenuButton");
    settings_menu_button->setMinimumHeight(25);
    settings_menu_button->setCheckable(true);
    connect(settings_menu_button, &QPushButton::clicked, this, [this] { openSettings();});

    QVBoxLayout *label_layout = new QVBoxLayout();
    label_layout->setContentsMargins(0, 0, 0, 0);
    label_layout->setAlignment(Qt::AlignHCenter);
    label_layout->addWidget(logo_label);
    menu_layout->addLayout(label_layout);
    menu_layout->addWidget(get_started_label);
    menu_layout->addWidget(create_profile_menu_button);
    menu_layout->addWidget(settings_menu_button);

    menu_button_widget->setLayout(menu_layout);
    sideMenu->setWidget(menu_button_widget);
    menuButtons = menu_button_widget->findChildren<QPushButton *>();
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
    notices->getMenuButton()->setChecked(sideMenuIsVisible);
    maintenance->getMenuButton()->setChecked(sideMenuIsVisible);
    profile->getMenuButton()->setChecked(sideMenuIsVisible);
    properties->getMenuButton()->setChecked(sideMenuIsVisible);
    helpPage->getMenuButton()->setChecked(sideMenuIsVisible);
    repaint(); // Forces the repaint so the menu opens and closes without glitch
}


void MicroManage::openWelcome() {
    stackedWidget->setCurrentIndex(0);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked()) {
            (*button)->setChecked(false);
        }
    }
}


void MicroManage::openSignUpLandlord() {
    setUpCreateAccountMenu();
    signUp->setLandlord();
    stackedWidget->setCurrentIndex(1);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Create Profile") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Create Profile") {
            (*button)->setChecked(true);
        }
    }
}
void MicroManage::openSignUpTenant() {
    setUpCreateAccountMenu();
    signUp->setTenant();
    stackedWidget->setCurrentIndex(1);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Create Profile") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Create Profile") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openSettings() {
    stackedWidget->setCurrentIndex(2);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Settings") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Settings") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openLogin() {
    stackedWidget->setCurrentIndex(3);
    QList<QPushButton *>::iterator button;
    if (!login->getRememberMe()->isChecked()) {
        login->clearInputs();
    }
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Home") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Home") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openMainPage() {
    setUpDefaultMenu();
    stackedWidget->setCurrentIndex(4);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Home") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Home") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openProfile() {
    stackedWidget->setCurrentIndex(5);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "My Profile") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "My Profile") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openProperties() {
    stackedWidget->setCurrentIndex(6);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "My Properties") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "My Properties") {
            (*button)->setChecked(true);
        }
    }
}

void MicroManage::openHelp() {
    stackedWidget->setCurrentIndex(10);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Help") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Help") {
            (*button)->setChecked(true);
        }
    }

}


void MicroManage::openNotices() {
    notices->refreshNotices();
    stackedWidget->setCurrentIndex(7);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Notices") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Notices") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openMaintenance() {
    maintenance->refreshLogs();
    stackedWidget->setCurrentIndex(8);
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Maintenance") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Maintenance") {
            (*button)->setChecked(true);
        }
    }
}


void MicroManage::openMessages() {
    stackedWidget->setCurrentIndex(9);
    messages->pullMessages();
    QList<QPushButton *>::iterator button;
    for (button = menuButtons.begin(); button != menuButtons.end(); ++button) {
        if ((*button)->isChecked() && (*button)->text() != "Messages") {
            (*button)->setChecked(false);
        }
        if ((*button)->text() == "Messages") {
            (*button)->setChecked(true);
        }
    }
}



void MicroManage::closeEvent(QCloseEvent *event) {
    dbmodel::myDb.close(); // FIX
    QWidget::closeEvent(event);
}


MicroManage::~MicroManage() {
    delete ui;
}
