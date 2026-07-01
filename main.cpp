#include <stdio.h>
#include "laboratoio8.h"

void ejercicio1();

int main(){

	ejercicio1();

	return 0;
}

void ejercicio1(){

	char texto[100];

	printf("Ingrese una frase: ");
	scanf(" %[^\n]", texto);	//Con el [^\n] leemos toda la linea
	printf("\n");

	printf("Las siglas de la frase son: \n");
	revisarSiglas(texto);

}

