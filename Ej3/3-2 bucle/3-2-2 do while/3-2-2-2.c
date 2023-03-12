// Crea un programa que escriba en pantalla los números del 1 al 10, usando
// "do..while".

#include <stdio.h>

int main() {

    int a;
    a = 1;
    do
    {
        printf("%d \n", a);   
        a++;
    } while (a <= 10);
    
    return 0; 
}