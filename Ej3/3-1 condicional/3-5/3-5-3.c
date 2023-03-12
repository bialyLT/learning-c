// Crear un programa que pida al usuario tres números reales y muestre cuál es el
// mayor de los tres.

#include <stdio.h>

int main() {

        float num1, num2, num3;

    printf("ingrese un numero real: ");
    scanf("%f", &num1);

    printf("ingrese un numero real: ");
    scanf("%f", &num2);

    printf("ingrese un numero real: ");
    scanf("%f", &num3);

    if ((num1 > num2) && (num1 > num3))
        printf("%.2f es mayor que %.2f y %.2f", num1, num2, num3);

    if ((num2 > num1) && (num2 > num3))
        printf("%.2f es mayor que %.2f y %.2f", num2, num1, num3);

    if ((num3 > num1) && (num3 > num2))
        printf("%.2f es mayor que %.2f y %.2f", num3, num1, num2);

    return 0;
}
