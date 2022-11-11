//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_NODO_H
#define PROYECTO1CINE_NODO_H
using namespace std;
#include "Client.h"

class Nodo {
public:

    Nodo(Client client);

    Nodo();

    Nodo *getNext();

    void setNext(Nodo *next);

    Nodo *getBack();

    void setBack(Nodo *back);

    Client *getData();

    void setData(Client);

    int getCost();

    void setCost();

    int getPosition();

    void setPosition(int);

    void setStatus(bool);

    bool getStatus();

    bool dataIsEmpty(Nodo *);

private:
    Nodo *next;
    Nodo *back;
    Client data;
    int position;
    int cost;
    bool status;

};


#endif //PROYECTO1CINE_NODO_H
