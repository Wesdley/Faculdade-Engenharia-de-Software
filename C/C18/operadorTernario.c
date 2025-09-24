#include <stdio.h>

int main () {
    int idade = 16;
    int resultado;

    idade >= 18 ? printf("Adulto\n") : printf("Menor de idade\n");
    // podemos fazer dessa forma onde 1 = verdadeiro e 0 = falso
    resultado = idade >= 18 ? 1 : 0;

    int t1 = 10;
    printf("Você tem %d %s", t1,(t1 == 1) ? "ponto" : "pontos");    // ? se verdadeiro : se falso
    // caso eu queira adicionar os pontos eu posso fazer assim: t1 = 1 ? "ponto" : "pontos"; assim se for 1 ponto consta ponto e se for mais de 1 pontos

    int temperatura = 32;
    int res = temperatura >= 30 ? 1 : 0;
    printf("A temperatura eh %d %s", temperatura, (temperatura >= 30) ? "quente" : "frio");
    res = temperatura >= 30 ? 1 : 0;
    if (res == 1) {
        printf("quente");
    } else {
        printf("frio");
    }
}