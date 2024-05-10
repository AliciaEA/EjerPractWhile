/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;

void impares();

int main()
{
    cout << "Imprimiendo los numeros impares en orden descendente que hay entre 1 y 100..." << endl;
    impares();
}

void impares()
{
    int i=100;
    while (i >= 1)
    {
        if (i % 2 != 0)
        {
            cout << i << "\t";
        }
        i--;
    }
    
}