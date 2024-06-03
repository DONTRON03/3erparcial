//Abrevia el std::cout
//Agrega el IVA 
//agrega 

#include <iostream>
    int main() {
        int producto,unidad,subtotal,precio;
        std::cin>> unidad;
        std::cout<< "cantidad de unidades:" <<unidad<<std::endl;
        std::cin>> precio;
        std::cout<< "precio: " << precio << std::endl;
        subtotal = unidad * precio;
        std::cout << subtotal << std::endl;
        
        return 0;
    }
