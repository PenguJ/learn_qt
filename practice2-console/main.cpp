#include <QCoreApplication>
#include <QtCore/QDebug>
#include <QObject>
#include "counter.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    qInfo() << "Hello World!";
    Counter a, b;
    QObject::connect(&a, &Counter::valueChanged, &b, &Counter::setValue);

    a.setValue(12);
    qInfo() << a.value() << b.value();
    b.setValue(48);
    qInfo() << a.value() << b.value();

    return app.exec();
}
