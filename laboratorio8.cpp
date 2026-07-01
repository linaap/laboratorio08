#include <stdio.h>
#include "laboratoio8.h"

void revisarSiglas(char texto[]){

	printf("%c,", texto[0]);	//La primera letra es una sigla

	for(int i = 0; texto[i] != '\0'; i++){
		if(texto[i] == ' '){	//Si encuentro un espacio
			printf("%c", texto[i + 1]);	//la letra siguiente al espacio
		}
	}
	printf("\n");

}
