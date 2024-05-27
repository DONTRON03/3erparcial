#include <iostream>

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
	
	std::cout<< "r3.1= " << r3 << std::endl;
	std::cout<< ", r3.2= " << r3 << std::endl;
	std::cout<< ", i3= " << i3 << std::endl;	
	return 0;
}
