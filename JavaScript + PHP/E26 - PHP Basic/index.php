<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>PHP Basic</h1>
    <?php
        $nome = "Wesdley";
        echo "Meu nome é: $nome";
        //phpinfo()

        echo "Olá, mundo\n"; // \n é uma quebra de linha apenas para o console, para o navegador é <br>
        $var1 = 2 + 2;
        echo "O Resultado da soma é igual a: " . $var1;

        $_nomeCurso = "Programação de Páginas Dinâmicas com PHP"; // podemos chamar as variaveis com underline no inicio sem problemas
        $ano_criacao = 1994;
        $flagLinguagemScript = true;
    ?>
</body>
</html>