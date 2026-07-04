#include <stdio.h>
#include <iostream>
#include "laboratorio8.h"

using namespace std;

int main(){
	
	
	cout << "Ejercicio 3" << endl;
	
	//problema1();
	//problema2();
	//problema3();
	
	return 0;
}

void problema1(){

	char texto[100];

	printf("Ingrese su frase: ");
	scanf(" %[^\n]", texto);	//Con el [^\n] leemos toda la linea
	printf("\n");

	printf("Las siglas de la frase son: \n");
	revisarSiglas(texto);

}

void problema2(){

	cout << "String a int" << endl;
	string texto;
	cout << "Ingrese un texto para transformar a entero: ";
	cin >> texto;
	cout << "El texto transformado a entero es: " << stringAInt(texto) << endl;
}

void problema3(){
	
	char texto[100];

	printf("Ingrese una frase: ");
	scanf(" %[^\n]", texto);

	printf("\n");

	char repetido= identificarCharMasRepetido(texto);

	printf("El caracter más repetido es la: %c\n", repetido);
	
}

