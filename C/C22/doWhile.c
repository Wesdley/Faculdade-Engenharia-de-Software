#include <stdio.h>

int main () {
    int i = 0;
    do {
        printf("Executando o bloco de código dentro do do-while. %d\n", i);
        i++;
    } while ( i<= 5); // condição de parada para evitar o loop infinito

    return 0;
}