#include <iostream>
#include "Model/ListaDoblePreferencial.h"
#include "Model/ColaEsperaPreferencial.h"



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


void Reserve(ListaDoblePreferencial preferencial, ColaEsperaPreferencial colaPreferencial){

    cout << "Which place would you like to reserve" << endl;
    cout << "1. Preferential   10.000 colones" << endl;
    cout << "2. Hall  7.000 colones" << endl;
    cout << "3. General 4.000 colones " << endl;
    cout << "4. Exit " << endl;
    int answer;
    cin >> answer;

    switch (answer) {
        case 1:{
            Client client = CreateClient();
            cout << "These are the available spots" << endl;
            bool spots = preferencial.showSpotsAvailable();
            if(spots){

                cout << "Please select one from the above list" << endl;
                int position;
                cin >> position;
                bool result = preferencial.insertClient(client, position);
                if(result){
                    cout << "The reservation was successful" << endl;
                }else{
                    cout << "The reservation failed, the spot is not available" << endl;
                }

            }else{
                cout << "There are not spots available, would you like to wait in line? (Yes/No)" << endl;
                string answer;
                cin >> answer;
                if(answer.empty() || answer != "Yes" || answer != "yes" || answer != "YES"){
                    cout << "User was not added to the line" << endl;
                }else{
                    colaPreferencial.insertClient(client);
                }
            }
            break;

        }

        case 2:{

        }

    }

}





int main() {

    ColaEsperaPreferencial colaPreferencial = ColaEsperaPreferencial();
    ListaDoblePreferencial preferencial = ListaDoblePreferencial();
    cout << "****welcome to movies sullivan****" << endl;
    bool exit = false;
    while (!exit){
       cout << "1. Reserve" << endl;
       cout << "2. pay the reserve" << endl;
       cout << "3. Exit" << endl;
       int answer;
       cin >> answer;

        switch (answer) {
            case 1:{
                Reserve(preferencial, colaPreferencial);
                break;
            }

            case 2:{

            }
        }

    }


    ListaDoblePreferencial *lista =  new ListaDoblePreferencial();

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

    lista->insertClient(pClient, 1);
    lista->insertClient(pClient2, 2);
    lista->insertClient(pClient3, 3);
    lista->insertClient(pClient4, 4);
    lista->insertClient(pClient5, 5);
    lista->insertClient(pClient6, 6);
    lista->insertClient(pClient7, 7);
    lista->insertClient(pClient8, 8);
    lista->insertClient(pClient9, 9);
    lista->insertClient(pClient0, 0);
    lista->showSpotsAvailable();




}
