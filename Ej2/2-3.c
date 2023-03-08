//Descubrir cual es el espacio ocupado por un "int" en el sistema operativo y
//compilador que utilizas.

#include <stdio.h>

int main() {
    
    int x;

    x = sizeof(int);

    printf("%d", x);

    int end;
    printf("para finalizar presione un numero y enter...\n");
    scanf("%d", &end);

    return 0;
}

//con este programa podemos ver que el valor de int es de 4 bytes