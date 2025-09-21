#include <stdio.h>

int main () {
    int opcao = 0;
    printf("1 - Executar o Game.\n");
    printf("2 - Regras do Game.\n");
    printf("3 - Sair do Game.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Executando o Game.\n");
    break;
    case 2:
        printf("Regras do Game.\n");
    break;
    case 3:
        printf("Sair do Game.\n");
    break;
    default:
        printf("Erro 404");
    break;
    }
}