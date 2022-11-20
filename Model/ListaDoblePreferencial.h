//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_LISTADOBLEPREFERENCIAL_H
#define PROYECTO1CINE_LISTADOBLEPREFERENCIAL_H


#include "Client.h"
#include "Nodo.h"


class ListaDoblePreferencial {
public:
    explicit ListaDoblePreferencial();
    Nodo *getHead();
    int getlenght();
    void setLenght(int);
    void showSits();
    bool insertClient(Client, int);
    void setHead(Nodo *);
    bool validateSpot(int);
    bool showSpotsAvailable();
    void setAvailable(int);
    int getAvailable();
    void showSpots();
    string getZone();




private:
    void insertInLine(int answer, Client client);
    void initialize();
    int lenght = 10;
    Nodo *head;
    int available = 10;
    string zone;
};


#endif //PROYECTO1CINE_LISTADOBLEPREFERENCIAL_H
