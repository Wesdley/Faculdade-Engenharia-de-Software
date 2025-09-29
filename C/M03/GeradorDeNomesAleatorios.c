#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand( time(0) ); // inicializa o randômico
    int tamanhoNome, quantidadeNomes;
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    char consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    char nome[10];
    while (1){
        int opcao;
        printf("\n\nGerador de Nomes Aleatórios\n");
        printf("1 - Gerar Nomes\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o tamanho do nome (max 10): ");
            scanf("%d", &tamanhoNome);
            printf("Digite a quantidade de nomes: ");
            scanf("%d", &quantidadeNomes);
            printf("\n\n");

            if ( tamanhoNome > 10) {
                printf("Tamanho máximo é 10\n");
                continue;
            }

            for ( int i = 0; i < quantidadeNomes; i++) {
                for ( int j = 0; j <= tamanhoNome; j++) {
                    if ( j % 2 == 0) {
                        nome[j] = consoantes[rand() % 20];
                    } else {
                        nome[j] = vogais[rand() % 5];
                    }
                    printf("%c", nome[j]);
                } // fim for J
                printf("\n");
            } // fim for I
            break;
        
        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("erro 404\n");
            break;
        } // Fim Switch
    } // Fim While
} // Fim Main