//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_SIT_H
#define PROYECTO1CINE_SIT_H
using namespace std;
#include "Client.h"

class Sit {
public:

    Sit(Client client);

    Sit();

    Sit *getNext();

    void setNext(Sit *next);

    Sit *getBack();

    void setBack(Sit *back);

    Client &getData();

    void setData(Client);

    int getCost();

    void setCost();

    int getPosition();

    void setPosition(int);

    void setStatus(bool);

    bool getStatus();

private:
    Sit *next;
    Sit *back;
    Client data;
    int position;
    int cost;
    bool status;

};


#endif //PROYECTO1CINE_SIT_H
