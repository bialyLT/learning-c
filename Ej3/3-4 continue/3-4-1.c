// Crear un programa que pida un número al usuario (entre 1 y 20) y muestre los
// números del 1 al 20, excepto el indicado por el usuario, usando "continue" para evitar ese
// valor.

#include <stdio.h>

int main() {

    int i, a;

    printf("ingrese un numero para descartarlo de la lista: ");
    scanf("%d", &a);

    if ((a <= 20) && (a >= 1))
    {
        for (i = 1; i <= 20; i++)
        {
            if (i == a) continue;
            printf("%d \n", i);    
        }
    }
    else
        printf("deberias ingresar un numero entre 1 y 20");  

    
    return 0;
}