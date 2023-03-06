// Crear un programa que use tres variables x,y,z.
// Sus valores iniciales serán 15, -10, 2.147.483.647. 
// Se deberá incrementar el valor de estas variables. 
// ¿Qué valores esperas que se obtengan? Contrástalo con el resultado obtenido por el programa.
// ¿Cuál sería el resultado de las siguientes operaciones? a=5; b=++a; c=a++; b=b*5; a=a*2;

#include <stdio.h>

int main() {
    int a = 15;
    int b = -10;
    long int c = 2147483647;

    a++;
    b++;
    c++;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%ld\n", c);

    b = 0;
    c = 0;

    a = 5;
    b = ++a;
    c = a++; 
    b = b*5; 
    a = a*2;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%ld\n", c);




    int end;
    printf("para finalizar presione un numero y enter...");
    scanf("%d", &end);

    return 0;
}

//podemos observar que el valor de a se modifica al asignarlo 
//incrementado a la variable b y a la variable c