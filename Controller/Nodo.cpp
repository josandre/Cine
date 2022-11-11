//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/Nodo.h"




Nodo *Nodo::getNext()  {
    return this->next;
}

void Nodo::setNext(Nodo *next) {
    this->next = next;
}

Nodo *Nodo::getBack()  {
    return this->back;
}

void Nodo::setBack(Nodo *back) {
    this->back = back;
}

Client *Nodo::getData() {
    return &this->data;
}

int Nodo::getPosition() {
    return this->position;
}

void Nodo::setPosition(int position) {
    this->position = position;
}

void Nodo::setStatus(bool newStatus) {
    this->status = newStatus;
}

bool  Nodo::getStatus() {
    return this->status;
}

void Nodo::setData(Client client) {
    this->data = client;

}

Nodo::Nodo(Client data) {
    this->data = data;
    this->status = true;
}

Nodo::Nodo() {
    this->status = true;
}

bool Nodo::dataIsEmpty(Nodo *sit) {
    if(sit->getData()->getId() == "" && sit->getData()->getName() == ""){
        return true;
    }
    return false;
}









