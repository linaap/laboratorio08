#ifndef LABORATORIO8_H

#define LABORATORIO8_H
#include <string>

int stringAInt(std::string texto);
void revisarSiglas(char texto[]);
char identificarCharMasRepetido(char texto[]);

//funciones ejericicio1
double calcularMedia(double arreglo[], int n);
double calcularVarianza(double arreglo[], int n);
double calcularDesviacion_estandar(double arreglo[], int n);
double calcularCurtosis(double arreglo[], int n);
double encontrarMaximo(double arreglo[], int n);
double encontrarMinimo(double arreglo[], int n);


//funciones ejercicio 2
const int MAX = 10;

void leerMatriz(int matriz[MAX][MAX], int filas, int columnas);
int buscarMaximo(int matriz[MAX][MAX], int filas, int columnas);
int buscarMinimo(int matriz[MAX][MAX], int filas, int columnas);
int calcularTraza(int matriz[MAX][MAX], int filas, int columnas);
void obtenerTranspuesta(int origen[MAX][MAX], int destino[MAX][MAX], int filas, int columnas);
bool esSimetrica(int matriz[MAX][MAX], int filas, int columnas);

#endif
