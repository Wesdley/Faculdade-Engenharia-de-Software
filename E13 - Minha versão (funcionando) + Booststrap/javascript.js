const peso = document.getElementById("peso");
const altura = document.getElementById("altura");

altura.addEventListener("input", () => {
    let valor = altura.value.replace(/\D/g, ""); // remove tudo que não é número
    if (valor.length > 1) {
        altura.value = valor[0] + "." + valor.slice(1); // insere ponto após o 1º dígito
    }
}); // estudar mais sobre essa parte length e replace


const executar = () => {
    //Houve um pequeno erro na qual os valores estavam sendo pego antes do click sendo que precisa ser depois do click
    const v1 = Number(peso.value);
    const v2 = Number(altura.value);
    const imc = v1 / (v2 * v2); // Nesse caso aqui temos que tomar cuidado com os valores colocados no input
    const calcular = document.getElementById("calcular");
    //console.log(imc.toFixed(2))
    // toFixed(2) serve para que mostre apenas os 2 primeiros numeros
    const mostrar = () => {
        if (imc <= 18.5) {
                return("Abaixo do peso")
            } else if (imc <= 30) {
                return("Levemente acima do peso")
            } else if (imc <= 35) {
                return("Obesidade de grau I")
            } else if (imc <= 40) {
                return("Obesidade de grau II (severa)")
            } else {
                return("Obesidade grau III (mórbida)")
            }
    }
    calcular.innerHTML = `<h2>Valor do seu IMC</h2>
    <p>Seu IMC é: <b>${imc.toFixed(2)}</b></p>
    <p>Sua situação atual é: <b>${mostrar()}</b></p>`;
};

/*
pegar os valores
efetuar os calculos
comparar com IF
classificalos e mostrar no layout
*/

/*
NOTAS DO QUE APRENDI

innerHTML não é uma função então não posso declarar com () e sim com = 

utilizar o const para efetuar o IF ou até mesmo uma function

transformar os valores do input em Number

declarar os valores dentro da função para que os números estejam disponiveis para o calculo
*/