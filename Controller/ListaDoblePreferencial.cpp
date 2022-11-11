//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/ListaDoblePreferencial.h"

ListaDoblePreferencial::ListaDoblePreferencial() {
    this->head = nullptr;
    this->initialize();
    this->zone = "preferential";
}

void ListaDoblePreferencial::initialize() {
    int position = 9;
    setHead(new Sit());
    this->head->setPosition(position);
    int acum = 1;

    while (acum < lenght){
        position --;
        Sit *sit = new Sit();
        sit->setPosition(position);
        sit->setNext(this->head);
        this->head->setBack(sit);
        setHead(sit);
        acum ++;

    }
}

void ListaDoblePreferencial::showSpots(){
    Sit *aux = this->head;
    while (aux != nullptr){
        cout << aux->getData().toString() <<  aux->getPosition() << endl;
        aux = aux->getNext();
    }

}

void ListaDoblePreferencial::showSits() {

}

Sit ListaDoblePreferencial::getHead() {
    return this->getHead();
}

void ListaDoblePreferencial::setHead(Sit *client) {
    this->head = client;
}

bool ListaDoblePreferencial::insertClient(Client client, int position) {
    Sit *aux = this->head;

    while (aux != nullptr){
        if(aux->getPosition() == position && validateSpot(position)){
            aux->setData(client);
            aux->setStatus(false);
            setAvailable(available - 1);
            return true;
        }
        aux = aux->getNext();
    }
    return false;

}

void ListaDoblePreferencial::setAvailable(int amount){
    this->available = amount;
}

int ListaDoblePreferencial::getAvailable() {
    return this->available;
}

void ListaDoblePreferencial::insertEnd(Client client, int position) {
    Sit *newClient = new Sit(client);
    Sit *aux = this->head;

    while (aux->getNext() != nullptr){
        aux->setNext(aux->getNext());
    }
    aux->setNext(newClient);
    newClient->setBack(aux);

}

bool ListaDoblePreferencial::validateSpot(int postion) {
    Sit *aux = this->head;
    while (aux != nullptr){
        if(postion == aux->getPosition() && aux->getStatus()){
            return true;
        }
        aux = aux->getNext();
    }
    return false;
}






