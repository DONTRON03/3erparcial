// Actividad 8_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int acum = 0;
    int acum2 = 0;
    int t;

    std::cout << "Digite el tamaño del primer vector (arreglo): ";
    std::cin >> t;

    int vector[t];
    for (int i = 1; i <= t; ++i) {
        int num;
        std::cout << "Digite un número: ";
        std::cin >> num;
        vector[i] = num;
        acum += vector[i];
    }

    std::cout << "La suma de los elementos del primer vector es: " << acum << std::endl;

    std::cout << "Digite el tamaño del segundo vector (arreglo): ";
    std::cin >> t;

    int vector2[t];
    for (int i = 1; i <= t; ++i) {
        int num;
        std::cout << "Digite un número: ";
        std::cin >> num;
        vector2[i] = num;
        acum2 += vector2[i];
    }

    std::cout << "La suma de los elementos del segundo vector es: " << acum2 << std::endl;

    int vector3[2];
    vector3[1] = acum + acum2;

    std::cout << "El resultado de la suma es: " << vector3[1] << std::endl;
}

