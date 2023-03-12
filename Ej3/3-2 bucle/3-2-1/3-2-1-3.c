// Crea un programa que escriba en pantalla los números pares del 26 al 10
// (descendiendo), usando "while".

#include <stdio.h>

int main(){

    int a = 26;

    while (a >= 10)
    {
        printf("%d", a);
        a -= 2;
    }

    return 0;
}


