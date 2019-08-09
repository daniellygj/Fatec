$(document).ready(function(){

    var url = window.location;
    var decodedUrl = decodeURIComponent(url);

    decodedUrl = decodedUrl.replace('http://localhost:8081/editar.html?', '')
//    decodedUrl = decodedUrl.replace(']', '');

    data = JSON.parse(decodedUrl)[0];
    console.log(data);

    atualizaCampoLadoForca();

    $("#editarNomePersonagem").val(data.nome);
    $("#editarLadoForca").val(data.ladoForca);
    $("#editarEspecie").val(data.especie);
    $("#editarPlaneta").val(data.planeta.nome);
    $("#editarRegiao").val(data.planeta.regiao);

    $("#salvar").click(function() {
    console.log("bksnlfjsd")
        var nome = $("#editarNomePersonagem").val();
        var ladoForca = $("#editarLadoForca").val();
        var especie = $("#editarEspecie").val();
        var planeta = $("#editarPlaneta").val();
        var regiao = $("#editarRegiao").val();

        var url = "/StarWars/editarPersonagem/" + nome + "/"  + ladoForca + "/" + especie + "/" + planeta + "/" + regiao + "/" + data.id;
        $.getJSON(url, function(data) {
            console.log("dksnlfjsd")
        });

        window.location.replace("/conteudo.html");

    });

});



function atualizaCampoLadoForca() {
    $("#editarLadoForca").empty();

    var selectLadoForca = $("#editarLadoForca");

    selectLadoForca.append(`
         <option value="Negro">
             Negro
         </option>
    `);

    selectLadoForca.append(`
         <option value="Luz">
             Luz
         </option>
    `);
}
