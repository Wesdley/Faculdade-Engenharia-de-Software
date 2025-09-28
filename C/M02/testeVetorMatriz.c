#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand( time (0)); // inicia o randômico
    ;
    int 
    linhas = 5, // definimos o tamanho da matriz como 5x5 ou qualquer outro tamanho
    colunas = 5,
    matriz[linhas][colunas]; // declaramos o tamanho já pré definido

    for ( int i = 0; i < linhas; i++) { // criamos um loop onde a linha é a primeira variavel e a coluna a segunda colocando assim também o contador para alocar cada número dentro da matriz

        // erro besta, mas sempre lembrar que o index começa com 0 então devemos por o sinal < para sempre terminar antes do número definido
        for ( int j = 0; j < colunas; j++) { // mesmo esquema, colocando cada número dentro da matriz
            matriz[i][j] = rand() % 100 + 1; // numeros de 1 a 100 aleatórios em I e J
        }
    }

    for ( int i = 0; i < linhas; i++) {
        for ( int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]); // fazemos a impressão da matriz com os números alocados utilizando os mesmos loops para percorrer a matriz
        }

        printf("\n"); // após cada linha imprimimos uma quebra de linha para organizar a matriz ( lembrando que primeiro executa o loop de dentro para depois executar o de fora)
    }
}