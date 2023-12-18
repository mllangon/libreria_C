#include <string.h>
#include <stdio.h>

int main() {
    char str[1000];

    printf("Ingrese una cadena: ");
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}