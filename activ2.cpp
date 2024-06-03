#include <iostream>
using namespace std;

    int main() {
        int producto, unidad, subtotal, precio, descuento, iva;
        cout<< "ingresa la cantidad de unidades" << endl;
        cin>> unidad;
        cout<< "cantidad de unidades: " << unidad <<endl;
        cout << "ingresa el precio " << endl;
        cin>> precio;
        cout<< "precio: " << precio << endl;
        subtotal = unidad * precio;


        if (subtotal<1000) {
            descuento = subtotal *0;
        }
        else if (subtotal>1000) {
            descuento = subtotal *0,1;
            cout<< "El descuento es de: " << descuento << endl;
		}
        else if (subtotal>2000){
            descuento = subtotal *0.2;
            cout<< "el descuento es de: " << descuento << endl;
        }
            else if (subtotal>3000){
                descuento = subtotal *0.3;
                cout<< "el descuento es de: " << descuento << endl;
            }

            int total;
            iva = subtotal* 0.16;
            total = subtotal - descuento * iva;
            cout<< "El total es de: " << total << endl;

            return 0;
    }
