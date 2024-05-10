/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include <iostream>
using namespace std;

int sumatoria();

int main()
{
    cout << "La suma de los numeros pares entre 100 y 200 es: " << sumatoria() <<endl;
    
}

int sumatoria()
{
    int suma = 0, i = 100;
    while (i <= 200)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
        i++;
    }
    return suma;
}