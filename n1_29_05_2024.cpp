// Actividad49_vectores 29/05/24
#include <iostream>
#include <vector>

int main(void){
	
	const int numsmax = 20;
	std::vector <int> numero;
	int num, suma = 0;
	
	std::cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> " << std::endl;
	std::cout << "  Favor de introducir solo numeros enteros " << std::endl;
	std::cout << "( 0 para terminar o agrege hasta 20 numeros ) " << std::endl;
	std::cout << "  " << std::endl;
	
	for (int i = 0; i < numsmax ; ++i) {
		std::cout << "Numero " << i +1 << " : " << std::endl;
		std::cin >> num;
		
		if (num == 0){
			break;
		}
		
		numero.push_back(num);
	}
	std::cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> " << std::endl;
	std::cout << "  los numeros en orden inverso van: " << std::endl;
	
	for(int i = numero.size()-1 ; i >=0; i--) {
		std::cout << numero[i] << std::endl;
		suma += numero[i];
	}
		std::cout << " la suma de todos los numeros da: " << suma << std::endl;
	
	std::cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> " << std::endl;
}
