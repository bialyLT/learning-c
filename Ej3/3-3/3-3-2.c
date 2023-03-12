// Crear un programa que pida al usuario dos números reales. Si el segundo no es
// cero, mostrará el resultado de dividir entre el primero y el segundo. Por el contrario, si el
// segundo número es cero, escribirá "Error: No se puede dividir entre cero".

#include <stdio.h>

int main() {

    float num1, num2, op;

    printf("ingrese un numero: ");
    scanf("%f", &num1);

    printf("ingrese un numero: ");
    scanf("%f", &num2);

    if (num2 == 0)
        printf("Error: No se puede dividir entre cero");
    else
    {
        op = num1 / num2;
        printf("El resultado de %.3f / %.3f es: %.3f", num1, num2, op);
    }


    return 0;
}