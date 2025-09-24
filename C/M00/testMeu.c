#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));
        int opcao, mediaCalculada = 0, continuar;
        float nota1, nota2, media;
        char nomeAluno[50];
    while (1) {
        nota1 = (float)rand() / RAND_MAX * 10; // número aleatório entre 0 e 10
        nota2 = (float)rand() / RAND_MAX * 10; // número aleatório entre 0 e 10

        printf("Menu Escolar\n");
        printf("Escolha no menu o que deseja fazer:\n");
        printf("1. Calcular Média\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %d", &opcao);

        if (opcao == 3) {
            printf("Saindo do programa...\n");
            break;
        }

        switch (opcao)
        {
        case 1: // pegamos o nome do aluno criamos sua notas aleatorias e calculamos a media voltando no inicio para saber se ele passou ou nao
            printf("Digite o nome do aluno: "); 
            scanf(" %s", nomeAluno);
            printf("Notas do Aluno: %s\n", nomeAluno);
            printf("Nota 1: %.2f\n", nota1);
            printf("Nota 2: %.2f\n", nota2);
            media = (nota1 + nota2) / 2;
            mediaCalculada = 1;
            continuar;
            break;
        case 2:
            if (!mediaCalculada) {
                printf("Por favor, calcule a média primeiro.\n");
                continuar;
                break;
            } else {
                printf("Status do Aluno: %s\n", nomeAluno);
                printf("Média: %.2f\n", media);
                media >= 7 ? printf("Aprovado!\n") : media >= 5 ?  printf("Recuperação!\n") : printf("Reprovado!\n");
                continuar;
            break;
            }
            
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

    }
}