//Escribir un programa que pida al usuario un número entero y determine si es par o impar.

#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Ingrese un numero: ";
    cin >> num1;


    if ( num1 % 2 == 0)
        cout << num1 << " Es un numero par ";
    else
        cout << num1 << " Es un numero impar ";
    return 0;
}