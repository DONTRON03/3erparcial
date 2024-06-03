#include <iostream>
using namespace std;

int main() {
int numero;
cout << "Ingrese un numero entero: ";   
cin >> numero;

    if (numero % 2==0) {
	cout << numero << " es un numero par";
        
        if (numero % 3==0) {
             cout << " " << numero << " tambien es multiplo de 3";
        } else {
            cout << " " << numero << " no es multiplo de 3";
        }
    } 
	else {
        cout << numero << " es un numero impar ";
    }
return 0;
}
