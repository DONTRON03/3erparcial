#include <stdio.h>
int main(){
	int cm1,cm2;
	printf("escriba 2 numeros:");
	scanf("%d",&cm1);
	scanf("%d",&cm2);
	
	if(cm1>cm2){
		printf("%d es mayor",cm1);
	} else if (cm1<cm2){
		printf("%d es mayor",cm2);
	}
	
	if(cm1==cm2){
		printf("Ambos son iguales");
	}
	
	return 0;
}
