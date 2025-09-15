#include <stdio.h>

int main () {
    int numeroSinal = 3000000000; // por bater o cap do limite ele começa do menos para o mais 
    unsigned int numeroSemSinal = 3000000000; // ao usar o unsigned o limite do valor fica de 0 a 4294967295 ou seja ele dobra o limite

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    int numeroNormal = 2147483647; // numero maximo de int
    long int numeroGrande = 2147483647; // numero maior utilizando long 

    printf("Número normal: %d\n", numeroSinal);
    printf("Número grande: %ld\n", numeroGrande); // para declarar um long tem que usar o l ao declarar 

    numeroGrande = 2147483648; // dependendo do ambiente long int acaba tendo problemas de portabilidade gerando um número negativo

    double numeroPreciso = 3.141592653589793; // precisão simples 
    long double numeroMuitoPreciso = 3.141592653589793238463; // precisão dupla 

    printf("Número preciso (double): %f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    short int numeroPequeno = 32767; // short int usa menos memória que int
    numeroPequeno = 32768; // short int usa menos memória que int então vai dar erro de overflow

    printf("Numero pequeno: %d\n", numeroPequeno);

    return 0;
}