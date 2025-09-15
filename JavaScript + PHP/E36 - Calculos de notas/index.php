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
        $notas = [9.2,8.0,2.3,8.1,5.0,7.2,5.2,10.0,6.5,4.3];
        $soma = 0; //para garantir que iremos somar com zero no inicio
        foreach($notas as $i){
            $soma += $i; //soma = soma + nota
        }
        $media = $soma / count($notas); //count() conta quantos elementos tem no arrays
        if ($media >= 7) {
            echo "<h1> A media foi maior que 7!! " .$media. " </h1>";
        } elseif ($media <= 6){
            echo "<h1> A media foi menor que 7!! " .$media. " </h1>";
        } else {
            echo "<h1> Oh Oh " .$media. " </h1>";
        }
    ?>
</body>
</html>