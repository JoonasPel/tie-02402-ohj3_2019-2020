#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void valueChanged(int value);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
