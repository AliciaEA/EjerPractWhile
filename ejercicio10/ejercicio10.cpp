/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida*/

#include <iostream>

using namespace std;

// Variables Globales
int f = 0, c = 0;
// Declaramos matrices
int matriz1[3][3];
int matriz2[3][3];

// Prototipos
void datosMatriz();
void salidaMatriz();
void matrizTranspuesta();

int main(int argc, char const *argv[])
{
    datosMatriz();
    salidaMatriz();
    matrizTranspuesta();

    return 0;
}

void datosMatriz()
{
    // Datos Matriz1
    cout << "Matriz 1..." << endl;
    while (f < 3)
    {
        c = 0;
        while (c < 3)
        {
            cout << "Para la fila " << f + 1 << " y la columna " << c + 1 << " El numero es: ";
            cin >> matriz1[f][c];
            c++;
        }
        f++;
        cout << endl;
    }
    cout << endl;
}
void salidaMatriz()
{
    // Salida Matriz1
    f = 0;
    cout << "Matriz 1..." << endl;
    while (f < 3)
    {
        c = 0;
        while (c < 3)
        {
            cout << matriz1[f][c];
            cout << "\t";
            c++;
        }
        f++;
        cout << endl
             << endl;
    }
}
void matrizTranspuesta()
{
    // Salida Matriz Transpuesta
    f = 0, c = 0;
    cout << "Matriz Transpuesta..." << endl;
    while (f < 3)
    {
        c = 0;
        while (c < 3)
        {
            cout << matriz1[c][f];
            cout << "\t";
            c++;
        }
        f++;
        cout << endl
             << endl;
    }
}
