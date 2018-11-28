#include <iostream>
#include "gen.h"


using namespace std;

int main()
{
    Gen * g=new Gen();
    for(int i=0; i<10000; i++){
    g->cruzar();
    g->mutar();
    g->ordenarPorAptitud();

    g->seleccion();
    }
    for(int i=0; i<100; i++){
        cout<<i<<". "<<g->getIndividuo(i)->getAptitud()<<endl;
    }

    return 0;
}
