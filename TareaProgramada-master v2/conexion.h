#ifndef CONEXION_H
#define CONEXION_H

class Neurona;
#include "neurona.h"

class Conexion{

    Neurona *n;
    float peso;

public:

    Conexion(Neurona &a, float p){ //p de peso
        n = &a;
        peso = p;
    }

    void setPeso(float n){
        peso = n;
    }

    float getPeso(){
        return peso;
    }
};

#endif // CONEXION_H
