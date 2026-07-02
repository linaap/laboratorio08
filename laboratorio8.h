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

#endif
