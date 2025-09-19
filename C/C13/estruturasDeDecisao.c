#include <stdio.h>

int main () {
    int idade;
    scanf("%d", &idade);

    if (idade < 12 && idade > 18) {
        printf("Menor de idade\n");
    } else if (idade > 18 && idade < 60) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }
    
    int notas;
    scanf("%d", &notas);

    if (notas <= 90) {
        printf("Aprovado nota: A\n");
    } else if (notas >= 80) {
        printf("Aprovado nota: B\n");
    } else if (notas >= 70){
        printf("Aprovado nota: C\n");
    } else {
        printf("Reprovado\n");
    }
}