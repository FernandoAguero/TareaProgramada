#ifndef NEURONA_H
#define NEURONA_H
#include <vector>
#include "conexion.h"
using namespace std;

class Neurona{

    float carga;
    float umbral;
    vector <Conexion> listaConexiones;
/*
public:
    float aplicarCarga(float peso, float carga){return peso*carga};
    void agregarConexion(Neurona n, float peso){
        Conexion c = new Conexion(n, peso);
        listaConexiones.insert(0, c);
    }*/
};

#endif // NEURONA_H
