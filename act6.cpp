#include <stdio.h>

int main()
{
	int i1,i2,i3;
	float r1,r2,r3;
	
	i1=12;
	i2=5;
	r1=12.0;
	r2=5;
	r3=r1/r2;
	r3=i1/i2;
	i3=i1/r2;
	
	printf("r3.1= %f",r3);
	printf(", r3.2= %f",r3);
	printf(", i3= %d",i3);	
	return 0;
}
