#ifndef NEURONA_H
#define NEURONA_H
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <random>

#include <initializer_list>

using namespace std;

class Conexion;

#include "conexion.h"

class Neurona{

    float carga;
    float umbral;
    vector<Conexion> listaConexiones;

public:

    Neurona(){
        //srand (time(NULL));
        carga=getRandom();
        //srand (time(NULL));
        umbral=getRandom();
    }

    float getRandom(){
        //http://www.cplusplus.com/reference/random/uniform_real_distribution/

        static default_random_engine e;
        static uniform_real_distribution<> dis(0, 1); // rage 0 - 1
        return dis(e);
    }

    float getCarga(){
        return carga;
    }

    void imprimirCarga(){
        cout << carga;
    }

    void setCarga(float k){
        carga=k;
    }

    float getUmbral(){
        return umbral;
    }

    void imprimirUmbral(){
        cout << umbral;
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
