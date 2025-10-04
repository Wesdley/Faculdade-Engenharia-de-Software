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
        class Pessoa {
            var $nome;
            var $idade;

            public function __construct(){ }
            
            public function setNome($nome) {
                $this->nome = $nome;
            }

            public function getNome() {
                return $this->nome;
            }

            public function setIdade($idade) {
                $this->idade = $idade;
            }

            public function getIdade() {
                return $this->idade;
            }
        }

        /* explicações da aula

            // instanciando um objeto da classe Fruta
            $fruta1 = new Fruta(); 
            // utilizando o objeto criado para chamar o método “setNome”
            $fruta1->setNome("morango"); 
            // utilizando o objeto criado para chamar o método “setTipo”
            $fruta1->setTipo("vermelha");
            // utilizando o comando “echo” para imprimir o resultado da chamada ao método “getNome” 
            echo $fruta1->getNome(); 
            // utilizando o comando “echo” para imprimir o resultado da chamada ao método “getTipo” 
            echo $fruta1->getTipo(); 

        */
        $pessoa = new Pessoa(); // iniciamos um objeto da classe pessoa
        $pessoa->setNome("Dley"); // damos o nome ao objeto
        $pessoa->setIdade("24"); // colocamos sua idade
        echo "Nome: " . $pessoa->getNome() . "<br>"; // fazemos um echo para imprimir o nome
        echo "Idade: " . $pessoa->getIdade(); // fazemos um echo para imprimir a idade
        ?>
</body>
</html>