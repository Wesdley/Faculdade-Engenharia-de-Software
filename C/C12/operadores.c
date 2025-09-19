#include <stdio.h>

int main () {
    int a = 10, b = 5;
    if (a > 0 && b > 0) {
        printf("A e B são positivos\n");
    } else {
        printf("A ou B não são positivos\n");
    }

    if (a > 110 || b > 0) {
        printf("A ou B são maior\n");
    } else {
        printf("A e B não são maior\n");
    }

    if (!a) {
        printf("A é falso\n");
    }

    // && significa que ambos tem que ser verdadeiros para funcionar 
    // || significa que pelo menos um tem que ser verdadeiro para funcionar
    // ! inverte o valor de verdadeiro para falso e vice versa

}