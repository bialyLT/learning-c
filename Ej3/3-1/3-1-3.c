//  Crear un programa que pida al usuario dos números enteros y diga si el primero
// es múltiplo del segundo (pista: igual que antes, habrá que ver si el resto de la división es
// cero: a % b == 0).

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("ingrese un numero entero: ");
    scanf("%d", &num2);
 
    if (num1 % num2 == 0)
        printf("%d es multipo de %d", num1, num2);
    else    
        printf("%d no es multiplo de %d", num1, num2);      
        
    return 0;
}