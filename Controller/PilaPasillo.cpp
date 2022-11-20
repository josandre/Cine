//
// Created by Jocselyn Aguilar on 19/11/22.
//

#include "../Model/PilaPasillo.h"

PilaPasillo::PilaPasillo() {
    top = nullptr;
    Maxlength = 4;
    length = 0;
}

void PilaPasillo::setUp(Pila *fila) {
    this->top = fila;
}

void PilaPasillo::setLength(int number) {
    this->length = number;
}

bool PilaPasillo::push(Client client) {

    if(isFull()){
        return false;
    }

    if(this->top == nullptr || this->top->isFull()){
        Pila *fila = new Pila();
        setUp(fila);
        setLength(this->length + 1);
    }

    this->top->push(client);
    return true;
}

bool PilaPasillo::isFull() {
    return this->length == this->Maxlength && this->top->isFull();
}

int PilaPasillo::availableSpots() {
    return this->Maxlength - this->length;
}


