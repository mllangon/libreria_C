#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100];


    printf("Ingrese el nombre del archivo a abrir: ");
    fgets(filename, 100, stdin);
    filename[strcspn(filename, "\n")] = 0;


    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: El archivo '%s' no se pudo abrir o no existe.\n", filename);
        return 1;
    } else {
        printf("Archivo '%s' abierto con exito.\n", filename);


        fclose(file);
    }

    return 0;
}
