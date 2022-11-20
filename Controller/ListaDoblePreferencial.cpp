//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/ListaDoblePreferencial.h"
#include "../Model/ColaEspera.h"


ListaDoblePreferencial::ListaDoblePreferencial() {
    this->head = nullptr;
    this->initialize();
    this->zone = "preferential";
}

void ListaDoblePreferencial::setAvailable(int amount){
    this->available = amount;
}

int ListaDoblePreferencial::getAvailable() {
    return this->available;
}


Nodo *ListaDoblePreferencial::getHead() {
    return this->head;
}

void ListaDoblePreferencial::setHead(Nodo *client) {
    this->head = client;
}

void ListaDoblePreferencial::initialize() {
    int position = 9;
    setHead(new Nodo());
    getHead()->setPosition(position);
    int acum = 1;

    while (acum < lenght){
        position --;
        Nodo *sit = new Nodo();
        sit->setPosition(position);
        sit->setNext(getHead());
        getHead()->setBack(sit);
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

bool ListaDoblePreferencial::showSpotsAvailable() {
    Nodo *aux = getHead();
    int acum = 0;
    while (aux != nullptr){
        if(aux->dataIsEmpty(aux)){
            cout << aux->getPosition() << endl;
            acum ++;
        }
        aux = aux->getNext();
    }

    if(acum == 0){
        cout << "the preferential spots are full. Would you like to save a spot in line" << endl;
        return false;
    }

    return true;
}

bool ListaDoblePreferencial::searchClient(string id) {
    Nodo *aux = getHead();
    while (aux != nullptr){
        if(aux->getData()->getId() == id){
            aux->setStatus(true);
            return true;
        }
        aux = aux->getNext();
    }
    return false;
}




bool ListaDoblePreferencial::insertClient(Client client, int position) {
    Nodo *aux = getHead();
    while (aux != nullptr){
        if(aux->getPosition() == position && validateSpot(position)){
            aux->setData(client);
            setAvailable(getAvailable() - 1);
            return true;
        }
        aux = aux->getNext();
    }
    return false;
}

bool ListaDoblePreferencial::validateSpot(int postion) {
    Nodo *aux = getHead();
    while (aux != nullptr){
        if(postion == aux->getPosition() && aux->getData()->getId() == ""){
            return true;
        }
        aux = aux->getNext();
    }
    return false;
}






