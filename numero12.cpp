// Actividad 11_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int n;
    std::cout << "Digite el numero de paises: ";
    std::cin >> n;

    char paises[n][50];

    for (int i = 0; i < n; ++i) {
        std::cout << "Digite el pais " << i + 1 << ": ";
        std::cin >> paises[i];
    }

    int pos;
    std::cout << "Digite la posicion: ";
    std::cin >> pos;
    std::cout << "El país en la posicion " << pos << " es: " << paises[pos] << std::endl;
    }

