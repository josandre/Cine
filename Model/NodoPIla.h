//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_NodoPila_H
#define PROYECTO1CINE_NodoPila_H
using namespace std;
#include "Pila.h"

class NodoPila {
public:

    NodoPila(Pila Pila);

    NodoPila();

    NodoPila *getNext();

    void setNext(NodoPila *next);

    NodoPila *getBack();

    void setBack(NodoPila *back);

    Pila *getData();

    void setData(Pila);



private:
    NodoPila *next;
    NodoPila *back;
    Pila data;

};


#endif //PROYECTO1CINE_NodoPila_H
