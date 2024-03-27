#include"funciones.h"

// funciones

// abrir archivo

void abrirArchivo(fstream &archivo, const char *filename)
{
    archivo.open(filename, fstream::in | fstream::out);
    if (archivo.is_open())
    {
        cout << "Archivo abierto correctamente" << endl;
    }
    else
    {
        cout << "El archivo no pudo ser abierto" << endl;
    }
}



// cerrar archivo
void cerrarArchivo(fstream &archivo)
{

    archivo.close();
    cout << "archivo cerrado correctamente" << endl;
}





// funcion para abrir un archivo obtener lo que tiene

void obtenerCaracteres(fstream &archivo, const char *filename,char *array,int &longitud)
{


    // int longitud;

    // vamos a usar la funcion o metodo read que nos sirve para leer bloque de datos, para segun la documentacion primero tenemos que posicionar el cursor al final del todo para poder ver cuantos caracteres hay y de esa manera poder crear la matriz con n caracteres , una matriz dinamica.

    // abrimos el archivo
    abrirArchivo(archivo, filename);

    // ahora que lo tenemos abierto vamos a mirar cuantos caracteres tiene.

    archivo.seekg(0, archivo.end);  // movemos el cursor al final del archivo
     longitud = archivo.tellg(); // ahora con el cursor al final , este metodo tellg nos da la cantidad de caracteres

    // volvemos a colocar el cursor al principio del archivo

    archivo.seekg(0, archivo.beg);

    // creamos nuestra matriz dinamica

    // char *caracteres = new char[longitud];

    cout << "Leyendo " << longitud << " caracteres" << endl;

    // ahora usamos la funcion o metodo read que recibe el arreglo donde se va a almacenar y la cantidad de caracteres que va a almacenar
    archivo.read(array, longitud);

    cout << "arreglo completado" << endl;

    for (int i = 0; i <= longitud - 1; i++)
    {
        cout << array[i];
    }

    cout << endl;

    cerrarArchivo(archivo);
}






// ya que tenemos una funcion que nos permite obtener los caracteres del archivo de texto, ahora vamos a crear una funcion que nos cambie esos caractres a su equivalente binario.

void decimalBinario(char *arreglo,char arregloAGuardar[][9],int longitud)
{
    cout<<"entre a decimalBinario"<<endl;
    cout<<longitud<<endl;

    // creamos un arreglo con la misma cantidad de elementos que el arreglo de caracteres y transformamos cada caracter a binario

    //char arregloEnBinario[longitud][8];

    // vamos a usar este arreglo para guardar los bits
    char aux[9];

    // ahora con el arreglo creado vamos a tomar cada caracter y lo vamos a transformar a binario y luego lo metemos en la matriz  arregloEnBinario pero en orden inverso (de el final hacia el principio )

    // primero vamos a tomar el caracter y lo transformamos a Ascci

    for (int i = 0; i <= longitud; i++)
    {
        int numero = arreglo[i];
        int controlDelWhile = 7;
        while (controlDelWhile >= 0)
        {
            int residuo = numero % 2;
            aux[controlDelWhile] = residuo + 48; //le sumamos 48 para convertir el residuo en caracter en assci
            controlDelWhile--;
            numero = numero/2;
        }
        //colocamos el caracter nulo al final de la cadena
        aux[8] = '\0';

        //cout<<(arreglo+0);

        //ahora vamos a meter ese caracter en binario en el arreglo creado anteriormente.
        for(int k = 0; k <= 7; k++){
            arregloAGuardar[i][k] = aux[k];

        }

    }

     /*for(int l = 0 ; l<= longitud ; l++){
         cout<<" primer bloque "<<" "<<"\n";
         for(int m = 0 ; m<=7 ; m++){
             cout<<arregloAGuardar[l][m];
         }
     }*/




}
