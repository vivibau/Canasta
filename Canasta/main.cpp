#include "canastamainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CanastaMainWindow w;
    w.show();

    return a.exec();
}
