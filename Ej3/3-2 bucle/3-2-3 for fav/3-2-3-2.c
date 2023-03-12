// Crear un programa que muestre los primeros ocho números pares (pista: en
// cada pasada habrá que aumentar de 2 en 2, o bien mostrar el doble del valor que hace de
// contador).

#include <stdio.h>

int main() {

    int i;

    for (i = 0; i < 16; i += 2)
    {
        printf("%d \n", i);
    }


    return 0;
}