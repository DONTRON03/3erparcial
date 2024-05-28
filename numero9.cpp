// Actividad 9_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
	int num[10];
	
	for (int i = 1; i<10; ++i){
		
		num[i] = std::rand()%100 + 1;
	}
	
	for (int i = 1; i<10; ++i){
		
		std::cout<< "los numeros aleatorios son: " << num[i] << std::endl;
		
	}
}
