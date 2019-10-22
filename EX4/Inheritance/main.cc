#include "mainwindow.hh"
#include "objectcontroller.hh"
#include "dialog.h"

#include <QApplication>
#include <cstdlib>
#include <time.h>
#include <QDebug>
#include <QLayout>
#include <QWidget>
#include <QTimer>



int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);

    ObjectController* engine = new ObjectController();

    Dialog dia;
    MainWindow w(engine);


    QObject::connect(&dia, &Dialog::sendValue, &w, &MainWindow::spawnObjects);

    if(dia.exec() == QDialog::Accepted)
    {
        w.show();
    }

    return a.exec();
}
