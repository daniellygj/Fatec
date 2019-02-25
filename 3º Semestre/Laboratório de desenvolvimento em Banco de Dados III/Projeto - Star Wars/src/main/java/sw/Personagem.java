package sw;

public class Personagem {
	private int id;
	private String bordao;
	private String ladoForca;
	private String habilidadePrincipal;
	private float altura;
	private String nome;
	
	private Veiculo veiculo;
	private Afiliacao afiliacao;
	private Planeta planeta_natal;
	private Biologico biologico;
	private Robotico robotico;
	private Arma arma;
	
	
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Planeta getPlaneta_natal() {
		return planeta_natal;
	}
	public void setPlaneta_natal(Planeta planeta_natal) {
		this.planeta_natal = planeta_natal;
	}
	public Biologico getBiologico() {
		return biologico;
	}
	public Arma getArma() {
		return arma;
	}
	public void setArma(Arma arma) {
		this.arma = arma;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getBordao() {
		return bordao;
	}
	public void setBordao(String bordao) {
		this.bordao = bordao;
	}
	public String getLadoForca() {
		return ladoForca;
	}
	public void setLadoForca(String ladoForca) {
		this.ladoForca = ladoForca;
	}
	public String getHabilidadePrincipal() {
		return habilidadePrincipal;
	}
	public void setHabilidadePrincipal(String habilidadePrincipal) {
		this.habilidadePrincipal = habilidadePrincipal;
	}
	public float getAltura() {
		return altura;
	}
	public void setAltura(float altura) {
		this.altura = altura;
	}
	public Veiculo getVeiculo() {
		return veiculo;
	}
	public void setVeiculo(Veiculo veiculo) {
		this.veiculo = veiculo;
	}
	public Afiliacao getAfiliacao() {
		return afiliacao;
	}
	public void setAfiliacao(Afiliacao afiliacao) {
		this.afiliacao = afiliacao;
	}
	public void setBiologico(Biologico biologico) {
		this.biologico = biologico;
	}
	public Robotico getRobotico() {
		return robotico;
	}
	public void setRobotico(Robotico robotico) {
		this.robotico = robotico;
	}

	
}


	

