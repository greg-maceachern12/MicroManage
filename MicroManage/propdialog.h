#ifndef PROPDIALOG_H
#define PROPDIALOG_H

#include <QDialog>

namespace Ui {
class propDialog;
}

class propDialog : public QDialog
{
    Q_OBJECT

public:
    explicit propDialog(QWidget *parent = nullptr);
    ~propDialog();

signals:
     void setUp(QString add, QString num);

public slots:
    void notifyParent();
    void onCancelClicked();
    void onOKClicked();

private:
    Ui::propDialog *ui;
};

#endif // PROPDIALOG_H
