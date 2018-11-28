#ifndef ALGORITMOGENETICO_H
#define ALGORITMOGENETICO_H
#include "individuo.h"
#include <iostream>
#include <time.h>
#include "algoritmogenetico_global.h"

class ALGORITMOGENETICOSHARED_EXPORT AlgoritmoGenetico
{
       Individuo * poblacion[100];
       Individuo * pobFinal[130];
   public:
       AlgoritmoGenetico();
       void generarPoblacion();
       void cruzar();
       void mutar();
       void calcularAptitud(Individuo*,int,int);
       void seleccion();
       Individuo* getIndividuo(int);
       void ordenarPorAptitud();

       void ordenarPorAptitud2();//fines ilustrativos
};

#endif // ALGORITMOGENETICO_H
