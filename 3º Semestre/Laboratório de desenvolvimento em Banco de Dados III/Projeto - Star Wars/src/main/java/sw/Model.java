package sw;

import java.util.List;
import java.util.LinkedList;

public class Model {
	private List<Afiliacao> afiliacoes = new LinkedList<Afiliacao>();
	private List<Arma> armas = new LinkedList<Arma>();
	private List<Planeta> planetas = new LinkedList<Planeta>();
	private List<Veiculo> veiculos = new LinkedList<Veiculo>();
	private List<Biologico> biologicos = new LinkedList<Biologico>();
	private List<Robotico> roboticos = new LinkedList<Robotico>();
	private List<Personagem> personagens = new LinkedList<Personagem>();
	
	
	public void addAfiliacao(Afiliacao afiliacao) {
		afiliacoes.add(afiliacao);
	}
	
	public void addArma(Arma arma) {
		armas.add(arma);
	}
	
	public void addPlaneta(Planeta planeta) {
		planetas.add(planeta);
	}
	
	public void addVeiculo(Veiculo veiculo) {
		veiculos.add(veiculo);
	}
	
	public void addBiologico(Biologico biologico) {
		biologicos.add(biologico);
	}
	
	public void addRobotico(Robotico robotico) {
		roboticos.add(robotico);
	}
	
	public void addPersonagem(Personagem personagem) {
		personagens.add(personagem);
	}
	
	public List<Afiliacao> buscarAfiliacao(String nome) {
		List<Afiliacao> afiliacoesEncontradas = new LinkedList<Afiliacao>();
		for(Afiliacao afiliacao:afiliacoes) {
			if(afiliacao.getNome().equals(nome)) 
				afiliacoesEncontradas.add(afiliacao);
		}
		return afiliacoesEncontradas;
	}
	
	public List<Arma> buscarArmaNome(String nome) {
		List<Arma> armasEncontradas = new LinkedList<Arma>();
		for(Arma arma:armas) {
			if(arma.getNome().equals(nome)) 
				armasEncontradas.add(arma);
		}
		return armasEncontradas;
	}
	
	public List<Planeta> buscarPlanetaNome(String nome) {
		List<Planeta> planetasEncontrados = new LinkedList<Planeta>();
		for(Planeta planeta:planetas) {
			if(planeta.getNome().equals(nome)) 
				planetasEncontrados.add(planeta);
		}
		return planetasEncontrados;
	}
	
	public List<Veiculo> buscarVeiculoModelo(String modelo) {
		List<Veiculo> veiculosEncontrados = new LinkedList<Veiculo>();
		for(Veiculo veiculo:veiculos) {
			if(veiculo.getModelo().equals(modelo)) 
				veiculosEncontrados.add(veiculo);
		}
		return veiculosEncontrados;
	}

	
	public Personagem buscarPersonagemNome(String nome) {
		Personagem personagemEncontrado = null;
		for(Personagem personagem:personagens) {
			if(personagem.getNome().equals(nome)) 
				personagemEncontrado = personagem;
		}
		return personagemEncontrado;
	}
	
	public List<Afiliacao> getAfiliacoes(){
		return afiliacoes;
	}
	public List<Arma> getArmas(){
		return armas;
	}
	public List<Planeta> getPlanetas(){
		return planetas;
	}
	public List<Veiculo> getVeiculos(){
		return veiculos;
	}
	public List<Biologico> getBiologicos(){
		return biologicos;
	}
	public List<Robotico> getRoboticoos(){
		return roboticos;
	}
	public List<Personagem> getPersonagens(){
		return personagens;
	}
	
	
	
}
