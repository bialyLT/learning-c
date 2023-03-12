// Crear un programa que muestre las letras de la Z (mayúscula) a la A (mayúscula,
// descendiendo).

#include <stdio.h>

int main() {

    char i;

    for (i = 'Z'; i >= 'A'; i--)
    {
        printf("%c \n", i);
    }

    return 0;
}