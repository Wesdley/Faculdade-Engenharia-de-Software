#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0)); // Inicializa o gerador de números aleatórios com o tempo atual ( sem o time 0 gera sempre o mesmo número aleatório devido ao iniciador)
            numeroSecreto = rand() % 5 + 1; // gera um número aleatório entre 1 e 5 com o rand() % 5 + 1 pegando o resto da divisão por 5 e adicionando 1 ao resultado
            printf("Digite um numero de 1 a 5: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite) {
                printf("Parabéns, você acertou!\n");
                printf("O numero era %d\n", numeroSecreto);
            } else {
                printf("Errou, o numero era %d\n", numeroSecreto);
            }
        break;
        case 2:
            printf("Regras do jogo\n");
        break;
        case 3:
            printf("Saindo do jogo\n");
        break;
        default:
            printf("Opção inválida\n");
        break;
    }
}