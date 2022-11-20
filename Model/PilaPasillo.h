//
// Created by Jocselyn Aguilar on 19/11/22.
//

#ifndef PROYECTO1CINE_PILAPASILLO_H
#define PROYECTO1CINE_PILAPASILLO_H


#include "Pila.h"
#include "NodoPila.h"

class PilaPasillo {
public:
    explicit PilaPasillo();
    bool push(Client);
    int getLength();
    void setLength(int);
    void setUp(NodoPila *);
    NodoPila *getUp();
    bool isFull();
    bool searchClient(string);


private:
    NodoPila *top;
    int Maxlength;
    int length;
};


#endif //PROYECTO1CINE_PILAPASILLO_H
