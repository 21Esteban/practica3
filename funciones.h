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

#endif // FUNCIONES_H

