/*Actividad_04 22/04/24*/
#include <iostream>
int main ()
{
	char nombre [100];
	std::cout<< "Escriba su nombre  " << std::endl;
	//std::cout>> nombre);
	std::cin.getline(nombre, sizeof(nombre));
	std::cout<< "hola chavo/a " << nombre << std::endl;

}
