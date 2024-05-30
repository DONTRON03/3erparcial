#include <stdio.h>
#define precio 70
int main(){
	float edad,mayor,menor,descuento,descuento1;
	printf ("El precio original es de $70, ingrese su edad para saber su descuento:");
	scanf("%f",&edad);
	  
	if (edad<5){
		menor=0.6*precio;
		descuento=precio-menor;
		printf("su descuento es del 60, en total es: %f",descuento);
		
	}else if(edad>60){
		mayor=0.55*precio;
		descuento1=precio-mayor;
		printf("Su descuento es del 55, en total es: %f",descuento1);
	} else if	< (edad>4){
		printf("No hay descuento, debe pagar 70 pesos");
	}else if (edad<61){
		printf("Su edad no amerita descuento.  Cantidad a pagar:70 pesos");
	}
}
