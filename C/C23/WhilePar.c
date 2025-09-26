#include <stdio.h>

int main () {
    // while
    int par = 0;
    while (par <= 10) {
        if ( par % 2 == 0) // se por no caso != diferente seria então os impares
        printf("%d\n", par);
        par++;
    }
    // do while
    int numero; //como é do while colocamos do lado de fora
    do {
        printf("Digite um número par para sair do programa:");
        scanf("%d", &numero);
        if(numero % 2 == 0) {
            printf("Número par digitado. Saindo do programa.\n");
        }else {
            printf("Número ímpar\n");
        }
    }while (numero % 2 != 0);
    printf("Fim do programa.\n");

    // for
    int num, i;
    printf("Digite um número para ser calculado a tabuada: ");
    scanf(" %d", &num);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

}