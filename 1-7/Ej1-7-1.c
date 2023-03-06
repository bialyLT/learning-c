#include <stdio.h>

int main() {

// Multiplicar dos números tecleados por usuario

    int Fnum, Snum, op;

    Fnum = 0;
    Snum = 0;


    
    printf("introduce el primer numero a multiplicar: ");
    scanf("%d ", &Fnum);
    
    printf("introduce el segundo numero a multiplicar: ");
    scanf("%d ", &Snum);

    op = Fnum * Snum;

    printf("el resultado es: %d ", op);
    

    int end;
    printf("para finalizar presione un numero y enter...");
    scanf("%d", &end);

}