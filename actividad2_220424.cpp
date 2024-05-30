/*Actividad_02 22/04/24*/
#include <iostream>
using namespace std;

int main() {
    int x, y, res, r;
    cout << "Introduzca un valor para X: ";
    cin >> x;
    cout << "Introduzca un valor para Y: ";
    cin >> y;

    res = x / y;
    r = x % y;

    cout << "La división de " << x << " y " << y << " es: " << res << " y el residuo es: " << r;
}

