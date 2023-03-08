// El usuario de nuestro programa podrá teclear dos números de hasta 8 cifras
// significativas. El programa deberá mostrar el resultado de dividir el primer número entre
// el segundo, utilizando tres cifras decimales.

#include <stdio.h>

int main() {

    float x;
    float y;
    float res;

    printf("ingrese un valor: ", x);
    scanf("%f", &x);

    printf("ingrese otro valor: ", y);
    scanf("%f", &y);

    res = x / y;

    printf("el resultado de la division es: %.3f\n", res);



    int end;
    printf("para finalizar presione un numero y enter...\n");
    scanf("%d", &end);

    return 0;
}