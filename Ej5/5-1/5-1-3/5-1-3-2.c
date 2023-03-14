//  Crear un programa que pida al usuario 10 números y luego los muestre en orden
// inverso (del último al primero)

#include <stdio.h>

int main() {

    int arr[10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &arr[i]);

    }

    for (i = 9; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}