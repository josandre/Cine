//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_LISTADOBLEPREFERENCIAL_H
#define PROYECTO1CINE_LISTADOBLEPREFERENCIAL_H


#include "Client.h"
#include "Sit.h"

class ListaDoblePreferencial {
public:
    explicit ListaDoblePreferencial();
    Sit getHead();
    int getlenght();
    void setLenght(int);
    void showSits();
    bool insertClient(Client, int);
    void setHead(Sit *);
    bool validateSpot(int);
    void showSpotsAvailable();
    void setAvailable(int);
    int getAvailable();
    void showSpots();
    string getZone();




private:
    void insertEnd(Client, int);
    void insertSits(Sit);
    void initialize();
    int lenght = 10;
    Sit *head;
    int available = 10;
    string zone;
};


#endif //PROYECTO1CINE_LISTADOBLEPREFERENCIAL_H
