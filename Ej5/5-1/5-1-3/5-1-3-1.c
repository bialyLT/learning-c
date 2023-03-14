// A partir del programa propuesto en 5.1.2, que almacenaba en una tabla el
// número de días que tiene cada mes, crear otro que pida al usuario que le indique la
// fecha, detallando el día (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta
// muestre en pantalla el número de días que quedan hasta final de año.

#include <stdio.h>

int main() {

    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char arr2[12][15] = {"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};

    int i, dia, mes, dia2;
    dia2 = 0;


    printf("ingrese un mes del anio en numero: ");
    scanf("%d", &mes);

    printf("ingrese un dia del mes de %s: ", arr2[mes-1]);
    scanf("%d", &dia);

    for ( i = 0; i < mes-1; i++)
    {
        dia2 += arr[i];
    }

    dia2 += dia2;

    printf("el dia %d del mes %s es el dia numero %d del anio \n", dia, arr2[mes-1], dia2);
    
    dia2 = 365 - dia2;
    printf("por lo tanto faltan %d dias para que termine el anio", dia2);

    return 0;
}