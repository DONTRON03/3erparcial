#include <stdio.h>
int main(){
	
	int fecha, cumple;
	printf("Hola mundo, otra vez ");
	printf("Por favor introduzca el año en que nacio");
	scanf("%i",&fecha);
	cumple= 2024 - fecha;
	
	printf("Si usted nacio en %i",fecha);
	printf("Enconces cumples %i ",cumple);

	return 0;
}
