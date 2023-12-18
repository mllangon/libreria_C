#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    srand(time (NULL));

    int numRandom = rand();
    printf("El numero aleatorio es: %d\n", numRandom);

    numRandom= rand();

    srand(50);
    printf("El numero aleatorio es: %d\n", rand());
}