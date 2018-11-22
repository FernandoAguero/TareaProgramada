#include <QCoreApplication>
#include "red.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    Red red1 = Red();

    red1.AgregarCapa(1);
    red1.AgregarCapa(3);
    red1.AgregarCapa(5);
    red1.AgregarCapa(5);
    red1.AgregarCapa(3);
    red1.AgregarCapa(1);

    red1.MostrarRed();
    int c=0;
    while(c<100){
    cout << red1.Entrenar(c)<<endl;
    c++;
    }

    red1.MostrarRed();


    /*Neurona n;
    Neurona m;
    Neurona k;
    n.imprimirCarga();
    m.imprimirCarga();
    k.imprimirCarga();

    cout<<"los da como en orden por cada corrida siempre pero sin repetirse ni aumentar"<<endl;

    for(int i=0; i<10;i++){
        Neurona l;
        l.imprimirCarga();
    }*/


    return a.exec();
}
