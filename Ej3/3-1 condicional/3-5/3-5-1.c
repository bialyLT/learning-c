// pedir una letra al usuario y decir si se trata de una vocal

#include <stdio.h>

int main () {

    char l;

    printf("ingrese una letra: ");
    scanf(" %c", &l);

    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
        printf("%c es una vocal", l);
    else 
        printf("%c no es una vocal", l);

    return 0;
}