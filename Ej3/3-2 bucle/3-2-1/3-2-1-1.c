// Crear un programa que pida al usuario su contraseña (numérica). Deberá
// terminar cuando introduzca como contraseña el número 4567, pero volvérsela a pedir
// tantas veces como sea necesario

#include <stdio.h>

int main(){

    const int PW = 4567;
    int num = 0;
        printf("ingrese la contraseña: ");
        scanf("%d", &num);
    while (PW != num)
    {
        printf("Error: ingrese la contraseña nuevamente: ");
        scanf("%d", &num);
    }
    
    return 0;
}