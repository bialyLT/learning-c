//  Crear un programa que escriba en pantalla la tabla de multiplicar del 6.

#include <stdio.h>

int main() {

    int i, a;

    for (i = 0; i < 11; i++)
    {
        a = 6 * i;
        printf("6 * %d = %d \n", i, a);
    }

    return 0;
}