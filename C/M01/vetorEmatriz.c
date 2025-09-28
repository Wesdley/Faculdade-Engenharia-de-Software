#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand( time(0) ); // inicializa o randômico

    char nomes[3][30] = { "Dley", "Ana", "Joao"}; // 3 linhas e 30 colunas
    char horas[3][2] = {
        {10, 12},
        {14, 18},
        {19, 22}
    };
    int matriz[2][3] = {
        {20, 25, 30},
        {15302, 1228, 2152}
    };

    
    printf("Nome: %s\n", nomes[rand() % 2]);
    printf("Idade: %d\n", matriz[0][rand() % 2]);
    printf("Salario: %d\n", matriz[1][rand() % 2]);
    printf("Horario atual da consulta: %d:%d\n", horas[rand() % 1][rand() % 2], horas[rand() % 1][rand() % 2]);
    


}