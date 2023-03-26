//Escribir un programa que realice lo mismo que el ejercicio anterior, pero usando el bucle while

#include <iostream>
using namespace std;

int main() {
    int num;

    cout<< "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;

    if (num > 10 && num < 30) {
        cout<< "Los numeros impares entre 1 y " << num<< " son:" <<endl;

        int i = 1;
        while (i <= num) {
            cout << i <<endl;
            i += 2;
        }
    } else {
       cout<< "El numero ingresado no cumple con las condiciones" <<endl;
    }

    return 0;
}