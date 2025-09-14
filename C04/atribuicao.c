#include <stdio.h>

int main () {
    // Atribuição Simples =
    // Atribuição com Soma += 
    // Atribuição com Subtração -=
    // Atribuição com Multiplicação *=
    // Atribuição com Divisão /=

    int numero1, numero2, resultado;
    
    resultado = 20;
    printf("Resultado: %d\n", resultado);

    resultado += 20; // otimiza já adicionando +20 no Resultado
    printf("Resultado: %d\n", resultado);

    resultado -= 10; // Vai remover 10 e já adicionar ao resultado
    printf("Resultado: %d\n", resultado);

    resultado *= 10; 
    printf("Resultado: %d\n", resultado);

    resultado /= 2;
    printf("Resultado: %d\n", resultado);
}