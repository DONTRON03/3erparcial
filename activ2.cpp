//Corregir el programa porque no Corre ya que tiene error en
//Que marca en descuento, cot, total
#include <iostream>
    int main() {
        int producto, unidad, subtotal, precio, descuento, iva;
        std::cin>> unidad;
        std::cout<< "cantidad de unidades = " << unidad <<std::endl;
        std::cin>> precio;
        std::cout<< "precio= " << precio << std::endl;
        subtotal = unidad * precio;
        if (subtotal<1000) {
            descuento = subtotal *0;
        }
        if (subtotal>1000) {
            descuento = subtotal *0,1;
            std::cout<< "El descuento es de: " << descuneto << std::endl;
		}		
        if (subtotal>2000){
            descuento = subtotal *0.2;
            std::cot<< "el descuento es de: " << descuento << std::endl;
        }
            if (subtotal>3000){
                descuento = subtotal *0.3;
            }
            iva = subtotal* 0.16;
            total = subtotal - descuento * iva;
            std::cout<< " El total es de: " << total << std::endl;
            
            return 0;
    }  
