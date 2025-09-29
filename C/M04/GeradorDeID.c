#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0)); // inicializa o randômico
    char *nomes[10] = {"Ana","Carlos","Maria","Pedro","Juliana","Lucas","Fernanda","Rafael","Camila","João"};
    char *sobrenomes[10] = {"Silva","Souza","Oliveira","Pereira","Lima","Gomes","Almeida","Costa","Rocha","Martins"};
    int IDS[10], quantidadesIDs;

    printf("\nGerador de IDs\n");
    printf("Quantas IDs deseja gerar (max 10)? ");
    scanf("%d", &quantidadesIDs);
    
    if (quantidadesIDs > 10) {
        printf("Quantidade de IDs excedeu o limite.\n");
        quantidadesIDs = 10;
    }

    for ( int i = 0; i < 10; i++){
        IDS[i] = rand() % 1000; // Gera IDs aleatórios entre 0 e 999
    }

    for (int i = 0; i < quantidadesIDs; i++) {
        int digitoVerificador = rand() % 100;
        printf("\nGerador de IDs\n\n");
        printf("Nome: %s %s", nomes[rand() % 10], sobrenomes[rand() % 10]);
        printf("\nID: %03d.%03d.%03d-%02d", IDS[rand() % 10], IDS[rand() % 10], IDS[rand() % 10], digitoVerificador); // Formata o ID como 000.000.000-00 colocando decimais e zeros à esquerda
        printf("\n\n");
    }

}