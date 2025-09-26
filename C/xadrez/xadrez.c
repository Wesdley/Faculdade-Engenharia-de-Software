#include <stdio.h>

int main () {
    int torre = 1, bispo = 1, rainha = 1; // peças do tabuleiro
    // torre 5 casas para a direita
    // bispo 5 casas cima direita tendo que imprimir cima direita
    // rainha move para todas as direções, mas tem que mover 8 casas para a esquerda

    while (torre <= 5) { // torre move 5 casas para a direita
        printf("Direita\n");
        torre++;
    }

    do {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    } while (bispo <= 5); // bispo move 5 casas para cima direita

    

    for (rainha = 1; rainha <=9; rainha++) { // rainha move 8 casas para a esquerda
        printf("Esquerda\n");
    }
}