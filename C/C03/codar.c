#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome); // não precisa do & para strings caracteristica do C e também vai pegar apenas o primeiro nome

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula); 

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);

    return 0; // significa que o programa terminou corretamente
}