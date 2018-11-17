#include <QCoreApplication>
#include "neurona.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    Neurona n;
    Neurona m;
    Neurona k;
    n.imprimirCarga();
    m.imprimirCarga();
    k.imprimirCarga();

    cout<<"los da como en orden por cada corrida siempre pero sin repetirse ni aumentar"<<endl;

    for(int i=0; i<10;i++){
        Neurona l;
        l.imprimirCarga();
    }


    return a.exec();
}
