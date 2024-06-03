#include <iostream>
using namespace std;

int main(){
	int cm1,cm2;
        cout << "Escriba 2 numeros:";
	cin >> cm1;
	cin >> cm2;
	
	if(cm1>cm2){
		cout << cm1 << " es mayor" << endl;
	} else if (cm1<cm2){
		cout << cm2 << " es mayor" << endl;
	}
	
	if(cm1==cm2){
		cout << "Ambos son iguales" << endl;
	}
	
	return 0;
}
