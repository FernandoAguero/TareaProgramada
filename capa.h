#ifndef CAPA_H
#define CAPA_H
#include "neurona.h"
#include <vector>
using namespace std;

class Capa{

    vector<Neurona> listaNeuronas;

public:
    Capa(){
        //?
    }
    void AgregarNeurona(Neurona n){
        listaNeuronas.push_back(n);
    }
};

#endif // CAPA_H
