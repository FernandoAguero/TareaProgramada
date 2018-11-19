#include <QCoreApplication>
#include "red.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    Red red1 = Red();

    cout << "Primera capa:" << endl << endl;
    red1.AgregarCapa(1);
    cout << endl << endl;

    cout << "Segunda capa:" << endl << endl;
    red1.AgregarCapa(3);
    cout << endl << endl;

    cout << "Tercera capa:" << endl << endl;
    red1.AgregarCapa(5);
    cout << endl << endl;

    cout << "Cuarta capa:" << endl << endl;
    red1.AgregarCapa(5);
    cout << endl << endl;

    cout << "Quinta capa:" << endl << endl;
    red1.AgregarCapa(3);
    cout << endl << endl;

    cout << "Ultima capa:" << endl << endl;
    red1.AgregarCapa(1);
    cout << endl << endl;


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
