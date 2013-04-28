
#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QDebug>
#include <QTextCodec>
#include <QString>
#include "filemanager.h"
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    MainWindow w;
    w.show();

    return a.exec();
}
