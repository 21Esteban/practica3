#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <fstream>

using namespace std;

// prototipos
void abrirArchivo(fstream &archivo, const char *filename);
void cerrarArchivo(fstream &archivo);
void obtenerCaracteres(fstream &archivo, const char *filename,char *array,int &longitud);
void decimalBinario(char *arreglo, char arregloAGuardar[][9],int longitud);
int determinarBitsAInvertir(char bloque[], int semilla);
void codificacion(char arregloEnBinario[][9] ,int longitud,int semilla,const char *filename);
void aplicarInversion(char bloque[], int semilla, int inversion);
void convertirAMatrizUnidimensional(char arregloEnBinario[][9], int longitud, char matrizAuxiliar[], int& longitudDeMatrizAuxiliar);
int reglaDeCodificacion(int contadorAnteriorUnos,int contadorAnteriorCeros,int i);


#endif // FUNCIONES_H

