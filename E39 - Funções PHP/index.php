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
        // formato simples para calcular a soma de dois números
        $num1 = 10;
        $num2 = 25;
        $num3 = soma($num1 + $num2);
        echo $num3;

        //função para somar dois números
        
        $num1 = 10;
        $num2 = 25;
        $num3 = soma($num1, $num2); // chamando a função soma e dando os parâmetros
        imprimir($num3); // chamando a função imprimir e dando o parâmetro
        
        function soma($numero1, $numero2) {
            return $numero1 + $numero2; // retorna a soma dos dois números
        }
        function imprimir($resultado) {
            echo $resultado; // imprime o resultado
        }
    ?>
</body>
</html>