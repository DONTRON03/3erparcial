#include <stdio.h>

int main() {
int numero;
printf("Ingrese un numero entero: ");   
scanf("%d",&numero);

    if (numero % 2==0) {
	printf("%d es un numero par",numero);
        
        if (numero % 3==0) {
            printf(" %d tambien es multiplo de 3",numero);
        } else {
            printf(" %d no es multiplo de 3",numero);
        }
    } 
	else {
        printf("%d es un numero impar ",numero);
    }
return 0;
}
