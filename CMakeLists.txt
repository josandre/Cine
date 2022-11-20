cmake_minimum_required(VERSION 3.23)
project(proyecto1Cine)

set(CMAKE_CXX_STANDARD 14)

add_executable(proyecto1Cine main.cpp Controller/Client.cpp Model/Client.h Controller/ListaDoblePreferencial.cpp Model/ListaDoblePreferencial.h Controller/Nodo.cpp Model/Nodo.h Controller/ColaEspera.cpp Model/ColaEspera.h Controller/PilaPasillo.cpp Model/PilaPasillo.h Controller/Pila.cpp Model/Pila.h Controller/ListaGeneral.cpp Model/ListaGeneral.h Controller/NodoPila.cpp)
