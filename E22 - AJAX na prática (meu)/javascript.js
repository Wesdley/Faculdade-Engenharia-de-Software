const executar = () => {
    let url = "https://dog.ceo/api/breeds/image/random";
    fetch(url,{method: 'GET'}).then(function(response){
        response.json().then(function(data){
            let img = document.getElementById("img")
            img.src = data.message;
            // pequeno erro de HTML que me deu dor de cabeça. Divs não aceitam o atributo SRC, somente IMG.
            // Por isso mudei a div para img.
        })
    })
    .catch(function(err){
        console.log("Houve um erro: " + err);
    })
}