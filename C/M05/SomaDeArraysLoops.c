#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));
    int soma = 0;
    int numeros[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            numeros[i][j] = rand() % 100 + 1;
            if (numeros[i][j] % 2 == 0) {
                soma += numeros[i][j];
            }
        }
    }

        printf("%d", soma);
        printf("\n");

    for ( int i = 0; i < 5; i++) {
        for ( int j = 0; j <  5; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }
}