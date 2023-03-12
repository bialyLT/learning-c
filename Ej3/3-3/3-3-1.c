// Crear un programa que pida un número al usuario (entre 1 y 100) y muestre tantas
// letras A como indique ese número

#include <stdio.h>

int main() {

    int i, c;
    const char a = 'A';
    printf("ingrese un numero: ");
    scanf("%d", &c);

    if ((c <= 100) && (c >= 1))
    {
        for (i = 0; i < c; i++)
        {
            printf("%c", a);
        }
    }
    else 
        printf("deberias ingresar un numero del 1 al 100");
    
    return 0;
}