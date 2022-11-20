//
// Created by Jocselyn Aguilar on 19/11/22.
//

#include "../Model/ListaGeneral.h"
ListaGeneral::ListaGeneral(){
    this->head = nullptr;
    this->length = 0;
    this->maxLength = 20;
};

void ListaGeneral::setHead(Nodo *head) {
    this->head = head;
}

void ListaGeneral::setLength(int number) {
    this->length = number;
}

bool ListaGeneral::addClient(Client client) {
    Nodo *newClient = new Nodo(client);
    Nodo *aux = this->head;
    if(isFull()){
        return false;
    }

    if(this->head == nullptr){
        setHead(newClient);
    }else{

        while (aux->getNext() != nullptr){
            aux = aux->getNext();
        }

        aux->setNext(newClient);
    }

    setLength(this->length + 1);
    return true;
}

bool ListaGeneral::isFull() {
    return this->maxLength == this->length;
}

void ListaGeneral::mostrarLista() {
    Nodo *aux = nullptr;
    aux = this->head;

    if(this->head == nullptr){
        cout << "All the spots are available" << endl;
    } else {
        while (aux != nullptr){
            cout << aux->getData()->toString() << "|";
            aux = aux->getNext();

        }
        cout << endl;
    }
}

int ListaGeneral::availableSpots() {
    return this->maxLength - this->length;
}


