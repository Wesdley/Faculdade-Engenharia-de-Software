const primeiroNumero = () => {
    let numero1 = prompt("Insira o primeiro número: ");
    if (numero1 < 0) {
        alert("O número não pode ser negativo!");
        return primeiroNumero();
    } else {
        return numero1;
    }
};

const segundoNumero = () => {
    let numero2 = prompt("Insira o segundo número:");
    if (numero2 < 0){
        alert("O número não pode ser negativo!");
        return segundoNumero();
    }else {
        return numero2;
    }
};

const divida = () => {
    let resultado = 0;
    resultado = valor[0] / valor[1];
    return resultado;
};

let valor = [ ];
valor[0] = primeiroNumero();
valor[1] = segundoNumero();

let resultado = divida(valor);
alert('O resultado da divisão é:' + resultado);

