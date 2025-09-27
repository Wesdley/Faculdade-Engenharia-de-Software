#include <stdio.h>

int main () {
    int i, j;
    char letras;

    for ( i = 1; i <= 40; i++) { // apenas um teste oara ver até onde vai, mas depois de 32 começa a repetir
        letras = 'A';
        for ( j = 1; j <= i; j++) {
            printf("%c ", letras);
            ++letras;
        }
        printf("\n");
    }
}