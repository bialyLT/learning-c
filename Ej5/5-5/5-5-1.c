//  Un "struct" que almacene datos de una canción en formato MP3: Artista, Título,
// Duración (en segundos), Tamaño del fichero (en KB). Un programa debe pedir los datos
// de una canción al usuario, almacenarlos en dicho "struct" y después mostrarlos en
// pantalla.

#include <stdio.h>

    struct cancion
    {
        char artista[20];
        char titulo[20];
        int duracion;
        long int tamano;
    };


int main() {


    struct cancion cancion1;

    printf("ingresar el nombre del artista: ");
    scanf(" %s", cancion1.artista);

    printf("ingresar el nombre de la cancion: ");
    scanf(" %s", cancion1.titulo);

    printf("ingresar la duracion de la cancion: ");
    scanf("%d", &cancion1.duracion);

    printf("ingresar el tamano de la cancion: ");
    scanf("%ld", &cancion1.tamano);

    printf("el nombre del artista es %s, el nombre de la cancion es: %s, la cancion dura %d segundos, el tamano de la cancion es de %ld kbytes", cancion1.artista, cancion1.titulo, cancion1.duracion, cancion1.tamano);

    return 0;
}


