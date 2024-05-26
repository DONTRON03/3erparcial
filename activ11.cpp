#include <iostream>

int main() 
{
    int edad, adultomayor,menor5,eadultjoven,nino8,joven,mayordeedad;

    std::cout << "introduce la edad: " << std::endl;    
    std::cin >> edad;
    
    adultomayor=(edad>50);
    menor5 = (edad<5);
    eadultjoven = (edad >= 20) && (edad <= 29);
    nino8 =(edad > 8);
    joven= (edad>=15) && (edad<=18);
    mayordeedad= (edad>18);
    
    std::cout << "Menor de 5: " << menor5 << std::endl;
    std::cout << "Mayor de 8: " << nino8 << std::endl;
    std::cout << "adulto joven: " << eadultjoven << std::endl;
    std::cout << "joven: " << joven << std::endl;
    std::cout << "mayor de edad: " << mayordeedad << std::endl;
    std::cout << "adulto mayor: " << adultomayor << std::endl;
    
    return 0;
}
