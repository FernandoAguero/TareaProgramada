#include <QCoreApplication>
#include "neurona.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Neurona n;
    n.imprimirCarga();


    return a.exec();
}
