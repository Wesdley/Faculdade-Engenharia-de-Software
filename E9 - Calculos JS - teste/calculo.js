/*

const numero1 = document.getElementById('1');
const numero2 = document.getElementById('2');
const op = document.getElementById("operador");
const enviar = document.getElementById("enviar");
const soma = document.getElementById("soma");

const f = () => {
    let c = Number(numero1.value) + Number(numero2.value);
    soma.innerHTML = c;
    console.log(c);
};

enviar.addEventListener("click", f);

*/

// PROJETO 2

const numero1 = document.getElementById("1");
const numero2 = document.getElementById("2");
const operador = document.getElementById("operador");
const enviar = document.getElementById("enviar");
const soma = document.getElementById("soma");

const f = () => {
    let n1 = Number(numero1.value);
    let n2 = Number(numero2.value);
    let op = operador.value;
    let c;

    if (op === "+") c = n1 + n2;
    else if (op === "-") c = n1 - n2;
    else if (op === "*") c = n1 * n2;
    else if (op === "/") c = n1 / n2;
    else c = "Operador invalido"

    soma.innerHTML = c;
};

enviar.addEventListener("click", f);