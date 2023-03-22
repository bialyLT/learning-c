// Un programa que pida tu nombre, tu día de nacimiento y tu mes
// de nacimiento y lo junte todo en una cadena, separando el nombre de la fecha por una coma y el
// día del mes por una barra inclinada, así: "Juan, nacido el 31/12"

#include <stdio.h>
#include <string.h>

int main() {

    int dia_nac, mes_nac, i;
    char name[20];

    printf("ingrese su nombre: ");
    fgets(name, 20, stdin);

    printf("ingrese su dia de nacimiento: ");
    scanf("%d", &dia_nac);
    
    printf("ingrese su mes de nacimiento: ");
    scanf("%d", &mes_nac);

    printf("%s , nacido el %d/%d ", name, dia_nac, mes_nac);

    return 0;
}