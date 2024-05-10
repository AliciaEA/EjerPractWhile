/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
using namespace std;
#define MAX 10

// Variables
float nota[MAX];
float suma = 0;

//Prototipos
void agregarNota();
void sumatoria();
float promedio(float suma);

int main()
{
    agregarNota();
    sumatoria();
        cout << "El promedio general de la seccion es: " << promedio(suma) << endl;
    return 0;
}

void agregarNota()
{
    int i = 0;
    cout << "Proporcione las notas de los 10 estudiantes: " << endl;
    while (i < MAX)
    {
        cout << "Proporcione la nota del estudiante " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
        i++;
    }
}

void sumatoria()
{
    int i = 0;
    while ( i < MAX)
    {
        suma += nota[i];
        i++;
    }
}

float promedio(float suma)
{
    return suma / MAX;
}

