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
        //Declarando um array vazio
        $carros = array();

        //Primeira forma de declaração e atribuição de valores
        $carros = Array("Fusca", "Monza", "Passat");

        //Segunda forma de declaração e atribuição de valores
        //Esta forma é semelhante à anterior, mas utilizando sintaxe similar a do Javascript
        $carros = ["Fusca", "Monza", "Passat"];

        //Terceira forma de declaração e atribuição de valores
        $carros[0] = "Fusca";
        $carros[1] = "Monza";
        $carros[2] = "Passat";

        //Quarta forma de declaração e atribuição de valores
        $carros[] = "Fusca";
        $carros[] = "Monza";
        $carros[] = "Passat";

         //Primeira forma
        $carros = array (
            'vw'        => "Fusca",
            'chevrolet' => "Monza",
            'fiat'      => "Tempra"
        );

        //Segunda forma
        $carros = [
            'vw'        => "Fusca",
            'chevrolet' => "Monza",
            'fiat'      => "Tempra"
        ];

        //Terceira forma
        $carros['vw']        = "Fusca";
        $carros['chevrolet'] = "Monza";
        $carros['fiat']      = "Tempra";

         $carros = array (
            'vw'        => "Fusca",
            0           => "Passat",
            'chevrolet' => "Monza",
            1           => "Chevette",
            'fiat'      => "Tempra",
            2           => "Uno"
        );
        print_r($carros); // ao usar vai gerar o codigo abaixo, se colocar-mos 'vw' vai sair fusca e se chamar o indice 0 vai sair passat
        //A impressão desse array gera a seguinte saída
        /*
        Array
        (
            [vw] => Fusca
            [0] => Passat
            [chevrolet] => Monza
            [1] => Chevette
            [fiat] => Tempra
            [2] => Uno
        )
        */

        //array_push (que adiciona elementos ao final de um array) e a array_unshift (adiciona elementos no início de um array).
        //unset e array_splice para remover elementos dentro de um array
        //count utilizada para retornar o tamanho do array, muito util usando com vetores
        //A função “array_splice” recebe como parâmetros o array a ser manipulado, o offset (índice a partir do qual desejamos excluir elementos) e o length (quantidade de itens que queremos excluir).

        
        $carros = array (
            'vw'        => "Fusca",
            0           => "Passat",
            'chevrolet' => "Monza",
            1           => "Chevette",
            'fiat'      => "Tempra",
            2           => "Uno"
        );
        print_r($carros);
        echo "O tamanho atual do array é: " . count($carros);
        echo "\n\n";
        //Definindo o valor do índice 0 como vazio
        $carros[0] = '';
        // print_r exibe informação sobre uma variável de uma forma legível para humanos.
        print_r($carros);
        echo "O tamanho atual do array é: " . count($carros);
        echo "\n\n";

        //Removendo dois elementos do array com unset
        unset($carros['fiat'], $carros[1]);

        print_r($carros);
        echo "O tamanho atual do array é: " . count($carros);
        echo "\n\n";

        //Removendo elementos do array com array_splice
        array_splice($carros, 1,2);

        print_r($carros);
        echo "O tamanho atual do array é: " . count($carros);
        

        // Arrays multidimensionais são arrays que possuem outros arrays em seus elementos.
        //Arrays multidimensionais podem ser declarados de forma semelhante aos arrays simples, mas com mais de um nível de profundidade.
        //Arrays multidimensionais são úteis para representar estruturas de dados mais complexas, como tabelas, matrizes ou qualquer outra coleção de dados que exija mais de uma dimensão.
        $frutas = array (
            "vermelhas" => array(
                "melancia",
                "cereja",
                "framboesa",
                "morango"
            ),

            "citricas" => array(
                "laranja",
                "limao",
                "abacaxi",
                "mexerica"
            ),
        );
    ?>
</body>
</html>