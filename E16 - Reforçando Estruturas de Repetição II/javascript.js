let somaTotal = 0;
const qtdeInteracoes = 150;
for (let i = qtdeInteracoes; i >= 1; i--){
    somaTotal += i; // equivalente a utilizar somaTotal = somaTotal + i
}
console.log('soma total:',somaTotal);
document.getElementById('resp').innerHTML = `${somaTotal}`
