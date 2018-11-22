#include "red.h"

Red::Red(){};

void Red::AgregarCapa(int cantidadNeuronas){
    Capa c;
    for(int i=0; i<cantidadNeuronas; i++){
        Neurona n = Neurona();
        c.AgregarNeurona(n);
    }
    listaCapas.push_back(c);
}

void Red::Conectar(){
    for(int i=0; i<listaCapas.size()-1; i++){
        for(int i2=0; i2<listaCapas[i].listaNeuronas.size(); i2++){
            for(int i3=0; i3<listaCapas[i+1].listaNeuronas.size(); i3++){
                listaCapas[i].listaNeuronas[i2].AgregarConexion(listaCapas[i+1].listaNeuronas[i3], listaCapas[i].listaNeuronas[i].getRandom());
            }
        }
    }
}

void Red::MostrarRed(){
    for(int i=0; i<listaCapas.size(); i++){
        cout << "Capa " << i << ": " << endl << endl;
        for(int i2=0; i2<listaCapas[i].listaNeuronas.size(); i2++){
            cout << "Neurona " << i << ":  Carga = " << listaCapas[i].listaNeuronas[i2].getCarga() << "  Umbral = " << listaCapas[i].listaNeuronas[i2].getUmbral() << endl;
        }
        cout << endl << endl;
    }
}

float Red::Entrenar(float n){
    for(int i=0; i<listaCapas.size(); i++){
        for(int i2=0; i2<listaCapas[i].listaNeuronas.size(); i2++){
            n = n * listaCapas[i].listaNeuronas[i2].getCarga();

        }
    }
    return n;
}


