// Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.

#include <iostream>
using namespace std;

int main(){
    int i;
    int num1;
    float factorial;

    cout<<"Ingrese un numero";
    cin>>num1;

    i = 1;

    factorial = 1;

    while (i <= num1)
    {

        factorial = factorial * i;
        i++;
    }
    cout<<"El factorial es " <<num1<<" es:" <<factorial;

    return 0;
}