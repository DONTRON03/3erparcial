#include <stdio.h>

int main() 
{
    int edad, adultomayor,menor5,eadultjoven,nino8,joven,mayordeedad;
  
    scanf("%i",&edad);
    adultomayor=(edad>50);
    menor5 = (edad<5);
    eadultjoven = (edad < 20);
    nino8 =(edad > 8);
    joven= (edad>15) && (edad<=18);
    mayordeedad= (edad>18);
    
    printf("Menor de 5: %i\n", menor5);
    printf("Mayor de 8: %i\n", nino8);
    printf("adulto joven: %i\n",eadultjoven);
    printf("joven: %i\n", joven);
    printf("mayor de edad: %i\n", mayordeedad);
    printf("adulto mayor: %i\n", adultomayor);
    
    return 0;
}
