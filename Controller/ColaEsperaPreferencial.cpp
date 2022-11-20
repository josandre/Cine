//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/ColaEsperaPreferencial.h"

ColaEsperaPreferencial::ColaEsperaPreferencial() {
    this->longitud = 0;
    this->front = nullptr;
    this->final = nullptr;
}

Nodo *ColaEsperaPreferencial::getFinal() {
    return this->final;
}

void ColaEsperaPreferencial::setFinal(Nodo *newFinal) {
    this->final = newFinal;
}

void ColaEsperaPreferencial::insertClient(Client client) {
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

void ColaEsperaPreferencial::showLine() {
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



Nodo *ColaEsperaPreferencial::getFront() {
    return this->front;
}

void ColaEsperaPreferencial::setFront(Nodo *nodo) {
    this->front = nodo;
}

void ColaEsperaPreferencial::atender() {
    Nodo *aux = getFront();
    if(aux != nullptr){
        setFront(getFront()->getNext());
        delete aux;
    }
}



