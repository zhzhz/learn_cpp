#include <QCoreApplication>
#include <QDebug>
#include "set"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> v = { 1, 2, 3 };
    std::list<int> l = { 1, 2, 3 };
    std::set<int> s = { 1, 2, 3 };
    std::map<int, std::string> m = { {1, "a"}, {2, "b"} };

    qDebug() << "hello qt";
    return a.exec();
}
