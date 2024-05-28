// Actividad 10_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int cont = 0;
    int p;
    std::cout << "Digite el número de posiciones (tamaño): ";
    std::cin >> p;

    int num[p];

    for (int i = 1; i <= p; ++i) {
        int numero;
        std::cout << "Digite el número " << i << ": ";
        std::cin >> numero;

        num[i] = numero;

        if (num[i] > 0) {
            cont = cont + 1;
        }
    }
    std::cout << "Hay " << cont << " números positivos." << std::endl;
}

