// Crear un programa que descomponga un número (que teclee el usuario) como
// producto de sus factores primos. Por ejemplo, 60 = 2 · 2 · 3 · 5

#include <stdio.h>

int main() {

    int a, i;

    printf("introduzca un numero para descomponer: ");
    scanf("%ld", &a);

    printf("%ld = ", a);

    while (a != 1)
    {
        for (i = 2; i > 1; i++)
        {
            if (a % i == 0)
            {
                a = a / i;
                printf("%ld ", i);
                if (a != 1)
                    printf("* ");
                break;
            }
        }
    }
    return 0;
}
