package sw;

import static java.lang.Integer.parseInt;
import static spark.Spark.get;
import static spark.Spark.post;

import com.google.gson.Gson;

import java.util.List;

public class Controller {

	private Model model;

	public Controller(Model model) {
		this.model = model;
	}

	public void buscarPersonagemNome() {
		get("/StarWars/Personagem/nome/:personagem", (req, res) -> {

			List<Personagem> personagensEncontrados = model.buscarPersonagemNome(req.params(":personagem"));
			return new Gson().toJson(personagensEncontrados);

		});
	}

	public void buscarPersonagemPlaneta() {
		get("/StarWars/Personagem/Planeta/:nome", (req, res) -> {

			List<Personagem> personagensEncontrados = model.buscarPersonagemPlaneta(req.params(":nome"));
			return new Gson().toJson(personagensEncontrados);

		});
	}


	public void buscarPersonagemLadoForca() {
		get("/StarWars/Personagem/ladoForca/:nome", (req, res) -> {

			List<Personagem> personagensEncontrados = model.buscarPersonagemLadoForca(req.params(":nome"));
			return new Gson().toJson(personagensEncontrados);

		});
	}

	public void buscarPersonagemTudo() {
		get("/StarWars/Personagem/:nome/:ladoForca/:planeta", (req, res) -> {

			List<Personagem> personagensEncontrados = model.buscarPersonagemTudo(req.params(":nome"), req.params(":ladoForca"), req.params(":planeta"));
			return new Gson().toJson(personagensEncontrados);

		});
	}

	public void buscarTodosPersonagens() {
		get("/StarWars/todosPersonagens", (req, res) ->
			new Gson().toJson(model.buscarTodosPersonagens())
		);
	}

	public void adicionarPersonagem() {
		get("/add/StarWars/Personagem/:nome/:ladoForca/:especie/:nomeplaneta/:regiao", (req, res) -> {

			model.adicionarPersonagem(new Personagem(req.params(":ladoForca"), req.params(":nome"), req.params(":especie"), new Planeta(req.params(":nomeplaneta"), req.params(":regiao"))));
			return new Gson().toJson(0);

		});
	}

	public void excluirPersonagem() {
		get("/delete/StarWars/:nome/:ladoForca/:planeta", (req, res) -> {

			model.excluirPersonagem(req.params(":nome"), req.params(":ladoForca"), req.params(":planeta"));
			return new Gson().toJson(0);

		});
	}

	public void cadastrarusuario() {
		get("/StarWars/cadastrarusuario/:nick/:senha", (req, res) -> {

			Usuario usuarioCadastrado = model.cadastrarusuario(new Usuario(req.params(":nick"), req.params(":senha")));
			return new Gson().toJson(usuarioCadastrado);

		});
	}

	public void listarUsuarios() {
		get("/StarWars/usuarios", (req, res) ->
				new Gson().toJson(model.listarUsuarios())
		);
	}

	public void buscarUsuario() {
		get("/StarWars/buscarusuario/:nick/:senha", (req, res) -> {

			Usuario usuariosEncontrados = model.buscarUsuario(new Usuario(req.params(":nick"), req.params(":senha")));
			return new Gson().toJson(usuariosEncontrados);

		});
	}

	public void editarPersonagem() {
		get("/StarWars/editarPersonagem/:nome/:ladoForca/:especie/:nomeplaneta/:regiao/:id", (req, res) -> {

			Personagem personagemEditado = model.editarPersonagem(
			new Personagem(req.params(":nome"), req.params(":ladoForca"), req.params(":especie"), new Planeta(req.params(":nomeplaneta"), req.params(":regiao")), parseInt(req.params(":id"))));


			return new Gson().toJson(personagemEditado);
		});

	}
}
