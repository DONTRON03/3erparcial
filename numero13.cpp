// Actividad 13_ 27 de mayo del 2024 _ 3er parcial
//Modificacion con matrices
#include <iostream>

int main() {
	
    int sumf = 0;
    int sumf2 = =;
    int f;
    std::cout << "Digite el número de filas: ";
    std::cin >> f;
    int c;
    std::cout << "Digite el número de columnas: ";
    std::cin >> c;
    int A[f][c],B[f][c],C[f][c];

    //INGRESO DE DATOS Y SUMA DE ELEMENTOS
    std::cout<<"Matriz A:  \n";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            int numero;
            std::cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            std::cin >> A[i][j];
            acum += A[i][j];
        }
    }
	std::cout << "La suma de todos los elementos de la columna es: " << sumf << std::endl;
	std::cout<< "\n ";

    std::cout<<"Matriz B:  \n";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            int numero;
            std::cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            std::cin >> B[i][j];
            acum += B[i][j];
        }
    }
	std::cout << "La suma de todos los elementos de la columna es: " << sumf << std::endl;
	std::cout<< "\n ";

    //DATOS DE LAS MATRICES
    std::cout << "Los datos que hay en la matriz  A son:" << std::endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

	    std::cout << "Los datos que hay en la matriz B son:" << std::endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


