#include <stdio.h>
#include "laboratoio8.h"

void problema1();
void problema3();

int main(){
	/*ANOTACION: En vez de pedir la cadena en los 2, no sería mejor
	hacerlo aquí?*/
	
	//problema1();
	problema3();

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

void problema3(){
	
	char texto[100];

	printf("Ingrese una frase: ");
	scanf(" %[^\n]", texto);

	printf("\n");

	char repetido= identificarCharMasRepetido(texto);

	printf("El caracter más repetido es la: %c\n", repetido);
	
}

