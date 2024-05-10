/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>
#define MAX 10

using namespace std;

// Variables
int longitud, i = 0, producto = 0;
;
// Vectores
int array1[MAX];
int array2[MAX];

// Prototipos
void datosVectores();
void salidaVectores();
int productoVectores();

int main()
{
    // Solicitud Longitud
    cout << "Ingrese la longitud de los vectores (maximo 10): ";
    cin >> longitud;

    if (longitud <= MAX && longitud > 0)
    {
        datosVectores();
        salidaVectores();

        cout << endl
             << endl
             << "Multiplicando...";
        cout << endl
             << "Calculando resultados..." << endl
             << endl;

        cout << endl
             << "El producto punto de los dos vectores es: " << productoVectores() << endl
             << endl;
    }

    // Condiciones
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
    cout << endl
         << endl
         << "Has ingresado estos datos..." << endl;
    cout << "Arreglo 1 [\t";
    while (i < longitud)
    {
        cout << array1[i] << "\t";
        i++;
    }
    cout << "]";

    // Salida Vector 2
    i = 0;
    cout << endl
         << "Arreglo 2 [\t";
    while (i < longitud)
    {
        cout << array2[i] << "\t";
        i++;
    }
    cout << "]";
}

int productoVectores()
{
    i = 0;
    while (i < longitud)
    {
        producto += (array1[i] + array2[i]);
        i++;
    }
    return producto;
}