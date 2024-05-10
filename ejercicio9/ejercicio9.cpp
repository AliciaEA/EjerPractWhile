/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante*/

#include <iostream>

using namespace std;

// Variables Globales
int f = 0, c = 0;
// Declaramos matrices
int matriz1[3][3];
int matriz2[3][3];
int matriz3[3][3];

// Prototipos
void datosMatrices();
void salidaMatrices();
void matrizMultiplicada();


int main()
{
    datosMatrices();
    salidaMatrices();
    matrizMultiplicada();
}

void datosMatrices()
{
    // Datos matriz1
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

    // Datos matriz2
    f = 0, c = 0;
    cout << endl
         << "Matriz 2..." << endl;
    while (f < 3)
    {
        c = 0;
        while (c < 3)
        {
            cout << "Para la fila " << f + 1 << " y la columna " << c + 1 << " El numero es: ";
            cin >> matriz2[f][c];
            c++;
        }
        cout << endl;
        f++;
    }
    cout << endl;
}

void salidaMatrices()
{
    // Salida matriz1
    f = 0, c = 0;
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

    // Salida matriz2
    f = 0, c = 0;
    cout << "Matriz 2..." << endl;
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

void matrizMultiplicada()
{
     // Multiplicacion matrices
   f = 0;
    while (f < 3)
    {
        c = 0;
        while (c < 3)
        {
            matriz3[f][c] = matriz1[f][0] * matriz2[0][c] + matriz1[f][1] * matriz2[1][c] + matriz1[f][2] * matriz2[2][c];
            c++;
        }
        f++;
    }

    // Salida Resultado
    cout << endl
         << "Matriz Multiplicacion Resultado..." << endl;

    f = 0;
    while (f <3)
    {
        c = 0;
        while (c < 3)
        {
            cout << matriz3[f][c];
            cout << "\t";
            c++;
        }
        f++;
        cout << endl
             << endl;
    }
    
    

}