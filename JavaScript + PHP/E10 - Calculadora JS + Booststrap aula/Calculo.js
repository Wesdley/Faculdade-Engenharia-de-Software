function somar (n1,n2) {
    return n1+n2;
}

function subtrair (n1,n2) {
    return n1-n2;
}

function multiplicar (n1,n2) {
    return n1*n2;
}

function dividir (n1,n2) {
    if(n2 == 0) {
        alert("Divisão não pode ser dividida por 0!!");
        return "Erro";
    }
    return n1/n2;
}

function exponencial (n1,n2) {
    return Math.pow(n1,n2);
}