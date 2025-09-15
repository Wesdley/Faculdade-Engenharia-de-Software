const executar = () => {
    const v1 = eval(document.getElementById("v1"));
    const v2 = eval(document.getElementById("v2"));
    let altura = Number(v1.value);
    let peso = Number(v2.value);
    const v_imc = imc(peso,altura);
    const v_sit = situacao(v_imc);
    alert(`IMC: ${v_imc.toFixed(2)} :: Situação ${v_sit}`);
}


// essa aula deu errado, mas vou tentar fazer sozinho