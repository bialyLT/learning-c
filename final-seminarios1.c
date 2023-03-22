// hacer un programa que tenga un registro de 5 posiciones donde podamos guardar datos de automoviles
// debemos hacer un menu para dar de alta cada automovil, mostrar todo lo que se cargo y buscar uno de los automoviles

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct reg {
    char patente[7];
    char marca[10];
    int anio;
};

char regSearch[6];


void altaRegistro(struct reg registro[]) {

    int i;

    for (i = 0; i < 3; i++) {

        printf("Ingrese la patente del automovil %d: ", i+1);
        scanf("%s", registro[i].patente);

        printf("Ingrese la marca del automovil %d: ", i+1);
        scanf("%s", registro[i].marca);

        printf("Ingrese el modelo del automovil %d: ", i+1);
        scanf("%d", &registro[i].anio);
    }
}

void mostrarRegistro(struct reg registro[]) {

    int i;

    for (i = 0; i < 3; i++) {

      printf("auto numero %d: \n", i+1);

      printf("patente: %s \n", registro[i].patente);

      printf("marca: %s \n", registro[i].marca);

      printf("anio: %d \n", &registro[i].anio);

    }
}

void buscarRegistro(struct reg registro[], char regtoSearch[]){

    int encontrado;
    int i;

    for (i = 0; i < 3; i++){

        if  (strcmp(regtoSearch, registro[i].patente) == 0){

            encontrado = 1;
        }
        if (encontrado == 1) {

            printf("el automovil solicitado tiene estos datos: ");

            printf("patente: %s \n", registro[i].patente);

            printf("marca: %s \n", registro[i].marca);

            printf("anio: %d\n", &registro[i].anio);

            break;

        }

    }
    if (encontrado != 1) {
         printf("no se encontro el automovil solicitado");
    }
}

int main () {

    struct reg registros[3];

    altaRegistro(registros);

    mostrarRegistro(registros);

    printf("ingrese una patente para buscar: ");
    scanf("%s", regSearch);
    if  (regSearch) {

        buscarRegistro(registros, regSearch);
    }


    return 0;
}
