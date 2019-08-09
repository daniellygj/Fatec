$(document).ready(function(){
    atualizaCamposAdicionar()
    buscar();

    $.getJSON("/StarWars/usuarios", function(data) {

        data.forEach(function(item){
            var sla = "usuario: " + item.nick +  " Senha: " + item.senha
        });
    });

    $('.checkAll').on('click', function () {
      $(this).closest('table').find('tbody :checkbox')
        .prop('checked', this.checked)
        .closest('tr').toggleClass('selected', this.checked);
    });

    $("#salvar").click(function() {
       var ladoForca = $('#campo_ladoForca').val();
       var nome = $('#campo_nome').val();
       var especie = $('#campo_especie').val();
       var planeta = $('#campo_planeta').val();
       var planetaRegiao = $('#campo_planeta_regiao').val();

       if (ladoForca && nome && planeta) {
           var url = "/add/StarWars/Personagem/" + nome + "/" + ladoForca + "/"  + especie + "/" + planeta + "/" + planetaRegiao

           $.getJSON(url, function(data) {
               $("#campo_ladoForca").val("Escolha o lado da força");
               $("#campo_nome").val("");
               $("#campo_especie").val("");
               $("#campo_planeta").val("");
               $("#campo_planeta_regiao").val("");

               alert("Personagem adicionado!");
           });
       }

       atualizaCamposAdicionar();
   });

    $("#excluir").click(function() {
        var checkboxes = $('tbody :checkbox');

        for (var i = 0, l = checkboxes.length; i < l; i++) {
            if (checkboxes[i].checked) {
                var url = "/delete/StarWars/" + $(checkboxes[i]).attr('name') + "/" + $(checkboxes[i]).attr('lado-forca') + "/" + $(checkboxes[i]).attr('planeta')

                 $.getJSON(url, function(data) {
                    buscar();

                 });
            }
        }
    });

    $("#editar").click(function() {
        var radio = $('tbody :radio');

        for (var i = 0, l = radio.length; i < l; i++) {
            if (radio[i].checked) {
               url = "/StarWars/Personagem/" + $(radio[i]).attr("nome") + "/" + $(radio[i]).attr("lado-forca") + "/" + $(radio[i]).attr("planeta")

               $.getJSON(url , function(data) {
                data = JSON.stringify(data);

                    url = '/editar.html?' + encodeURIComponent(data);
                    document.location.href = url;
                });
            }
        }
    });

    $("#busca").click(function() {
        buscar();
    });

});

function limparCampos() {
    $("#ladoForca").empty();
    $("#planeta").empty();
    $("#nome").empty();
    $("#campo_ladoForca").empty();
    $("#ladoForca").empty();
}

function atualizaCamposBuscar() {
    limparCampos();

    $.getJSON("/StarWars/todosPersonagens", function(listaPersonagens) {

        var nome = [], ladoForca = [], planeta = [];

        var selectLadoForca = $("#ladoForca");
        var selectPlaneta = $("#planeta");
        var selectNome = $("#nome");

        selectLadoForca.append(`
             <option value="">
                 Selecione o Lado da Força
             </option>
        `);

         selectNome.append(`
             <option value="">
                 Selecione o Personagem
             </option>
         `);

          selectPlaneta.append(`
              <option value="">
                  Selecione o planeta
              </option>
          `);


        listaPersonagens.forEach(function(personagem) {

            if (nome.indexOf(personagem.nome) == -1) {
                nome.push(personagem.nome);

                selectNome.append(`
                    <option value="${personagem.nome}">
                        ${personagem.nome}
                    </option>
                `);
             }

            if (planeta.indexOf(personagem.planeta.nome) == -1) {
                planeta.push(personagem.planeta.nome);

                selectPlaneta.append(`
                    <option value="${personagem.planeta.nome}">
                        ${personagem.planeta.nome}
                    </option>
                `);
            }
        });

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
    });
}

function atualizaCamposAdicionar() {
    limparCampos();

    $.getJSON("/StarWars/todosPersonagens", function(listaPersonagens) {

        var ladoForca = [];

        var selectLadoForcaCampo = $("#campo_ladoForca");

        selectLadoForcaCampo.append(`
             <option value="">
                 Selecione o Lado da Força
             </option>
        `);

        selectLadoForcaCampo.append(`
            <option value="Negro">
                Negro
            </option>
        `);

        selectLadoForcaCampo.append(`
            <option value="Luz">
                Luz
            </option>
        `);
    });

}

function atualizaTabela(url) {
    $.getJSON(url, function(data) {
        var itens = [];

        data.forEach(function(item){
            var checkbox = $('<input type="checkbox" name="' + item.nome + '" lado-forca="' + item.ladoForca + '" planeta="' + item.planeta.nome + '">');

               var html = `
                    <tr>
                        <td>${item.nome}</td>
                        <td>${item.ladoForca}</td>
                        <td>${item.especie}</td>
                        <td>${item.planeta.nome}</td>
                        <td>${item.planeta.regiao}</td>
                        <td>
                            <input type="radio" name="editarPersonagem" nome="${item.nome}" lado-forca="${item.ladoForca}" planeta="${item.planeta.nome}" regiao="${item.planeta.regiao}">
                        </td>
                        <td>
                            <input type="checkbox" name="${item.nome}" lado-forca="${item.ladoForca}" planeta="${item.planeta.nome}" class="esse-check-aqui-oh"/>
                        </td>
                    </tr>
               `;
                itens.push(html);
        });

        $("#dadosPersonagem").append(itens);
        $.each($('.esse-check-aqui-oh'),function(){
            $(this).on('click', function () {
              $(this).closest('tr').toggleClass('selected', this.checked); //Classe de seleção na row
              $(this).closest('table').find('.checkAll').prop('checked', ($(this).closest('table').find('tbody :checkbox:checked').length == $(this).closest('table').find('tbody :checkbox').length)); //Tira / coloca a seleção no .checkAll
            });
        });
    });
}

function buscar() {
    var nome = $("#nome option:selected" ).val();
    var ladoForca = $('#ladoForca option:selected').val();
    var planeta = $('#planeta option:selected').val();

    $("#dadosPersonagem").empty();

    var url = '';

    if (!ladoForca && nome && !planeta) {
        url = "/StarWars/Personagem/nome/" + nome;
    } else if (ladoForca && !nome && !planeta) {
        url = "/StarWars/Personagem/ladoForca/" + ladoForca;
    } else if (!ladoForca && !nome && planeta) {
        url = "/StarWars/Personagem/Planeta/" + planeta;
    } else if (ladoForca && nome && planeta) {
        url = "/StarWars/Personagem/" + nome + '/' + ladoForca + '/' + planeta;
    } else {
        url = "/StarWars/todosPersonagens";
    }

    atualizaTabela(url);
    atualizaCamposBuscar();
}

