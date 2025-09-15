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
        //criamos a função que calcula a média de dois números
        function soma($n1, $n2) {
            return ($n1 + $n2) /2;
        }

        //criamos um array com o nome e as notas de um aluno
        $alunos = array ("dley", 2.0,3.2);

        //chamamos a função soma e passamos as notas do aluno como parâmetros
        $media = soma($alunos[1], $alunos[2]); // uma duvida que eu tive foi os nomes serem diferente da chamada da função, mas elas vão ser copiadas para os parâmetros da função

        //imprimimos a média do aluno
        echo "A média do aluno " . $alunos[0] . " é: " . $media;

    ?>
</body>
</html>