// En c++ utilizando for Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for

#include <iostream>
using namespace std;


int main() {
    int num;

    cout<< "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;

    if (num > 10 && num < 30) {
        cout<< "Los numeros impares entre 1 y " << num << " son:" << endl;

        for (int i = 1; i <= num; i += 2) {
            cout << i << endl;
        }
    } else {
        cout<< "El numero ingresado no cumple las condiciones" <<endl;
    }

    return 0;
}






