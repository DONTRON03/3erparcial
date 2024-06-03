#include <iostream>
#define precio 70
using namespace std;

int main(){
	float edad,mayor,menor,descuento,descuento1;
	cout << "El precio original es de $70, ingrese su edad para saber su descuento:";
        cin >> edad;
	  
	if (edad<5){
		menor=0.6*precio;
		descuento=precio-menor;
		 cout << "Su descuento es del 60%, en total es: " << descuento << endl;
		
	}else if(edad>60){
		mayor=0.55*precio;
		descuento1=precio-mayor;
		cout << "Su descuento es del 55%, en total es: " << descuento1 << endl;
	} else if	< (edad>4){
		std::cout << "No hay descuento, debe pagar 70 pesos" << std::endl;
	}else if (edad<61){
		cout << "Su edad no amerita descuento.  Cantidad a pagar: 70 pesos" << endl;
	}
}
