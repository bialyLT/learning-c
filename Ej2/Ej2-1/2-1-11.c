// (2.1.11.1) Crear un programa que use tres variables x,y,z. Sus valores iniciales serán 15, -
// 10, 214. Se deberá incrementar el valor de estas variables en 12, usando el formato
// abreviado. ¿Qué valores esperas que se obtengan? Contrástalo con el resultado obtenido
// por el programa.
// (2.1.11.2) ¿Cuál sería el resultado de las siguientes operaciones? a=5; b=a+2; b-=3; c=-3;
// c*=2; ++c; a*=b;

#include <stdio.h>

int main() {

    int x = 15;
    int y = 10;
    int z = 214;

    x += 12;
    y += 12;
    z += 12;

    printf("resultado de x: %d\n", x);
    printf("resultado de y: %d\n", y);
    printf("resultado de z: %d\n", z);

    x = 5;
    y = 0;
    z = 0;

    y = x + 2;
    y -= 3;
    z = -3;
    z *= 2;
    ++z;
    x *= y;

    printf("resultado de x: %d\n", x);
    printf("resultado de y: %d\n", y);
    printf("resultado de z: %d\n", z);

    int end;
    printf("para finalizar presione un numero y enter...\n");
    scanf("%d", &end);

    return 0;
}

// se puede observar que a diferencia del ejercicio anterior, el valor de x no se modifica
// a la hora de usarlo para asignarselo a otra variable