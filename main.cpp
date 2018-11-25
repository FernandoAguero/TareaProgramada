#include <QCoreApplication>
#include "red.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    Red red1 = Red();

    red1.AgregarCapa(1);
    red1.AgregarCapa(2);
    red1.AgregarCapa(4);
    red1.AgregarCapa(8);
    red1.AgregarCapa(1);



    //red1.MostrarRed();

    float valorEsperado=666;
    float prueba= red1.Entrenar(valorEsperado);
    while((red1.CalcularFallo(prueba,valorEsperado))<80){
        valorEsperado=red1.CalcularFallo(prueba,valorEsperado);
        red1.ModificarCargas(prueba);
        prueba=red1.Entrenar(valorEsperado);

     }

    cout<<"el numero esperado era "<<prueba<<endl;

    red1.MostrarRed();
    /*int c=1;
    int i=1;
    float resultado=0.0;
    while(i<2){
    resultado=red1.Entrenar(c);
    cout << resultado <<endl;
    if(resultado!=c){
        red1.Entrenar(resultado);

        //cout<<"el porcentaje de fallo es "<< red1.CalcularFallo(red1.Entrenar(resultado),c);

    }
    i++;

    // falta como modificar las cargas y pesos y lo de if carga>umbral
    }
    cout<<"0.4 es tanto % de 2 "<<red1.CalcularFallo(0.4,2.0)<<endl;
    red1.MostrarRed();


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
    }*/


    return a.exec();
}
