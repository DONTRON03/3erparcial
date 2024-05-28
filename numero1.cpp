// Actividad 1_ 27 de mayo del 2024 _ 3er parcial

#include <iostream>
int main() {
    int num[5];
    int numero;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Digite un número para la posición " << i << ": ";
        std::cin >> numero;
        num[i] = numero;
    }

    std::cout << "Los datos en las posiciones son:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "El dato en la posición " << i << " es " << num[i] << std::endl;
    }

}

