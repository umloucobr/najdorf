#include "najdorf.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Najdorf w;
    w.showMaximized();
    w.show();
    return a.exec();
}
