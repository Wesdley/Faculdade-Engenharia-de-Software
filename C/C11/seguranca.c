#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque;

    printf("Informe a temperatura: \n");
    scanf(" %f", &temperatura);

    printf("Informe a umidade: \n");
    scanf(" %f", &umidade);

    printf("Informe o estoque: \n");
    scanf(" %u", &estoque); // unsigned int para armazenar valores positivos

    if (temperatura >= 30) {
        printf("Temperatura alta\n");
    } else {
        printf("Temperatura normal\n");
    }

    if (umidade >= 50) {
        printf("Umidade alta\n");
    } else {
        printf("Umidade normal\n");
    }

    if (estoque <= 1000){
        printf("Estoque baixo do mínimo\n");
    } else {
        printf("Estoque normal\n");
    }
    
    return 0;
}