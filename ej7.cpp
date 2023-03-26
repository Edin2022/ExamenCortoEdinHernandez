//Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch

#include <stdio.h>
#include <conio.h>

int main(){

    int num;
    printf("\nIngrese su numero: ");
    scanf("%d", &num);
    switch (num)
    {
        case 1:
            printf("\nEl dia es Lunes");
            break;
        case 2:
            printf("\nEl dia es Martes");
            break;
        case 3:
            printf("\nEl dia es Miercoles");
            break;
        case 4:
            printf("\nEl dia es Jueves");
            break;
        case 5:
            printf("\nEl dia es Viernes");
            break;
        default:
            printf("eror");

    }

    getch();
    return 0;
}