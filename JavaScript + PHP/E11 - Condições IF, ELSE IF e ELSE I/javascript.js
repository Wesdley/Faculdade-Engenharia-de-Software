const num = document.getElementById("numero");

const executar = () => {
    const valor = Number(num.valor); // precisamos sempre transformar a string ou input em um valor, caso esteja utilizando valores
    // Number transforma a string em numro
    // valor pega o valor do input
    if (valor >= 50) {
    alert("Nosso valorero é maior ou igual a 10!");
    }else if (valor <= 25) {
    alert("Nosso numero é maior ou igual a 25!");
    } else {
    alert("Nosso numero é menor que 25!");
    }
}
