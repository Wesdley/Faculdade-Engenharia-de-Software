#include <stdio.h>

int main () {
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1; // peças do tabuleiro
    // torre 5 casas para a direita
    // bispo 5 casas cima direita tendo que imprimir cima direita
    // rainha move para todas as direções, mas tem que mover 8 casas para a esquerda
    // cavalo move 2 para baixo e depois esquerda para fazer o L

    while (torre <= 5) { // torre move 5 casas para a direita
        printf("Direita\n");
        torre++;
        if ( torre == 6) {
            printf("Torre parou\n\n\n");
        }
    }

    do {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
        if ( bispo == 6) {
            printf("Bispo parou\n\n\n");
        }
    } while (bispo <= 5); // bispo move 5 casas para cima direita

    

    for (rainha = 1; rainha <= 8; rainha++) { // rainha move 8 casas para a esquerda
        printf("Esquerda\n");

        if ( rainha == 8) {
            printf("Rainha parou\n\n\n");
        }
    }

    for ( cavalo = 1; cavalo <= 1; cavalo++) { // cavalo move 2 casas e depois a esquerda para fazer o L
        for (int i = 1; i <= 3; i++) {
            if ( i < 3 ) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }

            if (cavalo == 1 && i == 3) {
                printf("Cavalo parou\n");
            }
        }
    }
}