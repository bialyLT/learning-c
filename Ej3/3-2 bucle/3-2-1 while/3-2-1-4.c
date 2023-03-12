// Crear un programa calcule cuantas cifras tiene un número entero positivo (pista:
// se puede hacer dividiendo varias veces entre 10).

#include <stdio.h>

int main(){

    int num, count;
    count = 0;

    printf("ingrese un numero entero positivo:");
    scanf("%d", &num);


    if (num == 0)
    {
        printf("el numero tiene una cifra");
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count += 1;
        }
    }
    printf("el numero tiene: %d cifras", count);

    return 0;
}

