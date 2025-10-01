#include <stdio.h>

#define LINHA 5
#define COLUNA 5 // definimos o tamanho da matriz como 5x5 ou qualquer outro tamanho

int main () {
    int matriz[LINHA][COLUNA]; // declaramos o tamanho ja pre definido
    int soma = 0;

    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}