#ifndef INDIVIDUO_H
#define INDIVIDUO_H

class Individuo{
    int x;
    int y;
    int aptitud;
public:
    Individuo(){x=0; y=0;}
    Individuo(int x1,int y1, int ap){x=x1; y=y1;aptitud= ap;}
    void setX(int nuevaX){x=nuevaX;}
    void setY(int nuevaY){y=nuevaY;}
    void setAptitud(int nuevaAp){aptitud=nuevaAp;}
    int getX(){return x;}
    int getY(){return y;}
    int getAptitud(){return aptitud;}
};

#endif // INDIVIDUO_H
