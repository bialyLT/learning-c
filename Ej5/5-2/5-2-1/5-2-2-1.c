// Un programa que pida al usuario que introduzca una palabra, cambie su primera
// letra por una "A" y muestre la palabra resultante.

#include <stdio.h>

int main() {

    char name[20];

    printf("ingrese su nombre: ");
    scanf("%s", name);

    name[0] = 'A';

    printf("%s", name);

    return 0;
}