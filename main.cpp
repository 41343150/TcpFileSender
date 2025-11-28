#include "topfilesender.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TopFileSender w;
    w.show();
    return a.exec();
}
