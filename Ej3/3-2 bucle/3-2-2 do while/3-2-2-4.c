// Crea un programa que pida al usuario su código de usuario (un número entero) y
// su contraseña numérica (otro número entero), y no le permita seguir hasta que
// introduzca como código 1024 y como contraseña 4567.

#include <stdio.h>

int main() {

    const int USER = 1024;
    const int PW = 4567;
    int a;

    do
    {
        printf("Ingrese el codigo de usuario: ");
        scanf("%d", &a);
        if (a != USER)
            printf("el codigo de usuario es incorrecto \n");
        else
            printf("el codigo de usuario es correcto \n");

    } while (USER != a);

    do
    {
        printf("ingrese su contraseña: ");
        scanf("%d", &a);
        if (a != PW)
            printf("la contraseña es incorrecta \n");
        else
            printf("la contraseña es correcta \n");

    } while (PW != a);

    return 0;
}
