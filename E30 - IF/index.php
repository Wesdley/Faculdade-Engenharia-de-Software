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
        $var1 = 10;
        $var2 = 20;
        if ($var1 > $var2) {
            echo "<p>Var1 com: $var1 é maior que var2 com: $var2</p>";
        }elseif ($var2 > $var1) {
            echo "<p>Var2 com o valor: $var2 é maior que var1 com: $var1</p>";
        }else {
            echo "As condições não são verdadeiras!";
        }
    ?>
</body>
</html>