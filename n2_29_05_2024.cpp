//Actividad5|30_FilasyColumnas 29/05/24
#include <iostream>
int main() {
    const int fila = 4;
    const int columna = 3;
    int tabla[fila][columna];

	std::cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> " << std::endl;
	std::cout << "   " << std::endl;
    std::cout << "Introduce los valores para la tabla:" << std::endl;
    std::cout << "   " << std::endl;
    
    
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            std::cout << "Valor en fila " << i + 1 << ", columna " << j + 1 << ": " << std::endl;
            std::cin >> tabla[i][j];
        }
    }


    int suma_columnas[columna] = {0};
    for (int j = 0; j < columna; ++j) {
        for (int i = 0; i < fila; ++i) {
            suma_columnas[j] += tabla[i][j];
        }
    }


    int mayor_suma = suma_columnas[0];
    for (int j = 1; j < columna; ++j) {
        if (suma_columnas[j] > mayor_suma) {
            mayor_suma = suma_columnas[j];
        }
    }
    
	std::cout << "   " << std::endl;
	std::cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> " << std::endl;
	std::cout << "   " << std::endl;
    std::cout << "La suma mayor de las columnas es: " << mayor_suma << std::endl;
}



