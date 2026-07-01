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
