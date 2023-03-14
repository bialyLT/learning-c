//  Un programa que almacene en una tabla el número de días que tiene cada mes
// (supondremos que es un año no bisiesto), pida al usuario que le indique un mes
// (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.

#include <stdio.h>

int main(){

    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char arr2[12][15] = {"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};

    int mes, i;

    printf("ingrese un mes del anio en numero: ");
    scanf("%d", &mes);

    printf("el mes de %s tiene %d dias", arr2[mes-1], arr[mes-1]);
    
    return 0;
}