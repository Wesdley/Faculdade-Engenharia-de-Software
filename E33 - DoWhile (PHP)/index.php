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
        $i = 0;
        do {
            echo $i;
            $i += 1;
            echo "\n";
        } while ($i < 10); // faz a verficação depois de executar o bloco logo indo de 0 a 9
    ?>
</body>
</html>