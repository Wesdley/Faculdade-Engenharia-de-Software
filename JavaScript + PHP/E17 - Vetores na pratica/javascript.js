// formas de criar um vetor
let cores = ["Red","Blue","Green"]
let cores2 = new Array("Red","Blue","Green");
// podemos declarar eles de forma vazia para colocar os valores 
let cores3 = [];
let cores4 = new Array();
// para chamar o vetor
console.log(cores[2]);


// Comando for IN + vetor
const v1 = ["BMW","Volvo","Ford"];
let text = "";
for (let x in v1) {
    text += v1[x] + " ";// X é o index
}
document.getElementById("fiv").innerHTML = text;

let text2 = "";
for (let y of v1) {
    text2 += y + " "; // X é o vetor 
}
document.getElementById("fov").innerHTML = text2;
// geração de text com join
const valores =[1,3,4,7,8]
const saida = valores.join("::")
console.log(saida);
// Utilizando o sort para deixar o array ordenado
const sortir = () => {
    valores.sort();
    console.log(valores);
    console.log(`Valor na posoção 2: ${valores[2]}`)
}

sortir();
//Pega cada valor dentro do elemento e mostra seu index e element
const foreach1 = () => {
    valores.forEach((element,index) => console.log(`Valores: ${index}:${element}`));   
}

foreach1();

const somaDobro = valores.map((x) => x*2).reduce((a,b) => a+b); 
// map = pega cada valor dentro do index e faz ele vezes
// reduce = reduz os valores dentro do elemento somando eles
console.log("Valores: "+somaDobro);
// era para fazer uma varição entre 0 e 1, mas não ocorreu
const corestabela = ["Red", "Black", "Green"];
document.write("<table border='1'>")
for (let i = 1; i < 10; i++){
    document.write("<tr>")
    for (let j= 1; j < 10; j++){
    let pos = Math.floor(Math.random()*3);
    // no lugar de trunc por floor são a mesma coisa, porém o floor arredonda para cima enquanto o trunck joga para baixo
    document.write(`<td style='background-color:${corestabela[pos]};width:45px;height:45px;'>&nbsp;</td>`);
    }
    document.write("</tr>")
}
document.write("</table>")

const valbubble = [2,3,7,5,1]; //definimos valores
console.log(valbubble);

const bubble = (v) => { // criamos a função com seu parametro
    let ordenado = false; // dizemos que não está ordenado
    while(!ordenado){ // Loop para rodar até estar ordenado
        ordenado = true; // assume que já está ordenado, se houver troca vai ser trocado para false
        for (let i=1; i<v.length; i++){
            if(v[i-1]>v[i]){ // se o valor anterior for maior que o atual, então eles estão na ordem errada
                const aux = v[i]; v[i]=v[i-1];
                v[i-1] = aux; // criamos uma variavel auxiliar para guardar o valor na qual vai ser passado adianta e sendo salvo
                ordenado = false; // enquanto houver validação vai ser falso devido não estar ordenado
            }
        }
    }
}

bubble(valbubble); // executa a ordenação e mostra o resultado
console.log(valbubble);

//push adiciona o valor  no final
const v30 = [3,2,9,4,5];
console.log(v30);
v30.push(20);
console.log(v30);

// unshift vai adicionar no inicio do array
v30.unshift(893);
console.log(v30);

//shift vai remover o primeiro elemento
console.log(v30.shift());

//pop vai remover o elemento final
console.log(v30.pop());

// Vai juntar os arrays em apenas um
const array1 = ["Maria", "Carla"];
const array2 = ["Pedro", "Matheus"];
const array3 = ["Ana", "Lara"];

const arrayjunto = array1.concat(array2, array3);
document.getElementById("demo").innerHTML = arrayjunto;

// copia com slice 
const dias = ["Dom", "Seg", "Ter", "Qua", "Qui", "Sex", "Sab"];

const dias_uteis = dias.slice(1,6);
console.log(dias_uteis);

// Incluindo e tirando com Splice (Cuidado para não confundir com slice)

const vsplice = [1,2,3,4,5,6,7,8,9];
console.log(vsplice);
vsplice.splice(2,2); // a partir do 2 tire 3
console.log(vsplice);
vsplice.splice(2,0,"x","x"); // a partir do 2 tire 0 e adicione X
console.log(vsplice);