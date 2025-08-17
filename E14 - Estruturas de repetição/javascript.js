let contador;
for (contador = 0; contador <= 10; contador++) {
    const divfor = document.getElementById("for");
    divfor.innerHTML += `Print: ${contador}!<br>` //utilizando o += faz com que a linha seja adicionada
}

let enquanto = 0;
while (enquanto <= 10) {
    const divwhile = document.getElementById("while");
    divwhile.innerHTML += `Print: ${enquanto}<br>`;
    enquanto++;
}

// While condição testada no inicio
// Do While condição testada no final, ou seja, da o primeiro print antes de fazer a verificação 

let dowhile = 0;
do {
    const v2 = document.getElementById("dowhile");
    v2.innerHTML += `Print: ${dowhile}`;
    dowhile += 1; // outra forma de utilizar o ++
} while (dowhile < 0)

/* Assim como os demais laços em uma linguagem de programação, o “for/in” é bastante utilizado com arrays (vetor ou matriz contendo dados não ordenados).
Normalmente, precisamos percorrer o conteúdo de um array e manipular ou apenas exibir seu valor. Para isso, podemos usar laços.
*/

let frutas = ['Abacaxi','Morango','Pera'];
for (let i = 0; i < frutas.length; i++) {
    const frutas1 = document.getElementById("fortwo");
    frutas1.innerHTML += `O nome da fruta é: ${frutas[i]}<br>`
    //console.log(frutas[i]);
}

for (let fruta in frutas) {
    const frin = document.getElementById("forin");
    frin.innerHTML += `O nome da fruta é: ${frutas[fruta]}<br>`
}

/*
“for”
Definimos uma variável contador (“i”) e devemos percorrer o array “frutas” começando em seu índice 0 até seu tamanho (length).

“for/in”
Declaramos uma variável contador (“fruta”) e dizemos ao código que percorra o array imprimindo seu conteúdo a partir do índice fornecido – nesse caso, a variável “fruta”.
*/