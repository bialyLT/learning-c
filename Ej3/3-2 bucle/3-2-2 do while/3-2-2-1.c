//  Crear un programa que pida números positivos al usuario, y vaya calculando la
// suma de todos ellos (terminará cuando se teclea un número negativo o cero)

#include <stdio.h>

int main() {

    int a, suma;
    suma = 0;

    printf("ingrese un numero: ");
    scanf("%d", &a);


    if (a > 0)
    {
        suma += a;
    }

    while (a > 0)
    {
        printf("ingrese otro numero: ");
        scanf("%d", &a);
        if (a > 0)
            suma += a;
        else
            printf("Error: no se puede sumar un numero negativo o 0");
        printf("la suma de los numeros es: %d", suma);
    }

    return 0;
}

