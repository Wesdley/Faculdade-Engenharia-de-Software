#include <stdio.h>

int main () {
    int index;

    char * notasAlunos[3][3] = {
        {"Aluno 0","Pt: 30","Mat: 90"},
        {"Aluno 1","Pt: 60","Mat: 60"},
        {"Alunos 2", "Pt: 90", "Mat: 30"}
    }; // fim char

    printf("\nNotas dos alunos\n");
    printf("Digite o numero do aluno:\n");
    printf("0. Aluno 0\n");
    printf("1. Aluno 1\n");
    printf("2. Aluno 2\n");

    scanf("%d", &index);

    printf("As notas do %s são: %s - %s\n", notasAlunos[index][0], notasAlunos[index][1], notasAlunos[index][2]);

    return 0;
}