//Escribir un programa que pida al usuario dos números y determine cuál es el mayor de los dos

#include <iostream>
using namespace std;


int main(){
    int num1;
    int num2;

    cout<<"\nIngrese el Primer numero :";
    cin>>num1;

    cout<<"\nIngrese el Segundo numero :";
    cin>>num2;

    if(num1==num2)

        cout<<"\n Iguales";

    else

    {
        if(num1>num2)

            cout<<"\nEl numero mayor es: "<<num1;

        else

            cout<<"\nEl numero mayor es: "<<num2;

    }
        return 0;
}