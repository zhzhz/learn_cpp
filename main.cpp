#include <QCoreApplication>
#include <QDebug>
#include "set"
#include "class1.h"
#include "driver/class2.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> v = { 1, 2, 3 };
    std::list<int> l = { 1, 2, 3 };
    std::set<int> s = { 1, 2, 3 };
    std::map<int, std::string> m = { {1, "a"}, {2, "b"} };

    qDebug() << "hello qt";
    class1 class11;
    class2 class22;
    return a.exec();
}
