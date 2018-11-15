#ifndef CAPA_H
#define CAPA_H
#include <vector>
#include "neurona.h"
using namespace std;

class Capa{

vector <Neurona> listaNeuronas;

public:

void agregarNeurona(Neurona n){
    listaNeuronas.pushback(n);
}

};

#endif // CAPA_H
