//El usuario tecleará dos números (x e y), y el programa deberá calcular cual es el
//resultado de su división y el resto de esa división.

#include <stdio.h>

int main() {

    int Fnum, Snum, op;

    printf("Introduce el primer numero: ");
    scanf("%d", &Fnum);
    
    printf("Introduce el segundo numero: ");
    scanf("%d", &Snum);
    
    if (Snum == 0) {
        printf("Error: El segundo numero no puede ser cero\n");
        return 1;
    }
    
    op = Fnum / Snum;

    printf("El resultado de la division de los dos numeros es: %d\n", op);
    
    op = Fnum % Snum;
    
    printf("El resto de la division es: %d\n", op);

    int end;
    printf("para finalizar presione un numero y enter...");
    scanf("%d", &end);
    return 0;
}