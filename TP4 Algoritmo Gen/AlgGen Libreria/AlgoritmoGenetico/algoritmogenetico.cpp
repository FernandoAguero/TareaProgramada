#include "algoritmogenetico.h"


AlgoritmoGenetico::AlgoritmoGenetico(){
    generarPoblacion();
}

void AlgoritmoGenetico::generarPoblacion(){
    srand(time(0));
    for(int i=0; i<100; i++){
         poblacion[i]= new Individuo(-100+rand()%200,-100+rand()%200,rand()%101);
     }
}

void AlgoritmoGenetico::cruzar(){
    srand(time(0));
    for(int i=0; i<100; i++){
        pobFinal[i]=poblacion[i];
    }
    for(int i=0; i<30; i++){
        pobFinal[100+i]=new Individuo(poblacion[rand()%100]->getX(),poblacion[rand()%100]->getY(),rand()%101);
    }
}

void AlgoritmoGenetico::mutar(){
    for(int i=0; i<15; i++){
      int random = rand()%4;
      switch (random) {
        case 0:{
            int indRandom=rand()%130;
            pobFinal[indRandom]->setX(pobFinal[indRandom]->getX()*(-10+rand()%21));
            break;
        }
        case 1:{
          int indRandom2=rand()%130;
          pobFinal[indRandom2]->setY(pobFinal[indRandom2]->getY()*(-10+rand()%21));
          break;
        }
        case 2:{
            int indRandom3=rand()%130;
            pobFinal[indRandom3]->setX(pobFinal[indRandom3]->getX()*(-10+rand()%21));
            break;
        }
        case 3:{
          int indRandom4=rand()%130;
          pobFinal[indRandom4]->setY(pobFinal[indRandom4]->getY()*(-10+rand()%21));
          break;
        }
      }
    }
}

Individuo* AlgoritmoGenetico::getIndividuo(int i){//para fines ilustrativos
    return poblacion[i];
}

void AlgoritmoGenetico::ordenarPorAptitud(){
    Individuo * temp;
    for(int i=0; i<130; i++){
        for(int j=0; j<129; j++){
            if(pobFinal[j]->getAptitud()<pobFinal[j+1]->getAptitud()){
                temp=pobFinal[j];
                pobFinal[j]=pobFinal[j+1];
                pobFinal[j+1]=temp;
            }
         }
    }
}

void AlgoritmoGenetico::ordenarPorAptitud2(){ //para fines de prueba
    Individuo * temp;
    for(int i=0; i<100; i++){
        for(int j=0; j<99; j++){
            if(poblacion[j]->getAptitud()<poblacion[j+1]->getAptitud()){
                temp=poblacion[j];
                poblacion[j]=poblacion[j+1];
                poblacion[j+1]=temp;
            }
         }
    }
}

void AlgoritmoGenetico::seleccion(){
    for(int i=0;i<100; i++){
        if(i<80){
            poblacion[i]=pobFinal[i];
        }
        else{
            poblacion[i]=pobFinal[i+15];
        }
    }
}
void AlgoritmoGenetico::calcularAptitud(Individuo * ind,int valorIndividuo, int valorReal){//tiene que adaptarse al problema a solucionar
    int apt=valorReal-valorIndividuo;
    ind->setAptitud(apt);
}
