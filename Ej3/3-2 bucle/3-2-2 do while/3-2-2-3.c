// Crea un programa que escriba en pantalla los números pares del 26 al 10
// (descendiendo), usando "do..while".

#include <stdio.h>

int main() {

    int a;
    a = 26;
    do
    {
        printf("%d \n", a);   
        a -= 2;
    } while (a >= 10);
    
    return 0; 
}