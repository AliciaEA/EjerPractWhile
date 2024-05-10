/*Escriba el programa para calcular la suma de
los cuadrados de los números entre 1 y 100.*/

#include <iostream>
#include <cmath>
using namespace std;

int sumatoria ();

int main()
{

    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << sumatoria() << endl;
}

int sumatoria ()
{
    int sumatoria = 0, i = 0;

    while (i <= 100)
    {
        sumatoria += pow( i , 2);
        i++;
    }
    return sumatoria;
}