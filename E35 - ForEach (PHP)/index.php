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
        $nome = ["Dley", "Ana", "João", "Maria", "Pedro"]; // cria um array com 5 nomes para o nosso exemplo
        foreach ($nome as $n) { // para cada elemento do array $nome, atribua o valor do elemento a variável $n
            echo $n;
            echo "\n";
        }

        for ($i = 0; $i < count($nome); $i++) { // outra forma de fazer o mesmo usando o for, count() retorna a quantidade de elementos do array
            echo $nome[$i];
            echo "\n";
        }
    ?>
</body>
</html>