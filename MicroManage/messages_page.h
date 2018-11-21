#include "ui_MessagesPageForm.h"
#include <QWidget>

namespace Ui {
    class MessagesPage;
}
class MessagesPage
{
    Q_OBJECT

public:
    explicit MessagesPage(QWidget *parent);

signals:

public slots:
    void changeText();

private:
    Ui::MessagesPage *ui;
    //int userRole;
};


