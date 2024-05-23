#include <iostream>
int main () {
int n=5,t;
t= ++n*--n;
std::cout << "n= " << n << "t= " << t << std::endl;
std::cout << ++n << ++n << ++n << std::endl;
return 0;
}
