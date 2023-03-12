// Crear un programa que use el operador condicional para mostrar un el valor
// absoluto de un número de la siguiente forma: si el número es positivo, se mostrará tal
// cual; si es negativo, se mostrará cambiado de signo.

#include <stdio.h>

int main(){

    int a;

    printf("ingrese un numero: ");
    scanf("%d", &a);

    printf("el valor absoluto de %d es: %d", a, a>0 ? a : a * -1);

    return 0;
}