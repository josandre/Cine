//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/Sit.h"




Sit *Sit::getNext()  {
    return this->next;
}

void Sit::setNext(Sit *next) {
    this->next = next;
}

Sit *Sit::getBack()  {
    return this->back;
}

void Sit::setBack(Sit *back) {
    this->back = back;
}

Client &Sit::getData() {
    return this->data;
}

int Sit::getPosition() {
    return this->position;
}

void Sit::setPosition(int position) {
    this->position = position;
}

void Sit::setStatus(bool newStatus) {
    this->status = newStatus;
}

bool  Sit::getStatus() {
    return this->status;
}

void Sit::setData(Client client) {
    this->data = client;

}

Sit::Sit(Client data) {
    this->status = true;
}

Sit::Sit() {
    this->status = true;
}









