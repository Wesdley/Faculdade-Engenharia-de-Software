<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome</title>

    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="center">
        <p>Welcome: <?php echo $_POST["nome"]?></p><br>
        <p>Seja bem vindo! Seu email de acesso é: <?php echo $_POST["email"] ?></p>
    </div>
</body>
</html>