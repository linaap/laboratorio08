#include <iostream>
#include "laboratorio8.h"

using namespace std;

int main(){
	
	
	cout << "Ejercicio 3" << endl;
	
	cout << "String a int" << endl;
	string texto;
	cout << "Ingrese un texto para transformar a entero: ";
	cin >> texto;
	cout << "El texto transformado a entero es: " << stringAInt(texto) << endl;
	
	return 0;
}
