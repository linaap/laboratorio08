#include "laboratorio8.h"
#include <stdio.h>
#include <string>

//hola
int stringAInt(std::string texto){
	int entero = 0;
	
	int longitud = texto.length();
	for (int i = 0; i < longitud; i++){
		entero = (entero * 10) + (texto[i] - '0'); //código ASCII
	}
	
	return entero;
}

void revisarSiglas(char texto[]){

	printf("%c,", texto[0]);	//La primera letra es una sigla

	for(int i = 0; texto[i] != '\0'; i++){	//Logica para recorrer
		if(texto[i] == ' '){	//Si encuentro un espacio
			printf("%c", texto[i + 1]);	//la letra siguiente al espacio
		}
	}
	printf("\n");

}

char identificarCharMasRepetido(char texto[]){	//Es char porque (LIN21)
	//ANOTACION: Nos va a tocar revisar caracter por caracter
	int contador;	//Varialble auxiliar para contar
	char caracter;	//Para retornar el carcter dierctamente
	int mayor = 0;	//ANOTACION: Si encuentra un caracter mayor
	
	for(int i = 0; texto[i] != '\0'; i++){	//La misma logica para recorrer
		contador = 0;
		for(int j = 0; texto[j] != '\0'; j++){	//Para contar el caracter
			if(texto[i] == texto[j]){	//compara
				contador++;	//Añade
			}
		}
		//ANOTACION: y si aparece otro caracter repetido?
		if(contador > mayor){	//Que vaya aumentando el mayor
			caracter = texto[i];
			mayor = contador;	//Se delimita
			//como un límite y que el mayor sea el mayor XD
		}
	}
	
	return caracter;	
}

