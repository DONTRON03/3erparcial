// Actividad 15_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
	int matriz[3][3];
	
	for (int i = 1; i<3; ++i){
		for (int j = 1; j< 3; j++) {
		matriz[i][j] = std::rand()%10; 
		}
	}
	
	for (int i = 1; i< 3; ++i){
		
		std::cout<< matriz[i][1] << " " << matriz[i][2] << " " << matriz[i][3] <<std::endl;
		
	}
}
