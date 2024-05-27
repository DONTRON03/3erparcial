#include <iostream>
int main() {
	
	float interes,capital,total;
	
	std::cout<< "Introduzca la cantidad de su capital: " << std::endl;
	std::cin>> capital;
	std::cout<< "Introduzca el interes: "<< std::endl;
	std::cin>> interes;
	
	total = (interes/100) + capital;
	
		std::cout<< "Su capital es de: " << capital << std::endl;
		std::cout<< " El interes es de: " <<< interes << std::endl;
		std::cout<< " La suma del interes y su capital es de: " << total << std::endl;
		
	return 0;
}

