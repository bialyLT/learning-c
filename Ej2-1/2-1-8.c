#include <stdio.h>
#include <stdlib.h>

// transformar un numero ingresado por consola de octal a decimal

int main() {
    char oct[10];
    long int dec;

    printf("Ingrese un numero con base octal: ");
    scanf("%s", &oct);

    dec = strtol(oct, NULL, 8); //para hexadecimal se modificarian los parametros a (oct, NULL, 16) oct es el nombre de la variable

    printf("el numero transformado a decimal es: %ld\n", dec);
    
    int end;
    printf("para finalizar presione un numero y enter...");
    scanf("%d", &end);

    return 0;
}

