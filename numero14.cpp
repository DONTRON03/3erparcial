// Actividad 12_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int matriz[2][2];

    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[1][0] = 30;
    matriz[1][1] = 40;

    std::cout << "El dato en la fila 1 y columna 1 es: " << matriz[0][0] << std::endl;
    std::cout << "El dato en la fila 1 y columna 2 es: " << matriz[0][1] << std::endl;
    std::cout << "El dato en la fila 2 y columna 1 es: " << matriz[1][0] << std::endl;
    std::cout << "El dato en la fila 2 y columna 2 es: " << matriz[1][1] << std::endl;

}

