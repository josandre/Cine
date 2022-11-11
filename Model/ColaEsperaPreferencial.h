//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_COLAESPERAPREFERENCIAL_H
#define PROYECTO1CINE_COLAESPERAPREFERENCIAL_H


#include "Nodo.h"

class ColaEsperaPreferencial {
public:
    explicit ColaEsperaPreferencial();
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


#endif //PROYECTO1CINE_COLAESPERAPREFERENCIAL_H
