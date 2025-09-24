#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    while (1) {
        
        int numeroJogador, numeroComputador, resultado;
        char tipoComparacao;

        // Gera um número aleatório entre 1 e 100 para o computador
        srand(time(0));
        numeroComputador = rand() % 100 + 1; // número aleatório entre 1 e 100

        // Início do jogo
        printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
        printf("Você tem que escolher um número entre 1 e 100 e o tipo de comparação.\n");
        printf("M. Maior\n");
        printf("N. Menor\n");
        printf("I. Igual\n");


        printf("Escolha a comparação (M, N, I): ");
        scanf(" %c", &tipoComparacao);

        printf("Digite seu número (1-100): ");
        scanf("%d", &numeroJogador);

        // Exibe o número do computador
        printf("Número do computador: %d\n", numeroComputador);

        switch (tipoComparacao)
        {
        case 'M':
        case 'm':
            printf("Você escolheu Maior.\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

        case 'N':
        case 'n':
            printf("Você escolheu Menor.\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;

        case 'I':
        case 'i':
            printf("Você escolheu Igual.\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
        
        default:
            printf("Tipo de comparação inválido. Tente novamente.\n");
        break;
        }

        // Exibe o resultado do jogo
        printf("Seu número: %d e o do computador: %d\n", numeroJogador, numeroComputador);
        if ( resultado == 1 ) {
            printf("Parabéns! Você ganhou!\n");
        } else {
            printf("Que pena! Você perdeu. Tente novamente.\n");
        }
    }
} //11