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
        $alunos = array (
            array("joão", 7, 8, 9),
            array("maria", 6, 7, 8),
            array("pedro", 5, 6, 7),
            array("ana", 4, 5, 6)
        );
        // aplicamos um array multidimensional, onde cada posição do array principal contém outro array com os dados do aluno e suas notas

        echo $alunos[0][0].": P1: ".$alunos[0][1].": P2: ".$alunos[0][2].": P3: ".$alunos[0][3]."<br>";
        echo $alunos[1][0].": P1: ".$alunos[1][1].": P2: ".$alunos[1][2].": P3: ".$alunos[1][3]."<br>";
        echo $alunos[2][0].": P1: ".$alunos[2][1].": P2: ".$alunos[2][2].": P3: ".$alunos[2][3]."<br>";
        echo $alunos[3][0].": P1: ".$alunos[3][1].": P2: ".$alunos[3][2].": P3: ".$alunos[3][3]."<br>";

        foreach ($alunos as $i) {
            $media = ($i[1] + $i[2] + $i[3]) / 3;
            echo $i[0].": P1: ".$i[1].": P2: ".$i[2].": P3: ".$i[3]." Media: ".number_format($media, 2). "<br>";
        }

        //podemos automatizar o calculo da media com um loop
        //number_format() formata o numero, no caso para 2 casas decimais (caso o aluno tire notas quebradas)
        //o foreach percorre o array principal, e a cada interação ele atribui o valor do array interno (do aluno) para a variavel $i
        // assim podemos acessar os dados do aluno com $i[0] (nome), $i[1] (nota 1), $i[2] (nota 2) e $i[3] (nota 3)
        // e calcular a media com a formula ($i[1] + $i[2] + $i[3]) / 3 (dividindo por 3, que é a quantidade de notas e não por 4 que é a quantidade de elementos do array)
    ?>
</body>
</html>