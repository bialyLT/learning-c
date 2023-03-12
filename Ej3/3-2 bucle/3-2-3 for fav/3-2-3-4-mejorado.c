//  Crear un programa que escriba en pantalla la tabla de multiplicar que ingrese el usuario

#include <stdio.h>

int main() {

    int i, a, tabla;
    
    printf("ingrese un numero para saber su tabla de multiplicar: ");
    scanf("%d", &tabla);


    for (i = 0; i < 11; i++)
    {
        a = tabla * i;
        printf("%d * %d = %d \n", tabla, i, a);
    }

    return 0;
}