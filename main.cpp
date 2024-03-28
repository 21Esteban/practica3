// Aqui va a ir el menu del programa
#include"funciones.h"


int main()
{

   //cargamos lo que necesita la app para funcionar

    fstream archivo;int longitud = 100;

    char *caracteres = new char[longitud];

    obtenerCaracteres(archivo, "prueba.txt", caracteres,longitud);

    char arregloEnBinario[longitud][9];

    decimalBinario(caracteres, arregloEnBinario,longitud);

    //-------------------------------------------------------------//

    //Programa principal

    int semilla;

    cout<<"Ingrese un numero : ";
    cin>>semilla;

    //ahora vamos a separar en bloques de n bits

    codificacion(arregloEnBinario,longitud,semilla);





    delete[] caracteres;




    return 0;
}
