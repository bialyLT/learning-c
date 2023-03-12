// Crear un programa que dé al usuario la oportunidad de adivinar un número del 1
// al 100 (prefijado en el programa) en un máximo de 6 intentos. En cada pasada deberá
// avisar de si se ha pasado o se ha quedado corto.

#include <stdio.h>

int main() {

    int b;
    int a = 6;

    while (a > 0)
    {
        printf("ingrese un numero del 1 al 100, tienes %d intentos: ", a);
        scanf("%d", &b);
        //el numero 10 es el que el usuario tiene que adivinar
        if (b == 10)
        { 
            printf("felicidades!, adivinaste el numero en %d intentos \n", 7-a);
            break;
        }
        else
        {
            a--;
            if ((b > 5) && (b < 15))
            {  
                printf("estuviste cerca!!!, te quedan %d intentos \n", a);
                continue;
            }
            else
            {  
                printf("estuviste muy lejos!!!, te quedan %d intentos \n", a);
                continue;
            }
        }
    }
    if (a == 0)
        printf("perdiste!!!");
    
    return 0;
}
