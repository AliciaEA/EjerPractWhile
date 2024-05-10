/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/
#include <iostream>

using namespace std;

//Prototipo
int sumatoria(int num);

int main(int argc, char const *argv[])
{
    int num;
    //Solicitud de numero
    cout << "Digita hasta que numero quieres que se sume: ";
    cin >> num;

    if (num < 1)
    {
        cout << "Numero invalido, digite cantidades mayores o igual a 1" << endl;
    }
    else
    {
        cout << "La suma es de: " << sumatoria(num);
    }
    return 0;
}

//Sumatoria
int sumatoria(int num)
{
    int i = 0, suma = 0;
    while (i <= num)
    {
        suma += i;
        i++;
    }
    return suma;
}