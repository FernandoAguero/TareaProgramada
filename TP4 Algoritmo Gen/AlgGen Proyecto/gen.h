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
    void calcularAptitud(Individuo*,int,int);
    void seleccion();
    Individuo* getIndividuo(int);
    void ordenarPorAptitud();

    void ordenarPorAptitud2();//fines ilustrativos

};
#endif // GEN_H
