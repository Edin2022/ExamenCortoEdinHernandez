//Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.

#include<iostream>
using namespace std;


int main(){
    int edad;


    cout<<"\nIngrese la edad que tinene: "<<endl;
    cin>>edad;


    if(edad>=18){    // si tiene mas de 18 años o igual, es mayor de edad = , es mayor >,  es igual =
        cout<<" es mayor de edad";
    }
    else

    if(edad<18){
        cout<<"usted es menor de edad ";
    }

}