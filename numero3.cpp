// Actividad 2_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int n;
    std::cout << "Digite el número de posiciones: ";
    std::cin >> n;

    char personas[n][50]; 

    for (int i = 0; i < n; ++i) {
        std::cout << "Digite un nombre para la posición " << i << ": ";
        std::cin >> personas[i];
    }

    std::cout << "Los datos en las posiciones son:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "El dato en la posición " << i << " es " << personas[i] << std::endl;
    }

}

