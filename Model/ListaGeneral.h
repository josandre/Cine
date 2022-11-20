//
// Created by Jocselyn Aguilar on 19/11/22.
//

#ifndef PROYECTO1CINE_LISTAGENERAL_H
#define PROYECTO1CINE_LISTAGENERAL_H


#include "Client.h"
#include "Nodo.h"

class ListaGeneral {
public:

    explicit ListaGeneral();
    bool addClient(Client);
    void setHead(Nodo *);
    void mostrarLista();
    bool isFull();
    void setLength(int);
    int availableSpots();

private:

    Nodo *head = nullptr;
    int maxLength;
    int length;


};


#endif //PROYECTO1CINE_LISTAGENERAL_H
