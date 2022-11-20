//
// Created by Jocselyn Aguilar on 19/11/22.
//

#include "../Model/PilaPasillo.h"

PilaPasillo::PilaPasillo() {
    top = nullptr;
    Maxlength = 4;
    length = 0;
}

void PilaPasillo::setUp(NodoPila *fila) {
    this->top = fila;
}

void PilaPasillo::setLength(int number) {
    this->length = number;
}

NodoPila *PilaPasillo::getUp() {
    return this->top;
}

bool PilaPasillo::push(Client client) {

    if(isFull()){
        return false;
    }

    if(this->top == nullptr || this->top->getData()->isFull()){
        Pila fila = Pila();
        NodoPila *nodoPila = new NodoPila(fila);
        setUp(nodoPila);
        setLength(this->length + 1);
    }
    this->top->getData()->push(client);
    return true;
}

bool PilaPasillo::isFull() {
    return this->length == this->Maxlength && this->top->getData()->isFull();
}

bool PilaPasillo::searchClient(string id) {
    NodoPila *aux = getUp();

    while (aux != nullptr){
        bool answer = aux->getData()->searchClient(id);
        if(answer){
            return true;
        }

        aux = aux->getNext();
    }
    return false;
}



