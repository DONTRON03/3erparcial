/*Actividad_04 22/04/24*/
#include <iostream>
using namespace std;
int main() {
    char nombre[100];
    cout << "Escriba su nombre: ";
    cin.getline(nombre, sizeof(nombre));
    cout << "\n¡Hola, chavo/a " << nombre << "!" << endl;
}

