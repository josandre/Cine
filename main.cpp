#include <iostream>
#include "Model/ListaDoblePreferencial.h"

int main() {

    ListaDoblePreferencial *preferencial = new ListaDoblePreferencial();

    Client client = *new Client("jos", "1234");
    Client client2 = *new Client("jonSnow", "1234");
    preferencial->insertClient(client, 6);
    preferencial->insertClient(client2, 8);
    preferencial->showSpots();
    cout << preferencial->getAvailable() << endl;

}
