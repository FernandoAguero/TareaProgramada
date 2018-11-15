#ifndef RED_H
#define RED_H

#include "red_global.h"
#include "capa.h"
#include <vector>

class REDSHARED_EXPORT Red{

    vector <Capa> listaCapas;

public:
    Red();
    void agregarCapa(int);
    //clasificar
    //entrenar
};

#endif // RED_H
