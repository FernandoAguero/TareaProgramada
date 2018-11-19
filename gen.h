#ifndef GEN_H
#define GEN_H
#include "individuo.h"
#include <iostream>
#include <time.h>

class Gen{
    Individuo * poblacion[100];
    Individuo * pobFinal[130];
public:
    Gen();
    ~Gen();
    void generarPoblacion();
    void cruzar();
    void mutar();
    void aptitud();
    void seleccion();
    Individuo* getIndividuo(int);
    void ordenarPorAptitud();

    void ordenarPorAptitud2();

};
#endif // GEN_H
