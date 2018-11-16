#ifndef CONEXION_H
#define CONEXION_H

class Neurona;
#include "neurona.h"

class Conexion{

    Neurona n();
    float peso;

public:

    Conexion(Neurona n, float peso);
};

#endif // CONEXION_H
