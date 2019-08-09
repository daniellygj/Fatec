package sw;

import java.util.List;
import java.util.LinkedList;

import com.db4o.Db4oEmbedded;
import com.db4o.ObjectContainer;
import com.db4o.ObjectSet;
import com.db4o.query.Query;

public class Model {
	ObjectContainer personagens = Db4oEmbedded.openFile(Db4oEmbedded.newConfiguration(), "bd/Personagens.db4o");
	ObjectContainer usuarios = Db4oEmbedded.openFile(Db4oEmbedded.newConfiguration(), "bd/Usuarios.db4o");

	public List<Personagem> buscarPersonagemLadoForca (String ladoForca) {
		List<Personagem> personagensEncontrados = new LinkedList<>();

		Query query = personagens.query();
		query.constrain(Personagem.class);
		ObjectSet<Personagem> todosPersonagens = query.execute();

		for (Personagem personagem : todosPersonagens) {
			if (personagem.getLadoForca().toLowerCase().equals(ladoForca.toLowerCase())) {
				personagensEncontrados.add(personagem);
			}
		}
		return personagensEncontrados;
	}

	public List<Personagem> buscarPersonagemPlaneta(String nomePlaneta) {
		List<Personagem> personagensEncontrados = new LinkedList<>();

		Query query = personagens.query();
		query.constrain(Personagem.class);
		ObjectSet<Personagem> todosPersonagens = query.execute();

		for (Personagem personagem : todosPersonagens) {
			if (personagem.getPlaneta().getNome().toLowerCase().equals(nomePlaneta.toLowerCase())) {
				personagensEncontrados.add(personagem);
			}
		}
		return personagensEncontrados;
	}

	public List<Personagem> buscarPersonagemNome(String nome) {
		List<Personagem> personagensEncontrados = new LinkedList<>();

		Query query = personagens.query();
		query.constrain(Personagem.class);
		ObjectSet<Personagem> todosPersonagens = query.execute();

		for (Personagem personagem : todosPersonagens) {
			if(personagem.getNome().toLowerCase().equals(nome.toLowerCase()))
				personagensEncontrados.add(personagem);
		}
		return personagensEncontrados;
	}

	public List<Personagem> buscarPersonagemTudo(String nome, String ladoForca, String planeta) {
		List<Personagem> personagensEncontrados = new LinkedList<>();

		Query query = personagens.query();
		query.constrain(Personagem.class);
		ObjectSet<Personagem> todosPersonagens = query.execute();

		for (Personagem personagem : todosPersonagens) {
			if(personagem.getNome().equals(nome) && personagem.getPlaneta().getNome().equals(planeta) && personagem.getLadoForca().equals(ladoForca))
				personagensEncontrados.add(personagem);
		}
		return personagensEncontrados;
	}

	public void adicionarPersonagem(Personagem novoPersonagem) {
		novoPersonagem.setId(generateCharId());

		personagens.store(novoPersonagem);
		personagens.commit();
	}

	public List<Personagem> buscarTodosPersonagens() {
		Query query = personagens.query();
		query.constrain(Personagem.class);
		ObjectSet<Personagem> todosPersonagens = query.execute();

		return todosPersonagens;
	}

	public void excluirPersonagem(String nome, String ladoForca, String planeta){
		Query query = personagens.query();
		query.constrain(Personagem.class);

		List<Personagem> todosPersonagens = query.execute();

		for (Personagem personagem:todosPersonagens) {
			if (personagem.getLadoForca().equals(ladoForca) && personagem.getNome().equals(nome) && personagem.getPlaneta().getNome().equals(planeta)){
				personagens.delete(personagem);
				personagens.commit();
			}
		}
	}

	public Usuario buscarUsuario(Usuario novoUsuario) {
		Query query = usuarios.query();
		query.constrain(Usuario.class);

		List<Usuario> todosUsuarios = query.execute();

		for (Usuario usuario:todosUsuarios) {
			if (usuario.getNick().equals(novoUsuario.getNick())){
				return novoUsuario;
			}
		}
		return null;
	}

	public Usuario cadastrarusuario(Usuario novoUsuario) {
		if (buscarUsuario(novoUsuario) == null) {
			novoUsuario.setId(generateUserId());

			usuarios.store(novoUsuario);
			usuarios.commit();

			return novoUsuario;
		}
		return null;
	}

	public List<Usuario> listarUsuarios() {
		Query query = usuarios.query();
		query.constrain(Usuario.class);
		ObjectSet<Usuario> todosUsuarios = query.execute();

		return todosUsuarios;
	}

	int generateUserId() {
		List<Usuario> usuarios =  listarUsuarios();
		int count = 0;

		for (Usuario usuario: usuarios) {
			count++;
		}

		return count;
	}


	int generateCharId() {
		List<Personagem> personagens =  buscarTodosPersonagens();
		int count = 0;

		for (Personagem personagem: personagens) {
			count++;
		}
		return count;
	}

	Personagem editarPersonagem(Personagem personagemEditado) {
		List<Personagem> personagens =  buscarTodosPersonagens();

		for (Personagem personagem: personagens) {
			if (personagem.getId() == personagemEditado.getId()) {
				Query query = this.personagens.query();
				query.constrain(Personagem.class);

				query.descend("id").constrain(personagemEditado.getId());
				ObjectSet result = query.execute();
				Personagem presult = (Personagem) result.next();

				presult.setEspecie(personagemEditado.getEspecie());
				presult.setLadoForca(personagemEditado.getLadoForca());
				presult.setNome(personagemEditado.getNome());
				presult.setPlaneta(personagemEditado.getPlaneta());

				this.personagens.store(presult);
				this.personagens.commit();

				break;
			}
		}

		return personagemEditado;
	}
}
