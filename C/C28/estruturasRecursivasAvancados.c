#include <stdio.h>

void numero (int n) {
        if ( n > 0 ) {
            printf("%d \n", n);
            numero(n - 1); // Chamada recursiva com decremento
        }
    }

int main () {

        int quantidade = 10; // como o parametro e INT não podemos colocar um float ou double
        printf("Contagem regressiva... \n");
        numero(quantidade);
        return 0;
}