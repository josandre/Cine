//
// Created by Jocselyn Aguilar on 19/11/22.
//

#ifndef PROYECTO1CINE_PILAPASILLO_H
#define PROYECTO1CINE_PILAPASILLO_H


#include "Pila.h"

class PilaPasillo {
public:
    explicit PilaPasillo();
    bool push(Client);
    int getLength();
    void setLength(int);
    void setUp(Pila *);
    bool isFull();
    int availableSpots();

private:
    Pila *top;
    int Maxlength;
    int length;
};


#endif //PROYECTO1CINE_PILAPASILLO_H
