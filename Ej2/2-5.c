/*
 Crear un programa que pida al usuario que teclee cuatro letras y
 las muestre en pantalla juntas, pero en orden inverso, y entre comillas dobles. Por ejemplo si las
 letras que se teclean son a, l, o, h, escribiría "hola"
*/




#include <stdio.h>

int main()
{

    char pletra, sletra, tletra, cletra;

    printf("introduzca una letra: ");

    scanf(" %c", &pletra);

    printf("introduzca una letra: ");

    scanf(" %c", &sletra);

    printf("introduzca una letra: ");

    scanf(" %c", &tletra);

    printf("introduzca una letra: ");

    scanf(" %c", &cletra);


    printf("\"%c%c%c%c\"", cletra, tletra, sletra, pletra);


    return 0;

}


