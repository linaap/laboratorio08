#include "laboratorio8.h"
#include <stdio.h>
#include <string.h>

void stringAInt(){
	Char texto[15];
	int entero = 0;
	
	int longitud = strlen(texto);
	for (int i = 0; i < longitud; i++){
		entero = (entero * 10) + (texto[i] - '0'); //código ASCII
	}
}
