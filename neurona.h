#ifndef NEURONA_H
#define NEURONA_H
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>

using namespace std;

class Conexion;

#include "conexion.h"

class Neurona{

    float carga;
    float umbral;
    vector<Conexion> listaConexiones;

public:
    Neurona(){
        srand (static_cast <unsigned> (time(0)));
        carga=static_cast <float> (rand()) / static_cast <float> (RAND_MAX);;
        umbral=static_cast <float> (rand()) / static_cast <float> (RAND_MAX);;
    }
    float getCarga(){
        return carga;
    }

    void imprimirCarga(){
            ostringstream buff;
            buff<<carga;
            cout<<buff.str()<<endl;

    }
    void setCarga(float k){
        carga=k;
    }
    float getUmbral(){
        return umbral;
    }

    void imprimirUmbral(){
            ostringstream buff;
            buff<<umbral;
            cout<<buff.str()<<endl;

    }
    void setUmbral(float k){
        umbral=k;
    }

    void AgregarConexion(Neurona n, float peso){
        Conexion c = Conexion(n, peso);
        listaConexiones.push_back(c);
    }
};

#endif // NEURONA_H
