#include <iostream>
#include "Model/ListaDoblePreferencial.h"
#include "Model/ColaEspera.h"
#include "Model/PilaPasillo.h"
#include "Model/ListaGeneral.h"


Client CreateClient(){
    string name;
    string id;
    cout << "What is your name" << endl;
    cin >> name;
    cout << "What is your Id" << endl;
    cin >> id;

    if(id.empty() || name.empty()){
        cout << "You can reserve without personal information" << endl;
        Client clientE = *new Client();
        return clientE;
    }

    Client client = Client(name, id);
    return client;
}

void addClientToLine(ColaEspera *cola, Client client){
    cout << "There are not spots available, would you like to wait in line? (Yes/No)" << endl;
    cout << "This is the line" << endl;
    cola->showLine();
    string answerLine;
    cin >> answerLine;
    if (!answerLine.empty() && (answerLine == "Yes" || answerLine == "yes" || answerLine == "YES") ){
        cola->insertClient(client);
    } else {
        cout << "User was not added to the line" << endl;
    }
}

void General(ListaGeneral *general, ColaEspera *colaGeneral){
    Client client = CreateClient();
    bool result = general->addClient(client);

    if(result){
        cout << "The reservation was successful" << endl;
    }else{
        addClientToLine(colaGeneral, client);
    }
}

void Hall(PilaPasillo pila, ColaEspera *colaPasillo){
    Client client = CreateClient();
    bool result = pila.push(client);

    if(result){
        cout << "The reservation was successful" << endl;
    } else{
        addClientToLine(colaPasillo, client);
    }
}

void Preferencial(ListaDoblePreferencial preferencial, ColaEspera *colaPreferencial){
    Client client = CreateClient();

    bool spots = preferencial.showSpotsAvailable();
    if(spots){
        cout << "These are the available spots" << endl;
        cout << "Please select one from the above list" << endl;
        int position;
        cin >> position;
        bool result = preferencial.insertClient(client, position);
        if(result){
            cout << "The reservation was successful" << endl;
        }else{
            cout << "The reservation failed, the spot is not available" << endl;
        }

    }else {
        addClientToLine(colaPreferencial, client);
    }
}



void Reserve(ListaDoblePreferencial preferencial, ColaEspera *colaPreferencial, PilaPasillo hall, ColaEspera *colaPasillo, ListaGeneral *general, ColaEspera *colaGeneral){

    cout << "Which place would you like to reserve" << endl;
    cout << "1. Preferential   10.000 colones" << endl;
    cout << "2. Hall  7.000 colones" << endl;
    cout << "3. General 4.000 colones " << endl;
    cout << "4. Exit " << endl;
    int answer;
    cin >> answer;

    switch (answer) {
        case 1:{
                Preferencial(preferencial, colaPreferencial);
            break;
        }

        case 2:{
            Hall(hall, colaPasillo);
            break;
        }

        case 3:{
            General(general, colaGeneral);
            break;
        }

        case 4:{
            return;
        }
    }

}






int main() {

    ColaEspera *colaPreferencial = new ColaEspera();
    ColaEspera *colaPasillo = new ColaEspera();
    ListaDoblePreferencial preferencial = ListaDoblePreferencial();
    PilaPasillo hall = PilaPasillo();
    ListaGeneral* general = new ListaGeneral();
    ColaEspera *colaGeneral = new ColaEspera();
    cout << "****Welcome to movies Sullivan****" << endl;

    Client pClient = Client("Joss", "13");
    Client pClient2 = Client("vader", "14");
    Client pClient3 = Client("leia", "17");
    Client pClient4 = Client("anthony", "18");
    Client pClient5 = Client("isa", "19");
    Client pClient6 = Client("cami", "20");
    Client pClient7 = Client("vayo", "21");
    Client pClient8 = Client("severus", "22");
    Client pClient9 = Client("it", "23");
    Client pClient0= Client("lady", "24");


    /*
    preferencial.insertClient(pClient, 1);
    preferencial.insertClient(pClient2, 2);
    preferencial.insertClient(pClient3, 3);
    preferencial.insertClient(pClient4, 4);
    preferencial.insertClient(pClient5, 5);
    preferencial.insertClient(pClient6, 6);
    preferencial.insertClient(pClient7, 7);
    preferencial.insertClient(pClient8, 8);
    preferencial.insertClient(pClient9, 9);
    preferencial.insertClient(pClient0, 0);
     */

    /*
    hall.push(pClient);
    hall.push(pClient2);
    hall.push(pClient3);
    hall.push(pClient4);
    hall.push(pClient5);
    hall.push(pClient6);
    hall.push(pClient7);
    hall.push(pClient8);
    hall.push(pClient9);
    hall.push(pClient0);
    hall.push(pClient2);
    hall.push(pClient3);
    hall.push(pClient4);
    hall.push(pClient5);
    hall.push(pClient6);
    hall.push(pClient7);
    hall.push(pClient8);
    hall.push(pClient9);
    hall.push(pClient0);
     */

    general->addClient(pClient);
    general->addClient(pClient2);
    general->addClient(pClient3);
    general->addClient(pClient4);
    general->addClient(pClient5);
    general->addClient(pClient6);
    general->addClient(pClient7);
    general->addClient(pClient8);
    general->addClient(pClient9);
    general->addClient(pClient0);
    general->addClient(pClient2);
    general->addClient(pClient3);
    general->addClient(pClient4);
    general->addClient(pClient5);
    general->addClient(pClient6);
    general->addClient(pClient7);
    general->addClient(pClient8);
    general->addClient(pClient9);
    general->addClient(pClient0);
    
    bool exit = false;

    while (!exit){
       cout << "1. Reserve" << endl;
       cout << "2. Pay the reserve" << endl;
       cout << "3. Exit" << endl;
       int answer;
       cin >> answer;

        switch (answer) {
            case 1:{
                Reserve(preferencial, colaPreferencial, hall, colaPasillo, general, colaGeneral);
                break;
            }

            case 2:{

            }
            case 3:
                exit = true;
                break;
            default:
                continue;
        }
    }


}
