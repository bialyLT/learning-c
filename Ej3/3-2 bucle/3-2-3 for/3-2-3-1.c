// Crear un programa que muestre los números del 15 al 5, descendiendo (pista: en
// cada pasada habrá que descontar 1, por ejemplo haciendo i--).

#include <stdio.h>

int main() {

    int i;

    for (i = 15; i > 4; i--)
    {
        printf("%d \n", i);
    }
    
    return 0;
}