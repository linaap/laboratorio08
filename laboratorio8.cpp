#include "laboratorio8.h"
#include <stdio.h>
#include <string>
#include <math.h> // para la iair cuadrada del ejericicio 1 :]


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
// -------------------------- ejercicio1----------------------
double calcularMedia(double arreglo[], int n) 
{
    if (n <= 0) return 0.0; // Protección para arreglos vacíos
    
    double suma = 0.0;
    for (int i = 0; i < n; i++) 
	{
        suma += arreglo[i];
    }
    return suma / n;
}

double calcularVarianza(double arreglo[], int n) {
    if (n <= 1) return 0.0; // Evitar división por cero (n-1)
    
    double media = calcularMedia(arreglo, n);
    double suma = 0.0;
    
    for (int i = 0; i < n; i++) 
	{
        suma += pow(arreglo[i] - media, 2);
    }
    // se calcula la varianza muestral dividiendo entre n - 1
    return suma / (n - 1);
}

double calcularDesviacionEstandar(double arreglo[], int n) 
{
    return sqrt(calcularVarianza(arreglo, n));
}

double calcularCurtosis(double arreglo[], int n) 
{
    if (n <= 1) return 0.0;
    
    double media = calcularMedia(arreglo, n);
    double desviacion = calcularDesviacionEstandar(arreglo, n);
    
    // Si la desviación estándar es 0, no hay dispersión y la curtosis es indefinida
    if (desviacion == 0.0) return 0.0; 

    double suma = 0.0;
    for (int i = 0; i < n; i++) 
	{
        suma += pow(arreglo[i] - media, 4);
    }
    
    // Momento central 
    double momento = suma / n; 
    
    // Formula de la curtosis
    return momento / pow(desviacion, 4);
}

double encontrarMaximo(double arreglo[], int n) 
{
    if (n <= 0) return 0.0;
    
    double maximo = arreglo[0];
    for (int i = 1; i < n; i++) 
	{
        if (arreglo[i] > maximo) 
		{
            maximo = arreglo[i];
        }
    }
    return maximo;
}

double encontrarMinimo(double arreglo[], int n) {
    if (n <= 0) return 0.0;
    
    double minimo = arreglo[0];
    for (int i = 1; i < n; i++) 
	{
        if (arreglo[i] < minimo) 
		{
            minimo = arreglo[i];
        }
    }
    return minimo;
}
