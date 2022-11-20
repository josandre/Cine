//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_COLAESPERA_H
#define PROYECTO1CINE_COLAESPERA_H


#include "Nodo.h"

class ColaEspera {
public:
    explicit ColaEspera();
    void insertClient(Client);//lista simple
    void showLine();
    void atender();
    Nodo *getFront();
    Nodo *getFinal();
    void setFront(Nodo *);
    void setFinal(Nodo *);

private:
    int longitud;
    Nodo *front;
    Nodo *final;

};


#endif //PROYECTO1CINE_COLAESPERA_H
