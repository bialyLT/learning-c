/* 
    El usuario tecleará dos números (a y b), y el programa mostrar el resultado de la
    operación (a+b)*(a-b) y el resultado de la operación a2 - b2 
*/

#include <stdio.h>

int main() {

    
    int a, b, op;

    printf("Introduce el primer numero: ");
    scanf("%d", &a);
    
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);
    
    op = (a+b) * (a-b);
    
    printf("el resultado de (a+b)*(a-b) es: %d", op);

    op = (a*a) - (b*b);
    printf("el resultado de (a*a) - (b*b) es: %d", op);

    int end;
    printf("para finalizar presione un numero y enter...");
    scanf("%d", &end);

    return 0;
}
