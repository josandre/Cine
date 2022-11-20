//
// Created by Jocselyn Aguilar on 19/11/22.
//

#ifndef PROYECTO1CINE_PILA_H
#define PROYECTO1CINE_PILA_H


#include "Nodo.h"

class Pila {

public:

    explicit Pila();
    bool push(Nodo);
    bool pop();
    int getLength();
    void setLength(int);
    void setUp(Nodo *);
    bool isFull();

private:
    Nodo *up;
    int Maxlength;
    int length;


};


#endif //PROYECTO1CINE_PILA_H
