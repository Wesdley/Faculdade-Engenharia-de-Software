<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Tittle GET e POST</h1>
    <form action="" method="post">
        <p>Nome: </p><input type="text" name="Nome">
        <p>Email: </p><input type="text" name="Email">
        <input type="submit" value="enviar">
    </form>
    <form action="" method="get">
        <p>Nome: </p><input type="text" name="Nome">
        <p>Email: </p><input type="text" name="Email">
        <input type="submit" value="enviar">
    </form>
    <?php
        $nome = $_POST['Nome'];
        $email = $_POST['Email'];
        if (isset($nome) && !empty($nome)) {
            echo "Meu nome é " . $nome "<br/>";
        };
        if (isset($email) && !empty($email)) {
            echo "Meu email é " . $email;
        };
        
        $nome = $_GET['Nome'];
        $email = $_GET['Email'];
        if (isset($nome) && !empty($nome)) {
            echo "Meu nome é " . $nome "<br/>";
        };
        if (isset($email) && !empty($email)) {
            echo "Meu email é " . $email;
        };
    ?>
</body>
</html>