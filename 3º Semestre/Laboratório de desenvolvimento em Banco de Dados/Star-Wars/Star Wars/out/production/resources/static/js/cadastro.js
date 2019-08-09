$(document).ready(function(){
    $("#login").click(function() {
        var nome = $('#login_nome').val();
        var senha = $('#login_senha').val();

        var url = "/StarWars/buscarusuario/" + nome + "/" + senha;

        $.getJSON(url, function(data) {
            window.location.replace("/conteudo.html");
        });

    });

    $("#cadastrar").click(function() {
        var nome = $('#cadastro_nome').val();
        var senha = $('#cadastro_senha').val();
        var confirmacaoSenha = $('#cadastro_confirmacaosenha').val();

        if (nome != "" && senha != "" && confirmacaoSenha != ""){
            if (senha == confirmacaoSenha) {
                var verificaUsuario = "/StarWars/buscarusuario/" + nome + "/" + senha;
                var url = "/StarWars/cadastrarusuario/" + nome + "/" + senha;


                $.getJSON(url, function(data) {
                    $('#cadastro_nome').val("");
                    $('#cadastro_senha').val("");
                    $('#cadastro_confirmacaosenha').val("");
                });
                    alert("Cadastro realizado com sucesso!")
                    window.location.replace("/index.html");
            } else {
                alert("As senhas não coincidem.")
            }
        } else {
            alert("Preencha todos os campos.")
        }
    });
});
