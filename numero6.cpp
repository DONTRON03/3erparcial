// Actividad 6_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int acum = 0;
    int t;
    std::cout << "Digite el tamaño del vector (arreglo): ";
    std::cin >> t;

    int vector[t];

    for (int i = 1; i <= t; ++i) {
        int num;
        std::cout << "Digite un número: ";
        std::cin >> num;
        vector[i] = num;
        acum += vector[i];
    }

    std::cout << "La suma de los elementos es: " << acum << std::endl;
}

