<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <?php 

        $var1 = 4; //a variável foi inicializada com o valor de 4
        $var1 += 2; //com a utilização da combinação de operadores a variável $var1 passou a ter o valor de 6 (4 + 2)
        $var1 *= 2; //com a utilização da combinação de operadores a variável $var1 passou a ter o valor de 12 (4 + 2) * 2

        $var2 = "Programação";
        $var2 .= " com PHP"; //com a utilização da combinação de operadores a variável $var2 passou a ter o conteúdo "Programação com PHP"

        $var = ($var4 = "Copie esses códigos") . " e pratique seus conhecimentos!" ;
        /*
        No exemplo acima o conteúdo da variável $var3 é igual a "Copie esses códigos e pratique seus conhecimentos!"
        Já a variável $var4 possui o conteúdo "Copie esses códigos"
        */

        //Operadores de comparação

        $var1 == $var2; //igualdade
        $var1 === $var2; //exatamente igual tanto de tipo quanto de valor
        $var1 != $var2; //diferença
        $var1 <> $var2; //diferença
        $var1 !== $var2; //exatamente diferente tanto de tipo quanto de valor
        $var1 < $var2; //menor que
        $var1 > $var2; //maior que
        $var1 <= $var2; //menor ou igual a
        $var1 >= $var2; //maior ou igual a

        //Operadores lógicos

        $var1 and $var2; //Se ambas as variáveis forem verdadeiras
        $var1 && $var2; //Se ambas as variáveis forem verdadeiras
        $var1 or $var2; //Se uma das variáveis for verdadeira
        $var1 xor $var2; //Se uma das variáveis for verdadeira, mas não ambas
        !$var1 // negação, ou seja, se a variável for falsa
        $var1 || $var2; //Se uma das variáveis for verdadeira
        
    ?>
</body>
</html>