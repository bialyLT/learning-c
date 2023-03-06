// El usuario de nuestro programa podrá teclear dos números de hasta 8 cifras
// significativas. El programa deberá mostrar el resultado de dividir el primer número entre
// el segundo, utilizando tres cifras decimales.

#include <stdio.h>

int main() {

    float x;
    float y;
    float res;

    printf("ingrese un valor: ", x);
    scanf("%d", &x);

    printf("ingrese un valor: ", y);
    scanf("%d", &y);

    res = x / y;

    printf("el resultado de la division es: %.3f", res);



    int end;
    printf("para finalizar presione un numero y enter...\n");
    scanf("%d", &end);

    return 0;
}