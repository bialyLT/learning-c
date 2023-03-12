// Crear un programa que escriba en pantalla los números del 1 al 50 que sean
// múltiplos de 3 (pista: habrá que recorrer todos esos números y ver si el resto de la
// división entre 3 resulta 0).

#include <stdio.h>

int main(){

    int i;

    printf("multiplos de 3: ");
    for (i = 3; i <= 50; i += 3)
    {
        printf("%d \n", i);
    }
    


    return 0;
}