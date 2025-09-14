#include <stdio.h>

int main () {
    // tomar cuidado quando for converter int para float
    int a = 10;
    int b = 3;
    float c = a / b;
    printf("%f\n", c); // no caso será apenas o 3 pois ele arredonda para baixo

    float certo = (float) a / b; // assim ele vai arredondar corretamente para 3.3333333...
    printf("%f\n", certo);

    // ideal para quando for utilizar valores com casas decimais utilizar float ou double para ter mais precisão

    //conversão implícita

    int x1 = 2;
    float x2 = 3.2;
    float x3 = x1 + x2; // ele vai converter o x1 para float e somar com o x2
    printf("%f\n", x3); // conversão implícita, ele vai converter o x1 para float e somar com o x2, mas tomar cuidado com a perda de precisão. Pode ocorrer de sumir a casa decimal e aparecer apenas a parte inteira

    //Riscos da conversão implícita: a conversão implícita pode ser útil, mas também apresenta riscos. Pode ocorrer perda de dados ou precisão quando tipos de dados de precisões diferentes são convertidos. Por exemplo, ao converter float para int, a parte decimal será perdida. Além disso, se você não estiver ciente de quando a conversão implícita acontece, isso pode levar a comportamentos inesperados em seu programa.

    // Conversão explícita (casting)

    int y1 = 10;
    int y2 = 3;
    float y3 = (float) y1 / y2; // assim ele vai arredondar para baixo e ele vai converter o y1 para float
    printf("%f\n", y3); 

    //Cuidado com a precisão. Lembre-se de que variáveis de ponto flutuante podem introduzir erros de precisão. Use double para maior precisão quando necessário.
};