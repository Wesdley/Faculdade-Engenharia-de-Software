function  ajax(nome,camada) {
    let url = "http://httpbin.org/get?text=" + nome;
    let xmlhttp = new XMLHttpRequest();
    xmlhttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            var resp = xmlhttp.responseText;
            document.getElementById(camada).innerHTML = resp;
        }
    }
    xmlhttp.open("GET", url, true);
    xmlhttp.send();
}