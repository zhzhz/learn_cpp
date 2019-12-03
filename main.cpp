#include <QCoreApplication>
#include <QDebug>
#include "Test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test test;
    return a.exec();
}
