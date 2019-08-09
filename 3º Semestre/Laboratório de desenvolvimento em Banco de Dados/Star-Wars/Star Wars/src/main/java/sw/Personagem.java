package sw;

public class Personagem {
	private String nome;
	private String ladoForca;
	private String especie;
    private Planeta planeta;
    private int id;

	public Personagem (String ladoForca, String nome, String especie, Planeta planeta) {
		this.ladoForca = ladoForca;
		this.nome = nome;
		this.especie = especie;
		this.planeta = planeta;
		this.id = 0;
	}

	public Personagem (String ladoForca, String nome, String especie, Planeta planeta, int id) {
		this.ladoForca = ladoForca;
		this.nome = nome;
		this.especie = especie;
		this.planeta = planeta;
		this.id = id;
	}

	public Personagem(String nome, String ladoForca, Planeta planeta) {
		this.nome = nome;
		this.ladoForca = ladoForca;
		this.planeta = planeta;
		this.id = 0;
	}



	public Planeta getPlaneta() {
		return planeta;
	}
	public void setPlaneta(Planeta planeta) {
		this.planeta = planeta;
	}
	public String getEspecie() {
		return especie;
	}
	public void setEspecie(String especie) {
		this.especie = especie;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getLadoForca() {
		return ladoForca;
	}
	public void setLadoForca(String ladoForca) {
		this.ladoForca = ladoForca;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}
}

	

