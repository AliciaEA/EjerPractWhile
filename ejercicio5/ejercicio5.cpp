/* Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente: Cantidad de alumnos aprobados.
Cantidad de alumnos reprobados. Promedio general del grupo*/

#include <iostream>
#define MAX 8
#define NOTAAPROBADA 60

using namespace std;

// Variables Globales
float nota[MAX];
int cant, cantAprobados = 0, cantReprobados = 0;

// Prototipos
void guardarNotas();
float promedio();
int aprobados();
int reprobados();

int main()
{
    // Solicitud Cantidad
    cout << "Cantidad de notas de alumnos a ingresar (maximo 8): " << endl;
    cin >> cant;

    if (cant <= MAX && cant >= 0)
    {
        guardarNotas();

        // Salidas
        cout << "El promedio general del grupo es: " << promedio() << endl;
        cout << "La cantidad de alumnos aprobados es: " << aprobados() << endl;
        cout << "La cantidad de alumnos reprobados es: " << reprobados() << endl;
        cout << "Total de alumnos: " << cant << endl;
    }
    else if (cant <= 0)
    {
        cout << "Cantidad invalida, vuelva a intentar..." << endl;
        main();
    }
    else
    {
        cout << "La cantidad de alumnos no puede ser mayor a " << MAX << endl;
        main();
    }
}

void guardarNotas()
{
    int i = 0;
    while (i < cant)
    {
        cout << "Ingrese la nota del alumno " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
        i++;
    }
}

float promedio()
{
    float suma = 0;
    int i = 0;

    while (i < cant)
    {
        suma += nota[i];
        i++;
    }
    return suma / cant;
}

int aprobados()
{
    int i = 0;
    while (i < cant)
    {
        if (nota[i] >= NOTAAPROBADA)
        {
            cantAprobados++;
        }
        i++;
    }
    return cantAprobados;
}

int reprobados()
{
    int i = 0;
    while (i < cant)
    {
        if (nota[i] <= NOTAAPROBADA)
        {
            cantReprobados++;
        }
        i++;
    }
    return cantReprobados;
}
