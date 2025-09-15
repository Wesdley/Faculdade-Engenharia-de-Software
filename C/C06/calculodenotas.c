#include <stdio.h>

int main () {
    // Pegar as informações do aluno
    char nome[50];
    float nota1, nota2, nota3, media;

    printf("*** Programa de Cálculo de Notas ***\n");
    printf("Digite o nome do aluno: \n");
    scanf("%s", nome); // pegamos o nome do aluno
    // partimos para as notas

    // Primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    // Segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Terceira nota
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcular a média
    media = (nota1 + nota2 + nota3) / 3; // caso use int aqui nesse caso teriamos que por (float) antes das notas
    // mostrar a média das notas
    printf("A média das notas de %s é:%.2f", nome, media);
    return 0;

};