// hacer un programa que tenga un registro de 5 posiciones donde podamos guardar datos de automoviles
// debemos hacer un menu para dar de alta cada automovil, mostrar todo lo que se cargo y buscar uno de los automoviles

#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char marca[50];
    int modelo;
} Automovil;

Automovil registro[5];
int contador = 0;

void registrarAutomovil() {
    if(contador < 5) {
        printf("Ingrese el nombre del automovil: ");
        scanf("%s", registro[contador].nombre);
        printf("Ingrese la marca del automovil: ");
        scanf("%s", registro[contador].marca);
        printf("Ingrese el modelo del automovil: ");
        scanf("%d", &registro[contador].modelo);
        contador++;
    } else {
        printf("Registro lleno.\n");
    }
}

void mostrarAutomoviles() {
    for(int i = 0; i < contador; i++) {
        printf("Nombre: %s, Marca: %s, Modelo: %d\n", registro[i].nombre, registro[i].marca, registro[i].modelo);
    }
}

void buscarAutomovil() {
    char nombre[50];
    printf("Ingrese el nombre del automovil que desea buscar: ");
    scanf("%s", nombre);
    for(int i = 0; i < contador; i++) {
        if(strcmp(nombre, registro[i].nombre) == 0) {
            printf("Nombre: %s, Marca: %s, Modelo: %d\n", registro[i].nombre, registro[i].marca, registro[i].modelo);
            return;
        }
    }
    printf("Automovil no encontrado.\n");
}

int main() {
    int opcion;
    do {
        printf("1. Registrar automovil\n2. Mostrar automoviles\n3. Buscar automovil\n4. Salir\nSeleccione una opcion: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                registrarAutomovil();
                break;
            case 2:
                mostrarAutomoviles();
                break;
            case 3:
                buscarAutomovil();
                break;
        }
    } while(opcion != 4);
    return 0;
}
