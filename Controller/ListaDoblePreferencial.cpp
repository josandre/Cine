//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/ListaDoblePreferencial.h"
#include "../Model/ColaEsperaPreferencial.h"

ListaDoblePreferencial::ListaDoblePreferencial() {
    this->head = nullptr;
    this->initialize();
    this->zone = "preferential";
}

void ListaDoblePreferencial::initialize() {
    int position = 9;
    setHead(new Nodo());
    this->head->setPosition(position);
    int acum = 1;

    while (acum < lenght){
        position --;
        Nodo *sit = new Nodo();
        sit->setPosition(position);
        sit->setNext(this->head);
        this->head->setBack(sit);
        setHead(sit);
        acum ++;

    }
}

void ListaDoblePreferencial::showSpots(){
    Nodo *aux = getHead();
    while (aux != nullptr){
        cout << aux->getData()->toString() <<  aux->getPosition() << endl;
        aux = aux->getNext();
    }
}

void ListaDoblePreferencial::showSpotsAvailable() {
    Nodo *aux = getHead();
    while (aux != nullptr){
        if(aux->dataIsEmpty(aux)){
            cout << aux->getPosition() << endl;
        }
        aux = aux->getNext();
    }
}


Nodo *ListaDoblePreferencial::getHead() {
    return this->head;
}

void ListaDoblePreferencial::setHead(Nodo *client) {
    this->head = client;
}

bool ListaDoblePreferencial::insertClient(Client client, int position) {
    Nodo *aux = this->head;

    while (aux != nullptr){
        if(aux->getPosition() == position && validateSpot(position)){
            aux->setData(client);
            aux->setStatus(false);
            setAvailable(getAvailable() - 1);
            return true;
        }
        aux = aux->getNext();
    }
    return false;
}

void ListaDoblePreferencial::insertInLine(int answer, Client client) {
    ColaEsperaPreferencial  *espera = new ColaEsperaPreferencial();
    Nodo *newNodo = new Nodo(client);

    if(answer == 1 && getAvailable() == 0){
        espera->insertClient(client);
    }
}

void ListaDoblePreferencial::setAvailable(int amount){
    this->available = amount;
}

int ListaDoblePreferencial::getAvailable() {
    return this->available;
}

bool ListaDoblePreferencial::validateSpot(int postion) {
    Nodo *aux = this->head;
    while (aux != nullptr){
        if(postion == aux->getPosition() && aux->getStatus()){
            return true;
        }
        aux = aux->getNext();
    }
    return false;
}






