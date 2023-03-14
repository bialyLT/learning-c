// Un programa que te pida tu nombre y una cifra numérica, y escriba tu nombre
// tantas veces como indique esa cifra numérica

#include <stdio.h>

int main() {

    int num, i;
    char name[20];

    printf("ingrese su nombre: ");
    scanf("%s", name);

    printf("ingrese un numero: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("%s \n", name);
    }

    return 0;
}
