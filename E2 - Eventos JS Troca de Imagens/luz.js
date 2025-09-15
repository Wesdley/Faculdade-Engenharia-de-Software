window.onload = function () {
    const acender = document.getElementById('acender');
    const apague = document.getElementById('apague');
    const imagem = document.getElementById('imagem');

    apague.addEventListener('click', function (){
        imagem.src = 'img/image apagada.png'
    });
    acender.addEventListener('click', function() {
        imagem.src = 'img/image acesa.png'
    })
}