//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1CINE_CLIENT_H
#define PROYECTO1CINE_CLIENT_H

#include <iostream>

using namespace std;

class Client {
public:
    explicit Client();
    explicit Client(string name, string id);
    string getName();
    string getId();
    string toString();


private:
    string name;
    string Id;
};


#endif //PROYECTO1CINE_CLIENT_H
