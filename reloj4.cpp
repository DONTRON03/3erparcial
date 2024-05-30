#include <iostream>
using namespace std;

int main() {
    int hora;
    
    cout << "Introduzca la hora: ";
    cin >> hora;

    if (hora > 11) {
        cout << "Son las " << hora << ", Buenos Dias";
    } else if (hora < 12) {
        cout << "Buenas tardes";
    } else if (hora > 19) {
        cout << "Buenas noches";
    }
}

