// Aqui va a ir el menu del programa
#include"funciones.h"


int main()
{

    // primero creamos el objeto para poder modificarlo con nuestras funciones pasando este objeto por referencia a las funciones

    fstream archivo;int longitud = 100;

    //creamos un arreglo dinamico donde vamos a guardar los caracteres

    char *caracteres = new char[longitud];

    // obtenemos todos los caracteres del archivo

    obtenerCaracteres(archivo, "prueba.txt", caracteres,longitud);

    //transformamos los caracteres a binario.

    // Creamos un arreglo dinámico para guardar los caracteres a binario
    /*char **arregloEnBinario = new char*[longitud];
    for (int i = 0; i < 100; ++i) {
        arregloEnBinario[i] = new char[8];
    }*/
    cout<<longitud<<endl;
    char arregloEnBinario[longitud][9];



    decimalBinario(caracteres, arregloEnBinario,longitud);


    for (int i = 0; i<=longitud-1 ; i++) {
        cout << "Caracter "<<caracteres[i]  << " en binario: ";
        for (int j = 0; j < 8; j++) {
            cout << arregloEnBinario[i][j];
        }
        cout << endl;
    }

    //liberamos memoria

    delete[] caracteres;
    /*for (int i = 0; i < longitud; ++i) {
        delete[] arregloEnBinario[i];
    }
    delete[] arregloEnBinario;*/




    return 0;
}
