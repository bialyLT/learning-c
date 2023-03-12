// Crear un programa que pida al usuario un número entero y diga si es par (pista:
// habrá que comprobar si el resto que se obtiene al dividir entre dos es cero: if (x % 2 == 0)

#include <stdio.h>

int main()
{
    int num;

    printf("ingrese un numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
         printf("el numero es par");
    else
        printf("el numero no es par");
    return 0;
}
