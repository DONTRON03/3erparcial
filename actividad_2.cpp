/*Actividad_04 22/04/24*/
#include <stdio.h>
int main ()
{
	char nombre [100];
	printf("Escriba su nombre\n");
	//scanf("%s",nombre);
	fgets(nombre, sizeof(nombre),stdin);
	printf("\nhola chavo/a %s\n",nombre);

}
