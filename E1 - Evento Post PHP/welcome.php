<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="welcome.php" method="post">
        <p>Nome: </p><input type="text" name="Nome">
        <p>Email: </p><input type="text" name="Email">
        <input type="submit" value="enviar">
    </form>
    <?php
        echo "<br/>";
        $nome = $_POST['Nome'];
        $email = $_POST['Email'];

        echo "Os dados recebidos no form";
        echo "<br/>";
        echo "Nome:    " . $nome;
        echo "<br/>";
        echo "Email:    " . $email;
    ?>
</body>
</html>