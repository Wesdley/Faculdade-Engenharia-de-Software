#include <stdio.h>

int main () {
    int i;
    do {
        printf("Digite um número positivo (ou um número negativo para sair): ");
        scanf("%d", &i);
        if (i >= 0) {
            printf("Você digitou: %d\n", i);
        }
    } while (i >= 0); // condição de parada para evitar o loop infinito
    printf("Número negativo digitado. Saindo do programa.\n");
}