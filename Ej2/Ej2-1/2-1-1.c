#include <stdio.h>

int main() {

// Multiplicar dos números de 4 cifras que teclee el usuario, usando el modificador "long"
    long int Pnum;
    long int Snum;
    long int op;
    
    printf("ingrese un numero: ");
    scanf("%ld", &Pnum);

    printf("ingrese otro numero: ");
    scanf("%ld", &Snum);

    op = Pnum * Snum;

    printf("el resultado de la operacion es: %ld\n", op);

    int end;
    printf("para finalizar presione un numero y enter...");
    scanf("%d", &end);

    return 0;
}


