// Crear un programa que use tres variables x,y,z. Las tres serán números reales, y
// nos bastará con dos cifras decimales. Deberá pedir al usuario los valores para las tres
// variables y mostrar en pantalla cual es el mayor de los tres números tecleados.

#include <stdio.h>

int main() {

    float x;
    float y;
    float z;

    printf("ingrese un numero: ");
    scanf("%f", &x);

    printf("ingrese un numero: ");
    scanf("%f", &y);

    printf("ingrese un numero: ");
    scanf("%f", &z);

    if ((x > y) & ( x > z))
    {
        printf("el numero mas grande es: %.2f", x);
    }
    if ((y > x) & ( y > z))
    {
        printf("el numero mas grande es: %.2f", y);
    }
    if ((z > y) & ( z > x))
    {
        printf("el numero mas grande es: %.2f", z);
    }
    
    int end;
    printf("para finalizar presione un numero y enter...\n");
    scanf("%d", &end);

    return 0;
}