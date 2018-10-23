#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
#include <QtWidgets>
#include <QPushButton>

namespace Ui {
class Profile;
}

class Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();


public slots:
    void makeEditable();


private:
    //QPushButton *sideButton;
    QPushButton *editButton;
    //QDockWidget *sideMenu;
    Ui::Profile *ui;
};

#endif // PROFILE_H
