#include <iostream>
#include "gen.h"
#include <time.h>

using namespace std;

int main()
{
   /* Gen * g=new Gen();
    for(int i=0; i<100; i++){
    g->cruzar();
    g->mutar();
    g->ordenarPorAptitud();
    //g->seleccion();
    }
    for(int i=0; i<100; i++){
        cout<<g->getIndividuo(i)->getAptitud()<<endl;
    }*/
    srand(time(0));
    double i= rand()%2/rand()%101;
    cout<<i<<endl;
    return 0;
}
