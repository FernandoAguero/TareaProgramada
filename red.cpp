#include "red.h"

void Red::AgregarCapa(int cantidadNeuronas){
    Capa c;
    for(int i=0; i<cantidadNeuronas; i++){
        Neurona n = Neurona();
        c.AgregarNeurona(n);
    }
    listaCapas.push_back(c);
}
