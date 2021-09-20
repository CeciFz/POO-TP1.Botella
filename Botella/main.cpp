#include <iostream>
using namespace std;
#include<clocale>
#include "Botella.h"

int main(){
setlocale(LC_ALL, "Spanish");

    Botella a, b(50);
    int opcion;
    float m;

    cout << endl << "Seleccione la acción deseada: ";
    cout << endl << "--------";
    cout << endl << "Opción 1: Destapar la botella.";
    cout << endl << "Opción 2: Tapar la botella.";
    cout << endl << "Opción 3: Llenar la botella.";
    cout << endl << "Opción 4: Vaciar la botella.";
    cout << endl << "Opción 5: Ver la botella.";
    cout << endl << "Opción 0: salir." << endl;
    cout << endl << "OPCION: ";
    cin >> opcion;

    while (opcion != 0){

        switch (opcion){
        case 1:
            a.destapar();
            break;

        case 2:
            a.tapar();
            break;

        case 3:
            if (a.getTapada() == false){

                if (a.getOcupacion() < a.getCapacidad()){
                    cout << endl << "Ingrese cantidad de mililitros a llenar: ";
                    cin >> m;
                    a.llenar(m);

                } else {
                        cout << endl << "La botella está llena. Debe vaciarla antes de volver a cargarla.";
                }

            } else {
                    cout << endl << "Primero debe destapar la botella.";
                }

            break;

        case 4:
           if (a.getTapada() == false){

                if (a.getOcupacion() > 0 ){
                    cout << endl << "Ingrese cantidad de mililitros a vaciar. Si desea vaciarla completa, indique 0: ";
                    cin >> m;
                    a.vaciar(m);

                } else {
                        cout << endl << "La botella ya está vacía";
                }

            } else {
                    cout << endl << "Primero debe destapar la botella.";
                }

            break;

        case 5:
            a.mostrar();
            break;
        }

cout << endl;
cout << endl << "Seleccione la acción deseada: ";
cout << endl << "--------";
cout << endl << "Opción 1: Destapar la botella.";
cout << endl << "Opción 2: Tapar la botella.";
cout << endl << "Opción 3: Llenar la botella.";
cout << endl << "Opción 4: Vaciar la botella.";
cout << endl << "Opción 5: Ver la botella.";
cout << endl << "Opción 0: salir." << endl;
cout << endl << "OPCION: ";
cin >> opcion;

}


        cout<<endl;
        return 0;
}
