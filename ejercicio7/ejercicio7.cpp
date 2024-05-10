/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>
#define MAX 10

using namespace std;


// Variables Globales
int i = 0, longitud = 0;
// Vectores
int array1[MAX];
int array2[MAX];
int array3[MAX];

// Prototipos
void datosVectores();
void salidaVectores();
void vectorSuma();

int main()
{
    cout << "Proporciona la longitud de los vectores (maximo 10): ";
    cin >> longitud;

    if (longitud <= MAX && longitud > 0)
    {
        datosVectores();
        salidaVectores();
        vectorSuma();
    }
    else if (longitud <= 0)
    {
        cout << "Longitud invalida... vuelve a intentarlo" << endl
             << endl;
        main();
    }
    else
    {
        cout << "La longitud maxima es 10, vuelve a intentarlo" << endl
             << endl;
        main();
    }
}

void datosVectores()
{
    // Datos Vector 1
    cout << endl
         << "Ingresando datos para el vector 1..." << endl
         << endl;

    while (i < longitud)
    {
        cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
        cin >> array1[i];
        i++;
    }

    // Datos Vector 2
    i = 0;
    cout << endl
         << "Ingresando datos para el vector 2..." << endl
         << endl;
    while (i < longitud)
    {
        cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
        cin >> array2[i];
        i++;
    }
}

void salidaVectores()
{
    // Salida Vector 1
    i = 0;
    cout << endl << endl<< "Has ingresado estos datos..." << endl;
    cout << "Arreglo 1 [\t";
    while (i < longitud)
    {
        cout << array1[i] << "\t";
        i++;
    }
    cout << "]";

    // Salida Vector 2
    i = 0;
    cout <<endl <<  "Arreglo 2 [\t";
    while (i < longitud)
    {
        cout << array2[i] << "\t";
        i++;
    }
    cout << "]";
}

void vectorSuma()
{
    cout << endl << endl << "Sumando...";
    cout << endl
         << "Calculando resultados..." << endl <<endl;
    
    //Sumando Vectores
    i = 0;
    while (i < longitud)
    {
        array3[i] = (array1[i] + array2[i]);
        cout << "Posicion [ " << i + 1 << " ] = " << array3[i] << endl;
        i++;
    }

    //Salida Vector
    i = 0;
    cout <<endl << endl <<  "Arreglo 3 [\t";
    while (i < longitud)
    {
        cout << array3[i] << "\t";
        i++;
    }
    cout << "]" << endl << endl;
}