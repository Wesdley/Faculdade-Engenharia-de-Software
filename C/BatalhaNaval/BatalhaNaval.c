#include <stdio.h>

// declarando o campo
#define linha 10
#define coluna 10


int main () {
    // tabelas numéricas e alfabéticas para organizar o campo
    int tabelaNumerica[linha] = {0,1,2,3,4,5,6,7,8,9};
    char tabelaAlfabetica[10] = {'A','B','C','D','E','F','G','H','I','J'};

    int campo[linha][coluna]; // campo de batalha
    // inicia o campo vazio com apenas água
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++)  {
            campo[i][j] = 0;
        }
    } // Loop para colocar o campo vazio

    int navio1[3] = {3,3,3}, // horizontal
    navio2[3] = {3,3,3}, // vertical
    navio3[3] = {3,3,3}, // diagonal
    navio4[3] = {3,3,3}; // diagonal

    int linha1 = 2, coluna1 = 2,
    linha2 = 1, coluna2 = 0,
    linha3 = 7, coluna3 = 7,
    linah4 = 3, coluna4 = 6;


    // coloca navio1 horizontalmente
    for (int n1 = 0; n1 < 3; n1++) {
        campo[linha1][coluna1 + n1] = navio1[n1]; // colocamos o i para percorrer o array navio1 e coluna1 para colocar ele horizontalmente
    }

    // coloca navio2 verticalmente 
    for (int n2 = 0; n2 < 3; n2++){
        campo[linha2 + n2][coluna2] = navio2[n2]; // colocamos o i para percorrer o array navio2 e linha2 para colocar ele verticalmente
    }

    // coloca navio3 diagonal para cima
    for (int n3 = 0; n3 < 3; n3++){
        campo[linha3+n3][coluna3+n3] = navio3[n3];
    }

    // coloca navio4 diagonal para baixo
    for (int n4 = 0; n4 < 3; n4++){
        campo[linah4-n4][coluna4+n4] = navio4[n4];
    }


    // Cria o campo visualmente 

    printf("Campo de Batalha Naval\n");

    // loop para criar o mapa

    for (int i = 0; i < linha; i++){
        printf("%c ", tabelaAlfabetica[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", campo[i][j]);
        }
        printf("  %d", tabelaNumerica[i]);
        printf("\n");
    }

    return 0;
}