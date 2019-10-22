#ifndef DIALOG_H
#define DIALOG_H

#include "objectcontroller.hh"

#include <QDialog>
#include <QDebug>
#include <QLayout>
#include <QWidget>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    virtual int exec();

signals:
    void sendValue(int value, ObjectType type);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();


private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
