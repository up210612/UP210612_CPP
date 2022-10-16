#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    char res;
    char select;
    
    cout << "Bienvenido a Bella Napoli" << endl;
    cout << "¿Desea ordenar una pizza vegetaria? (y/n)" << endl;
    cin >>res;

    if (res == 'y' || res == 'Y'){

        
        cout << "Seleccione el ingrediente que quiere agregar a su pizza (a/b)"<< endl;
        cout << "a) Pimiento" << endl << "b) Tofu"<< endl;
        cin >> select;

        if(select == 'a'){
            cout << "Pizza vegetariana con Pimiento" << endl;
        } else {
            cout << "Pizza vegetariana con Tofu" << endl;
        }
    } else {

        cout << "Seleccione el ingrediente que quiere agregar a su pizza (a/b/c)" << endl;
        cout << "a) Peperoni" << endl << "b) Jamón"<< "c)Salmón" << endl;
        cin >> select;

        if (select == 'a' || select == 'b'){

            if (select == 'a'){

                cout << "Pizza no vegetariana con Peperoni" << endl;
            } else {
                cout << "Pizza no vegetariana con Jamón" << endl;
                }
        } else {
            cout << "Pizza no vegetariana con Salmón" << endl;
        }
    }
}

