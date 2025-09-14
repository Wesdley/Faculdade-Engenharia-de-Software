#include <stdio.h>

int main () {
    int idade = 25;
    float altura = 1.75;
    char genero = 'M';
    char nome[20] = "Joao";

    printf("Nome: %s e sua idade é: %d\n", nome, idade); // podemos declarar mais de uma variável na mesma linhas
    //printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura); // se eu por %.2f ele mostra só 2 casas decimais
    printf("Gênero: %c\n", genero);

    printf("Digite sua idade: ");
    scanf("%d", &idade); // o & é para pegar o endereço de memória da variável
    printf("A idade digitada foi: %d\n", idade); // para verificar se foi mudado o valor da variável


    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura digitada foi: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome); // não precisa do & para strings caracteristica do C
    printf("O nome digitado foi: %s\n", nome); // nesse caso so vai ser possivel ler o primeiro nome, se tiver espaço ele para de ler e interpreta como o fim da string. É uma limitação do scanf

    printf("Digite seu genero: ");
    scanf(" %c", &genero); // aqui uma caracteristica do scanf é que ele lê o primeiro caractere que encontrar, então se eu der enter ele vai ler o enter como caractere. Para resolver isso podemos colocar um espaço antes do %c
    printf("Seu genero é: %c\n", genero);

    // forma diferente de pegar o nome completo do usuário já que não podemos usar o scanf
    char nomeCompleto[50];
    printf("Digite seu nome completo: ");
    fgets(nomeCompleto,50, stdin); // o stdin é o teclado, o 50 é o tamanho máximo que ele vai ler
    // fgets inclui o '\n' na string, então podemos removê-lo se necessário
    //nomeCompleto[strcspn(nomeCompleto, "\n")] = 0; // remove o '\n' da string (copiado da faculdade pq não entendi muito bem ainda)
    printf("Seu nome completo é: %s\n", nomeCompleto);
    // Essa parte não entendi e muito menos funcionou direito, então vou deixar comentada por enquanto

    /*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    %u: Imprime um inteiro sem sinal( - ).
    */
}