#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int escolhaJogador, escolhaComputador, continuar, jogador = 0, computador = 0;
    srand(time(0));

    while (1) { // adição de loop minha por preguiça de ficar iniciando o jogo toda vez
        printf("\n***Jogo de Jokenpô***\n");
        printf("Placar: J %d - C %d\n", jogador, computador);
        printf("Escolha uma opção:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("0. Sair do Jogo\n");
        printf("4. Escolha: ");
        
        scanf("%d", &escolhaJogador);

        if (escolhaJogador == 0) {
            printf("Saindo do jogo\n");
            break;
        } // finaliza o game para sair desse loop

        if (escolhaJogador < 1 || escolhaJogador > 3) {
            printf("Opção inválida\n");
            continue; // volta para o inicio por conta que esta dentro de um loop então chama ele novamente do inicio ignorando o resto do codigo 
        }
        
        escolhaComputador = rand() % 3 + 1; // gera um número aleatório entre 1 e 3 com o rand() % 3 + 1 pegando o resto da divisão por 3 e adicionando 1 ao resultado

        switch (escolhaJogador) // escolha do jogador
        {
        case 1:
            printf("Jogador: Pedra - ");
        break;
        case 2:
            printf("Jogador: Papel - ");
        break;
        case 3:
            printf("Jogador: Tesoura - ");
        break;
        default:
            printf("Houve um erro de impressão - 2");
        break;
        }

        switch (escolhaComputador) // escolha do pc
        {
        case 1:
            printf("Computador - Pedra \n");
        break;
        case 2:
            printf("Computador - Papel \n");
        break;
        case 3:
            printf("Computador - Tesoura \n");
        break;
        default:
            printf("Houve um erro de impressão \n");
        break;
        }

        if (escolhaComputador == escolhaJogador) {
            printf("--- Empate ---\n");
        } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
                    (escolhaJogador == 2 && escolhaComputador == 1) ||
                    (escolhaJogador == 3 && escolhaComputador == 2)) {
            jogador++; // coloquei um contador de pontos para saber quem ganhou mais vezes (também minha preguiça de ficar iniciando o jogo toda vez)
            printf("--- Jogador ganhou %d vezes ---\n,", jogador);        
        } else {
            computador++; // coloquei um contador de pontos para saber quem ganhou mais vezes (também minha preguiça de ficar iniciando o jogo toda vez)
            printf("--- Computador ganhou %d vezes ---\n", computador);
        }
    }; // fim while
    return 0;
}