#include <stdio.h>

// Podemos utilizar tanto incremento quanto decremento, mas é mais facil utilizar o decremento para evitar erros humanos
void recursividade( int n) {
    if ( n > 0) {
        printf("%d \n", n); // mostra o valor de N na forma decrescente se for abaixo do decremento ele se torna crescente 
        recursividade( n - 1); // Chamada recursiva com decremento
        printf("%d \n", n); // Mostra o valor de n apos a chamada recursiva o que deixa empilhado mostrando o valor de n em ordem crescente
    }
}

int main () {

    int quantidade = 10; // como o parametro e INT não podemos colocar um float ou double
    printf("Contagem regressiva... \n");
    recursividade(quantidade);
    return 0;

}