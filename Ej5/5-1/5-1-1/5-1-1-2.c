//  Un programa que almacene en una tabla el número de días que tiene cada mes
// (año no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero) y un día (ej. el
// día 15) y diga qué número de día es dentro del año (por ejemplo, el 15 de febrero sería el
// día número 46, el 31 de diciembre sería el día 365).

#include <stdio.h>

int main(){

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

    dia2 += dia;
    
    printf("el dia %d del mes %s es el dia numero %d del anio", dia, arr2[mes-1], dia2);



    return 0;
}