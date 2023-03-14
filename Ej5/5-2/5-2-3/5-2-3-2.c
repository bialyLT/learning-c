// Un programa que te pida tu nombre y lo muestre en pantalla separando al revés.
// Por ejemplo, si tu nombre es "Juan", debería aparecer en pantalla "nauJ".

#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char name[20];

    printf("ingrese su nombre: ");
    scanf("%s", name);

    for (i = strlen(name); i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;
}
