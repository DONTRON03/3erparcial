#include <stdio.h>
int main() {
	
	float interes,capital,total;
	
	printf("Introduzca la cantidad de su capital: ");
	scanf ("%f",&capital);
	printf("Introduzca el interes: ");
	scanf("%f",&interes);
	
	total = (interes/100) + capital;
	
		printf("Su capital es de: %f",capital);
		printf(" El interes es de: %f",interes);
		printf(" La suma del interes y su capital es de: %.2f",total);
		
	return 0;
}

