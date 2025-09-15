let valores = [];

const addValor = (x) => {
    valores.push([valores.length+1,x]);
}

const media = () => {
    let soma = 0;
    for(x of valores) {
        soma += x[1];
        return soma / valores.length;
    }
}

const drawChart = () => {

        // Create the data table.
        var data = new google.visualization.DataTable();
        data.addColumn('number', 'Pos');
        data.addColumn('number', 'X');
        data.addRows(valores);

        // Set chart options
        var options = {hAxis: {'title':'Posição','width':400,'height':300}, vAxis: {'title':'Valore de X'}};

        // Instantiate and draw our chart, passing in some options.
        var chart = new google.visualization.LineChart(document.getElementById('chart_div'));
        chart.draw(data, options);
      }

const executar = () => {
    const x = Number(document.getElementById("v1").value);
    addValor(x);
    google.charts.load('current', {'packages':['corechart','line']});
    google.charts.setOnLoadCallback(drawChart);
    document.getElementById("media").innerHTML = `Media: ${media()}`
}
