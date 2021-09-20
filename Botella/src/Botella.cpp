#include "Botella.h"
#include<iostream>
using namespace std;
#include<clocale>


Botella::Botella(int capacidad){
    _capacidad = capacidad;
    _ocupacion = 0;
    _tapada = true;
}

float Botella::getCapacidad(){
    return _capacidad;
}

float Botella::getOcupacion(){
    return _ocupacion;
}

bool Botella::getTapada(){
    return _tapada;
}



void Botella::tapar(){
    _tapada = true;
}

void Botella::destapar(){
    _tapada = false;
}




void Botella::llenar(float mililitros){

    if (_ocupacion + mililitros < _capacidad ){
            _ocupacion += mililitros;
            cout << endl << "Se agreraron " << mililitros << " mililitros a la botella.";

    } else {
                cout << endl << "No se puede llenar la botella más allá de su capacidad.";
            }
}

void Botella::vaciar(float mililitros){

    if (_ocupacion - mililitros >= 0){
            if (mililitros == 0){
                vaciar();
            } else {
                    _ocupacion -= mililitros;
                    cout << endl << "Se vaciaron " << mililitros << " mililitros de la botella.";
                    }
    } else {
            cout << endl << "No es posible vaciar la botella. Los mililitros indicados superan los contenidos.";
    }

}


void Botella::vaciar(){

    if (_tapada == false){

            _ocupacion = 0;
            cout << "La botella quedó vacía.";
    } else {

        cout << endl << "Primero debe destapar la botella.";
    }
}



void Botella::mostrar(){
    cout << endl << "Capacidad: " << _capacidad << " mililitros.";
    cout << endl << "Ocupación: " << _ocupacion << " mililitros.";
    if (_ocupacion == _capacidad){

        cout << endl << "La botella está llena.";
    } else {
             cout << endl << "Aún se pueden cargar " << _capacidad - _ocupacion << " mililitros.";
    }

    if (_tapada == true){
        cout << endl << "La botella se encuentra tapada";
    } else {
            cout << endl << "La botella se encuentra destapada";
    }
}

