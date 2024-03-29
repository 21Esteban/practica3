// Aqui va a ir el menu del programa
#include"funciones.h"


int main()
{

    //Programa principal

    int semilla,ejercicio;



    cout<<"Ingrese que ejercicio desea ejecutar (1-2) : ";
    cin>>ejercicio;

    cout<<"Ingrese un la semilla : ";
    cin>>semilla;

    //cargamos lo que necesita la app para funcionar
    fstream archivo;
    int longitud = 100;
    char *caracteres = new char[longitud];
    char arregloEnBinario[longitud][9];


    switch (ejercicio) {
    case 1:
        cout<<"Ejecutando el ejercicio 1";

        obtenerCaracteres(archivo, "prueba.txt", caracteres,longitud);
        decimalBinario(caracteres, arregloEnBinario,longitud);

        codificacion(arregloEnBinario,longitud,semilla,"sudo.txt");
        //funcion para imprimir la matriz original y la codificada;
        break;

    case 2:
        cout<<"Aqui va el ejercicio2";
        break;
    default:
        break;
    }



   delete[] caracteres;









    //-------------------------------------------------------------//












    return 0;
}
