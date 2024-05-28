// Actividad 4_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int n;
    std::cout << "Digite el número de posiciones: ";
    std::cin >> n;

    int num[n];

    for (int i = 1; i <= n; ++i) {
        int numero;
        std::cout << "Digite un número para la posición " << i << ": ";
        std::cin >> numero;
        num[i] = numero;
    }

    std::cout << "Los datos en las posiciones son:" << std::endl;
    for (int i = 1; i <= n; ++i) {
        std::cout << "El dato en la posición " << i << " es " << num[i] << std::endl;
    }

}

