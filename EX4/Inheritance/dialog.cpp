#include "dialog.h"
#include "ui_dialog.h"
#include "fastball.hh"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

int Dialog::exec()
{
    int dialog = QDialog::exec();

    if(dialog == QDialog::Accepted) {
        emit sendValue(ui->horizontalSlider->value(), FASTBALL);
    }
    return dialog;
}

void Dialog::on_buttonBox_accepted()
{
}

void Dialog::on_buttonBox_rejected()
{

}

