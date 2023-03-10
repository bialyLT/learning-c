// Crear un programa que multiplique dos números enteros de la siguiente forma:
// pedirá al usuario un primer número entero. Si el número que se que teclee es 0, escribirá
// en pantalla "El producto de 0 por cualquier número es 0". Si se ha tecleado un número
// distinto de cero, se pedirá al usuario un segundo número y se mostrará el producto de
// ambos.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("ingrese un numero entero: ");
    scanf("%d", &num1);

    if (num1 == 0) printf("cualquier numero multiplicado por 0 es 0");

    printf("ingrese un numero entero: ");
    scanf("%d", &num2);
 


    return 0;
}