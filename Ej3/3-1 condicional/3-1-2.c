// Crear un programa que pida al usuario dos números enteros y diga cual es el
// mayor de ellos

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("ingrese un numero entero: ");
    scanf("%d", &num2);

    if (num1 > num2)
         printf("%d es mayor que %d", num1, num2);
    else
        if (num2 > num1)
            printf("%d es mayor que %d", num2, num1);
        else 
            printf("los numeros son iguales");
       
        
        
    return 0;
}