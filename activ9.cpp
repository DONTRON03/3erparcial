#include <iostream>
int main () {
int m=99, n;
n= ++m;
std::cout<< "m= " << m << "n= " << n << std::endl;
n= ++m;
std::cout << "m= " << m << "n= " << n << std::endl;
std::cout << "m= " << m++ << std::endl;
std::cout << "m= " << ++m << std::endl;
return 0;
}
