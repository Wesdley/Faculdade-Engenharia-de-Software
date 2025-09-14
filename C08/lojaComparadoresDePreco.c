#include <stdio.h>

int main () {
    char produtoA[50] = "Produto A";
    char produtoB[50] = "Produto B";

    // Como estoque geralmente não tem valores negativos podemos utilizar unsigned int para armazenar o estoque de cada produto sem problemas.
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float precoA = 10.50;
    float precoB = 20.40;

    // A quantidade minima que podemos ter em nossos estoques depende do produto.
    unsigned estoqueMinimoA = 500;
    unsigned estoqueMinimoB = 2500;

    // Para calcularmos o valor de cada produto que temos dentro do nosso estoque
    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir as informações dos produtos
    printf("Produto: %s, Estoque: %u, Preço: R$ %.2f\n", produtoA, estoqueA, precoA);
    printf("Produto: %s, Estoque: %u, Preço: R$ %.2f\n", produtoB, estoqueB, precoB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    // Comparações entre os valores totais do produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %.2f\n", estoqueA * precoA, estoqueB * precoB, (estoqueA * precoA) > (estoqueB * precoB));
}