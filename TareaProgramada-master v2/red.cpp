#include "red.h"

Red::Red(){};

void Red::AgregarCapa(int cantidadNeuronas){
    Capa c;
    for(int i=0; i<cantidadNeuronas; i++){
        Neurona n = Neurona();
        c.AgregarNeurona(n);
        cout << "Neurona " << i << ":  Carga = " << n.getCarga() << "  Umbral = " << n.getUmbral() << endl;
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
