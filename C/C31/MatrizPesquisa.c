#include <stdio.h>

#define v1 5
#define v2 5 // podemos deixar o codigo atualizado para qualquer tamanho

int main () {
    int matriz[v1][v2] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;
    int found = 0;
    int soma = 1; 
    
    // deixamos o codigo atualizado para qualquer tamanho

    for ( int i = 0; i < v1; i++) {
        for ( int j = 0; j < v2; j++) {
            matriz[i][j] = soma++;
        }
        printf("\n");
    }

    // procuramos um target dentro da matriz. Digamos que queremos o numero 5, então será procurado dentro da matriz
    for (int i = 0; i < v1; i++) {
        for (int j = 0; j < v2; j++) {
            if (matriz[i][j] == target) {
                printf("Valor %d encontrado na linha %d e coluna %d.\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("O valor %d nao foi encontrado na matriz.\n", target);
    }

    for (int i = 0; i < v1; i++) {
        for (int j = 0; j < v2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}