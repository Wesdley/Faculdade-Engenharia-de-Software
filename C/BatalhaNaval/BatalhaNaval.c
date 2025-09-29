#include <stdio.h>

int main () {
    int campo[10][10]; // campo de batalha
    // inicia o campo vazio com apenas água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)  {
            campo[i][j] = 0;
        }
    } // Loop para colocar o campo vazio

    int navio1[3] = {3,3,3}, // horizontal
    navio2[3] = {3,3,3}; // vertical

    int linha1 = 2, coluna1 = 2,
    linha2 = 5, coluna2 = 5;

    // coloca navio1 horizontalmente
    for (int i = 0; i < 3; i++) {
        campo[linha1][coluna1 + i] = navio1[i]; // colocamos o i para percorrer o array navio1 e coluna1 para colocar ele horizontalmente
    }

    // coloca navio2 verticalmente 
    for (int i = 0; i < 3; i++){
        campo[linha2 + i][coluna2] = navio2[i]; // colocamos o i para percorrer o array navio2 e linha2 para colocar ele verticalmente
    }

    // Cria o campo visualmente 

    printf("Campo de Batalha Naval\n");

    // loop para criar o mapa
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", campo[i][j]);
        }
        printf("\n");
    }

    return 0;
}