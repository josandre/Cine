//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/NodoPila.h"

NodoPila *NodoPila::getNext()  {
    return this->next;
}

void NodoPila::setNext(NodoPila *next) {
    this->next = next;
}

NodoPila *NodoPila::getBack()  {
    return this->back;
}

void NodoPila::setBack(NodoPila *back) {
    this->back = back;
}

Pila *NodoPila::getData() {
    return &this->data;
}

void NodoPila::setData(Pila Pila) {
    this->data = Pila;

}

NodoPila::NodoPila(Pila data) {
    this->data = data;
}

NodoPila::NodoPila() {
}









