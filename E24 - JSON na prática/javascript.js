const url = "https://randomuser.me/api/?results=10";
// damos a url da API
async function getUsers (lista) {
    // criamos uma função assíncrona para pegar os dados da API
    const resp = await fetch(url); // usamos fetch para pegar os dados da API diretamente sem ir passando pelos doom
    const objeto = await resp.json(); // transferimos os dados para o json
    let itens = ""; //criamos uma variável para ir armazenando os itens da lista
    for (let pessoa of objeto.results){
        itens += `<li>${pessoa.name.first} ${pessoa.name.last}<li/>`; // para cada pessoa do objeto, pegamos o primeiro e o último nome e criamos uma li
    }
    document.getElementById(lista).innerHTML = itens; // colocamos o conteúdo da variável itens dentro da ul
}