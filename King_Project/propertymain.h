#include "propertymain.ui"


class PropertyMain : public QWidget{
    Q_OBJECT

public:
    PropertyMain(QWidget *parent=0);
    ~PropertyMain();

    Ui::PropertyMain *ui;
}
