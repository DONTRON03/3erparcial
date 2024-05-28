// Actividad 14_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
	int acum = 0;
	
    int f;
    std::cout << "Digite el numero de filas: ";
    std::cin >> f;

    int c;
    std::cout << "Digite el numero de columnas: ";
    std::cin >> c;
    
    int matriz[f,c];

    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
		
    	int numero;
        std::cout << "Digite dato para la fila " << i << " columna" << j <<std::endl;
        std::cin >> numero;
        
        matriz[i,j] = numero;
    	}
    	
    	acum = acum + matriz[i,j];
    }
    
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
		
        std::cout << matriz[i,j] <<std::endl;

    	}
    }
		std::cout << "todos los elementos de la columna suman un total de: " << acum <<std::endl;
    }

