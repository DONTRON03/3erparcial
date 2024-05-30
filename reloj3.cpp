#include <stdio.h>
int main()
{
	int hora,d,n,t;
	printf("Introduzca la hora");
	scanf("%d",&hora);

	if (hora>12) {
		printf("Buenas Tardes");

			if(hora<12){
				printf("Buenos dias");

				if(hora>19){
					printf("Buenas noches");
				}
			}
	}

}