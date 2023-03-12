// Crear un programa que pida al usuario dos números enteros y diga "Uno de los
// números es positivo", "Los dos números son positivos" o bien "Ninguno de los números
// es positivo", según corresponda.


#include <stdio.h>

int main() {

    int num1, num2;

    printf("ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("ingrese un numero entero: ");
    scanf("%d", &num2);

    if ((num1 > 0) && (num2 > 0))
    {
        printf("%d y %d son positivos", num1, num2);
    }
    else
    {
        if ((num1 > 0) || (num2 > 0))
        {
            printf("uno de los dos numeros es positivo");
        }
        else
        {
            printf("ninguno de los dos es positivo");
        }
    }

    return 0;
}
