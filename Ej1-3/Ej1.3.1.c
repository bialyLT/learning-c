//Calcular a mano y después comprobar en c las siguientes operaciones:

#include <stdio.h>

int main() {

// -2 + 3 * 5
    printf("calcular: -2+3*5: %d --- ", -2 + 3 * 5);

// (20+5) % 6
    printf("calcular: (20+5) modulo 6: %d --- ", (20+5) % 6);

// 15 + -5*6 / 10
    printf("calcular: 15+(-5)*6/10: %d --- ", 15+(-5)*6/10);

// 2 + 10 / 5 * 2 - 7 % 1
    printf("calcular: 2+10/5*2-7 modulo 1: %d --- ", 2+10/5*2-7%1);
}