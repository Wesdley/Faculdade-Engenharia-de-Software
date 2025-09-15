#include <stdio.h>

int main () {
    int num1, num2, soma;
    // lendo 2 números do usuário
    printf("Digite 1 números inteiros: ");
    scanf("%d", &num1);
    printf("Digite 2 números inteiros: ");
    scanf("%d", &num2);
    // somando os números
    soma = num1 + num2;
    // exibindo o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);
    return 0;
}