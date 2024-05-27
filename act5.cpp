#include <stdio.h>
#define PI  3.1416
int main() 
{
	float perimetro, r;
	
	printf("Intruduzca el radio de la circunferencia: ");
	scanf("%f",&r);
	
	perimetro = 2 * PI * r;
	printf("El perimetro de la circunferencia es: %.2f",perimetro);
	
	return 0;
	
}

