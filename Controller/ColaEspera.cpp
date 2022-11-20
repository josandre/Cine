//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/ColaEspera.h"

ColaEspera::ColaEspera() {
    this->longitud = 0;
    this->front = nullptr;
    this->final = nullptr;
}

Nodo *ColaEspera::getFinal() {
    return this->final;
}

void ColaEspera::setFinal(Nodo *newFinal) {
    this->final = newFinal;
}

void ColaEspera::insertClient(Client client) {
    Nodo *newClient = new Nodo(client);

    if(this->front == nullptr){
        setFront(newClient);
        setFinal(newClient);
        longitud ++;
    } else{
        final->setNext(newClient);
        newClient->setBack(final);
        setFinal(newClient);
        longitud ++;
    }
}

void ColaEspera::showLine() {
    Nodo *aux = this->front;

    if(this->front == nullptr){
        cout << "the line is empty" << endl;
    } else{
        while (aux != nullptr){
            cout << aux->getData()->toString() << endl;
            aux = aux->getNext();
        }

    }
}



Nodo *ColaEspera::getFront() {
    return this->front;
}

void ColaEspera::setFront(Nodo *nodo) {
    this->front = nodo;
}

void ColaEspera::atender() {
    Nodo *aux = getFront();
    if(aux != nullptr){
        setFront(getFront()->getNext());
        delete aux;
    }
}



