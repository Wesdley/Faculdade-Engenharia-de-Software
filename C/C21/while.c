#include <stdio.h>

int main () {
    int i = 0;

    while ( i <= 10) { // condição de parada para evitar o loop 
        printf("%d\n", i);
        i++; // vai incrementar o valor de i em 1 a cada repetição
    }
}