#include <stdio.h>

void torreMove (int torre) {
    if (torre > 0 ) {
        printf("Direita\n");
        torreMove(torre - 1); // Chamada recursiva com decremento
    } else if (torre == 0) {
        printf("Torre parou\n\n\n");
    }
}

void bispoMove (int bispo) {
    if ( bispo > 0) {
        printf("Cima Direita\n");
        bispoMove(bispo - 1); // Chamada recursiva com decremento
    }
}

void rainhaMove (int rainha) {
    if ( rainha > 0) {
        printf("Esquerda\n");
        rainhaMove( rainha - 1); // Chamada recursiva com decremento
    } else if ( rainha == 0) {
        printf("Rainha parou\n\n\n");
    }
}



int main () {
    // int quantidadeTorre = 5, quantidadeRainha = 8; podemos colocar um valor fixo no void
    // int torre = 1, bispo = 1, rainha = 1, cavalo = 1; // peças do tabuleiro
    // torre 5 casas para a direita
    // bispo 5 casas cima direita tendo que imprimir cima direita
    // rainha move para todas as direções, mas tem que mover 8 casas para a esquerda
    // cavalo move 2 para baixo e depois esquerda para fazer o L

    torreMove(5); // torre move 5 casas para direita

    for (int i = 1; i <= 1; i++) { // bispo move 5 casas para cima direita
        for (int j = 1; j <= 5; j++) {
            bispoMove(1);
        }
        printf("Bispo parou\n\n\n");
    }

    rainhaMove(8);

    for ( int cavalo = 1; cavalo <= 1; cavalo++) { // cavalo move 2 casas e depois a esquerda para fazer o L
        for (int i = 1; i <= 3; i++) {
            if ( i < 3 ) {
                printf("Cima\n");
                continue;
            } else {
                printf("Direita\n");
                printf("Cavalo parou\n\n\n");
                break;
            }
        }
    }
}