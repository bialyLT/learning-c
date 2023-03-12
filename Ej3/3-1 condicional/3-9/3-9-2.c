// Crear un programa que use el operador condicional para dar a una variable
// llamada "iguales" (entera) el valor 1 si los dos números que ha tecleado el usuario son
// iguales, o el valor 0 si son distintos.

#include <stdio.h>

int main(){

    int iguales, num1, num2;

    printf("ingrese un numero: ");
    scanf("%d", &num1);

    printf("ingrese un numero: ");
    scanf("%d", &num2);

    iguales = num1 == num2 ? 1 : 0;
    printf("el valor de iguales es: %d", iguales);

    return 0;
}