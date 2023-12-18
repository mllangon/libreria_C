#include <string.h>
#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Ingrese la primera cadena: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Ingrese la segunda cadena: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else if (comparison < 0) {
        printf("La primera cadena ('%s') es menor que la segunda ('%s') alfabeticamente.\n", str1, str2);
    } else {
        printf("La primera cadena ('%s') es mayor que la segunda ('%s') alfabeticamente.\n", str1, str2);
    }

    return 0;
}