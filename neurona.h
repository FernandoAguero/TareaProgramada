#ifndef NEURONA_H
#define NEURONA_H
#include <vector>
using namespace std;

class Conexion;

#include "conexion.h"

class Neurona{

    float carga;
    float umbral;
    vector<Conexion> listaConexiones;

public:

    void AgregarConexion(Neurona n, float peso){
        Conexion c = Conexion(n, peso);
        listaConexiones.push_back(c);
    }
};

#endif // NEURONA_H
