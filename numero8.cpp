// Actividad 7_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>
int main() {
	int acum=0;
	int t;
	std::cout<< "digite el tamaño del vector (arreglo) " << std::endl;
	std::cin>> t;
	
	int vector[t];
    for (int i =1; i<=t ; ++i) {
    	int num;
        std::cout << "digite un numero : " << std::endl;
        std::cin>> num;
        vector[i] = num;
        acum += vector[i];
    } 
    
	for (int i =1 ; i<=t ; ++i) {
        std::cout << "la suma de:  " << vector[i] << std::endl;
    	}
    	
    std::cout<< "es :" << acum << std::endl;
    	
}
