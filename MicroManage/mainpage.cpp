#include "login.h"
#include "mainpage.h"


MainPage::MainPage(QWidget *parent, QString user_name, int user_role) : QWidget(parent), ui(new Ui::MainPageForm) {
    ui->setupUi(this); // Sets up the .ui file GUI

    dbmodel::myDb = QSqlDatabase::addDatabase("QSQLITE");


    dbmodel::myDb.setDatabaseName("/Users/laurenbhagwandat/Desktop/Computing/C++/CISC-320/kingrepo/MicroManage/micro.db");




    QSize icon_size(125, 125);
    if (!dbmodel::myDb.open()) {
        qDebug() <<"error-";
    } else {
        qDebug() <<"success";
    }
    userRole = user_role;

    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    // Set up buttons with icons and texts in grid layout
    QToolButton *profile_button = new QToolButton();
    profile_button->setObjectName("profileButton");
    profile_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    profile_button->setText("My Profile");
    profile_button->setIcon(QIcon(":images/icons/profile_icon.png"));
    profile_button->setIconSize(icon_size);
    connect(profile_button, SIGNAL(clicked()), parent, SLOT(openProfile()));


    QToolButton *properties_button = new QToolButton();
    properties_button->setObjectName("secondButton");
    properties_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    if (userRole == 0) {
        properties_button->setText("My Properties");
        properties_button->setIcon(QIcon(":images/icons/properties_icon.png"));
        properties_button->setIconSize(icon_size);
        connect(properties_button, SIGNAL(clicked()), parent, SLOT(openProperties()));
    }
    else if (userRole == 1) {
        properties_button->setText("My Landlord");
        properties_button->setIcon(QIcon(":images/icons/landlord_icon.png"));
        properties_button->setIconSize(icon_size);
        connect(properties_button, SIGNAL(clicked()), parent, SLOT(openLandlord()));
    }

    QToolButton *notices_button = new QToolButton();
    notices_button->setObjectName("noticesButton");
    notices_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    notices_button->setText("Notices");
    notices_button->setIcon(QIcon(":images/icons/notices_icon.png"));
    notices_button->setIconSize(icon_size);
    connect(notices_button, SIGNAL(clicked()), parent, SLOT(openNotices()));

    QToolButton *maintenance_button = new QToolButton();
    maintenance_button->setObjectName("maintenanceButton");
    maintenance_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    maintenance_button->setText("Maintenance");
    maintenance_button->setIcon(QIcon(":images/icons/maintenance_icon.png"));
    maintenance_button->setIconSize(icon_size);
    connect(maintenance_button, SIGNAL(clicked()), parent, SLOT(openMaintenance()));

    QToolButton *messages_button = new QToolButton();
    messages_button->setObjectName("messagesButton");
    messages_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    messages_button->setText("Messages");
    messages_button->setIcon(QIcon(":images/icons/messages_icon.png"));
    messages_button->setIconSize(icon_size);
    connect(messages_button, SIGNAL(clicked()), parent, SLOT(openMessages()));

    QToolButton *settings_button = new QToolButton();
    settings_button->setObjectName("settingsButton");
    settings_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    settings_button->setText("Settings");
    settings_button->setIcon(QIcon(":images/icons/settings_icon.png"));
    settings_button->setIconSize(icon_size);
    connect(settings_button, SIGNAL(clicked()), parent, SLOT(openSettings()));

    ui->gridLayout->setSpacing(50);
    ui->gridLayout->addWidget(profile_button, 0, 0);
    ui->gridLayout->addWidget(properties_button, 0, 1);
    ui->gridLayout->addWidget(notices_button, 0, 2);
    ui->gridLayout->addWidget(maintenance_button, 1, 0);
    ui->gridLayout->addWidget(messages_button, 1, 1);
    ui->gridLayout->addWidget(settings_button, 1, 2);

}


QToolButton* MainPage::getMenuButton() {
    return ui->menu_button;
}


MainPage::~MainPage() {
    delete ui;
}


void MainPage::updateMain() {
    QSqlQuery query;
    qDebug() <<"hello" + dbmodel::username;
    query.exec("SELECT name FROM user WHERE username='"+dbmodel::username+"'");
    while (query.next()) {
         userName = query.value(0).toString();
         ui->welcomeLabel->setText("Welcome back, " + userName + "!");
    }
}
