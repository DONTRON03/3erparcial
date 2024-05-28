// Actividad 13_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
	
    int acum = 0;
    int f;
    std::cout << "Digite el número de filas: ";
    std::cin >> f;

    int c;
    std::cout << "Digite el número de columnas: ";
    std::cin >> c;

    int matriz[f][c]; 
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            int numero;
            std::cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            std::cin >> numero;
            matriz[i][j] = numero;
            acum += matriz[i][j];
        }
    }
    
    std::cout << "Los datos que hay en la matriz son:" << std::endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "La suma de todos los elementos de la columna es: " << acum << std::endl;
}

