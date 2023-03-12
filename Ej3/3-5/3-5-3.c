// Crear un programa que pida al usuario tres números reales y muestre cuál es el
// mayor de los tres.

#include <stdio.h>

int main() {

        float num1, num2, num3;

    printf("ingrese un numero real: ");
    scanf("%d", &num1);

    printf("ingrese un numero real: ");
    scanf("%d", &num2);

    printf("ingrese un numero real: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)  )
    {
         printf("%.2f es mayor que %.2f y %.2f", num1, num2, num3);
    }
    else
    {
        if ((num2 > num1) && (num2 > num3)
            printf("%d es mayor que %d", num2, num1);
        else 
            printf("los numeros son iguales");
    }

    return 0;
}