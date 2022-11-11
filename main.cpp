#include <iostream>
#include "Model/ListaDoblePreferencial.h"
#include "Model/ColaEsperaPreferencial.h"

int main() {

    ListaDoblePreferencial *preferencial = new ListaDoblePreferencial();

    Client client = *new Client("jos", "1234");
    Client client2 = *new Client("jonSnow", "1234");
    preferencial->insertClient(client, 6);
    preferencial->insertClient(client2, 8);
    cout << preferencial->getAvailable() << endl;
    preferencial->showSpotsAvailable();

    /*ColaEsperaPreferencial  *espera = new ColaEsperaPreferencial();
    Client client = *new Client("jos", "1234");
    Client client2 = *new Client("jonSnow", "1234");
    espera->insertClient(client);
    espera->insertClient(client2);
    espera->atender();
    espera->showLine();*/

}
