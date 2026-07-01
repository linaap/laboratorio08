#include "estadistica.h"
#include <math.h>

double calcularMedia(const double *arreglo, int tamano) 
{
    if (tamano <= 0) return 0;
    
    double suma = 0;
    for (int i = 0; i < tamano; i++) 
	{
        suma += arreglo[i];
    }
    return suma / tamano;
}


double calcularVarianza(const double *arreglo, int tamano) 
{
    if (tamano <= 1) return 0.0;
    
    double media = calcularMedia(arreglo, tamano);
    double sumaDiferenciasCuadrado = 0.0;
    
    for (int i = 0; i < tamano; i++) 
	{
        double diferencia = arreglo[i] - media;
        sumaDiferenciasCuadrado += (diferencia * diferencia);
    }
    return sumaDiferenciasCuadrado / tamano; 
}

double calcularDesviacionEstandar(const double *arreglo, int tamano) 
{
    return sqrt(calcularVarianza(arreglo, tamano));
}

double calcularCurtosis(const double *arreglo, int tamano) {
    if (tamano <= 1) return 0.0;
    
    double media = calcularMedia(arreglo, tamano);
    double varianza = calcularVarianza(arreglo, tamano);
    
    if (varianza == 0.0) return 0.0; // por si acaso, para evitar la divicion por 0
    
    double sumaCuartasPotencias = 0.0;
    for (int i = 0; i < tamano; i++) 
	{
        double diferencia = arreglo[i] - media;
        sumaCuartasPotencias += pow(diferencia, 4);
    }
    
    return (sumaCuartasPotencias / tamano) / (varianza * varianza);
}

double calcularMaximo(const double *arreglo, int tamano) 
{
    if (tamano <= 0) return 0.0;
    
    double maximo = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }
    return maximo;
}

double calcularMinimo(const double *arreglo, int tamano) {
    if (tamano <= 0) return 0.0;
    
    double minimo = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
    return minimo;
}
