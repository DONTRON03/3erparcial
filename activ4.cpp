#include <iostream>
using namespace std;

int main (){
	char letra;
	cout << "Ingrese una letra:  ";
	cin >> letra;

	if(letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'|| letra=='u'){
		cout << letra << " Es una vocal";
	}else {
		cout << letra << " No es una vocal";
	}
    return 0;
}
