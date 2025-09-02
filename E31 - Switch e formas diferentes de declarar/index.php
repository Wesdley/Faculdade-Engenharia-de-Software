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
        $var1 = 20;
        switch($var1){
            case 10:
                echo "<p>O valor da variável é 10</p>";
                break;
            case 20:
                echo "<p>O valor da variável é 15</p>";
                break;
            default:
                echo "<p>O valor da variável não é 10 nem 20!</p>";
                break;
        };

        $var1 = 0;
        $var2 = ($var1 >= 10) ? 11 : 9; // caso a condição seja verdadeira, var2 receberá 11, caso contrário, 9
        echo $var2; //imprimirá 11

        $var = 10;
        $var2 = 10;

        if($var1 > $var2):
            echo "$var1 é maior que $var2";
        elseif($var1 < $var2):
            echo "$var1 é menor que $var2";
        else:
            echo "$var1 e $var2 são iguais";
        endif; // formas diferentes de declarar estruturas condicionais em PHP e HTML 
    ?>
</body>
</html>