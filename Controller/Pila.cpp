//
// Created by Jocselyn Aguilar on 19/11/22.
//

#include "../Model/Pila.h"

Pila::Pila() {
    up = nullptr;
    Maxlength = 5;
    length = 0;
}

void Pila::setUp(Nodo *newNodo) {
    this->up = newNodo;
}

void Pila::setLength(int number) {
    this->length = number;
}

bool Pila::push(Nodo client) {
    Nodo *newClient = new Nodo(client);
    if(isFull()){
        return false;
    }

    if(this->up != nullptr){
        newClient->setNext(this->up);
    }

    setUp(newClient);
    setLength(this->length + 1);
    return true;
}
bool Pila::isFull() {
   return this->length == this->Maxlength;
}
