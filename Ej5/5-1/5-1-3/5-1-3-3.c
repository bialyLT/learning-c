// Crear un programa que pida al usuario 10 números, calcule su media y luego
// muestre los que están por encima de la media.

#include <stdio.h>

int main() {

    int arr[10];
    int suma, i;
    suma = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &arr[i]);
        suma += arr[i];

    }
    suma = suma/10;

    printf("el promedio es: %d \n", suma);
    printf("numeros que estan arriba del promedio: \n", suma);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > suma)
        {
            printf(" \n %d ", arr[i]);
        }

    }

    return 0;
}
