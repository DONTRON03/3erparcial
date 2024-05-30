#include <iostream>
using namespace std;

int main() {
    int n1, n2, res;
    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo número: ";
    cin >> n2;

    if (n1 == 0) {
        cout << "No es divisible porque es 0";
    } else if (n1 > 0) {
        res = n1 / n2;
        cout << "El resultado de n1 entre n2 es: " << res;
    }

    return 0;
}

