
$(document).ready(function(){
    $("#login").click(function() {
        var nome = $('#login_nome').val();
        var senha = $('#login_senha').val();

        var url = "/StarWars/buscarusuario/" + nome + "/" + senha;

        $.getJSON(url, function(data) {
            console.log(data);
            window.location.replace("/conteudo.html");
        });
    });
});