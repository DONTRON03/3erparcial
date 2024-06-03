#include <iostream>
using namespace std;

    int main() {
        int producto,unidad,subtotal,precio;
        float IVA;
        cout<< "ingresa la cantidad de unidades" << endl;
        cin>> unidad;
        cout<< "cantidad de unidades:" <<unidad<<endl;
        cout << "ingresa el precio " << endl;
        cin>> precio;
        cout<< "precio: " << precio << endl;

        subtotal = unidad * precio;
        cout << "Subtotal: "<< subtotal << endl;

        IVA = subtotal * 0.16;
        cout<<"IVA: "<< IVA << endl;

        return 0;
    }
