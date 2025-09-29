#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0)); // inicializa o randômico
    char *nomes[10] = {"Ana","Carlos","Maria","Pedro","Juliana","Lucas","Fernanda","Rafael","Camila","João"};
    char *sobrenomes[10] = {"Silva","Souza","Oliveira","Pereira","Lima","Gomes","Almeida","Costa","Rocha","Martins"};
    int IDS[10];
    int geradorDeIDs = rand() % 10;
    int digitoVerificador = rand() % 100;

    for ( int i = 0; i < 10; i++){
        IDS[i] = rand() % 1000; // Gera IDs aleatórios entre 0 e 999
    }

    printf("Gerador de IDs\n");
    printf("Nome: %s %s", nomes[geradorDeIDs], sobrenomes[geradorDeIDs]);
    printf("\nID: %03d.%03d.%03d-%02d", IDS[0], IDS[1], IDS[2], digitoVerificador); // Formata o ID como 000.000.000-00 colocando decimais e zeros à esquerda
    printf("\n\n");

}