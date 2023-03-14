// Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál
// es el mayor de ellos.

#include <stdio.h>

int main() {

    int arr[10];
    int i, j, mayor;

    for (i = 0; i < 10; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > mayor)
            mayor = arr[i];    
    }
    
    printf("el numero mas grande del array es: %d", mayor);
    
    return 0;
}