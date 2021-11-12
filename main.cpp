#include "mainwindow.h"

#include <QApplication>
#include <QScreen>
//#include <QtCore>
#include <QtWebEngineWidgets/QWebEngineView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QWebEngineView *view = new QWebEngineView(&w);
    view->load(QUrl("https://google.com/"));
    view->setGeometry(0,0,w.width(),w.height());
    view->show();
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
