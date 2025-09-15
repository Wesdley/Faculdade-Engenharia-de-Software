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
        while ($i <= 10) {
            echo $i;
            $i += 1;
            echo "\n";
        }

        // sintaxe alternativa para HTML e PHP
        $i = 0;
        while ($i <= 10):
            echo $i;
            $i += 1;
            echo "\n";
        endwhile;
    ?>
</body>
</html>