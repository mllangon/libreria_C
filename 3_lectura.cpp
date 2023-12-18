#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    if (fprintf(file, "Apuntes programacion.txt \n") < 0) {
        printf("Error al escribir en el archivo.\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    if (fgets(buffer, 50, file) == NULL) {
        printf("Error al leer del archivo.\n");
    } else {
        printf("Leido del archivo: %s", buffer);
    }

    fclose(file);

    return 0;
}
