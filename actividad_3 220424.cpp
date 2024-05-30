/* Actividad_03 22/04/24*/
#include <iostream>
using namespace std;
int main() {
    float fahrenheit, celsius;
    cout << "Introduzca temperatura en Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " en Celsius es: " << celsius;
}

