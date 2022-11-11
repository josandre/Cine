//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/Client.h"
//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/Client.h"
Client::Client() {}

Client::Client(string name, string id) {
    this->name = name;
    this->Id = id;
}

string Client::getId() {
    return this->Id;
}

string Client::getName() {
    return this->name;
}

string Client::toString() {
    return "name: " + getName() +
    " Id: " + getId();
}

