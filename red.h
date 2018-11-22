#ifndef RED_H
#define RED_H
#include "capa.h"
#include <vector>
using namespace std;

class Red{

    vector<Capa> listaCapas;

public:

    Red();
    void AgregarCapa(int);
    void Conectar();
    void MostrarRed();
    //clasificar
    float Entrenar(float);
};

#endif // RED_H
