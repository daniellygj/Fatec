package Model;

public class Roupa {
	private String tipo_roupa, marca, sexo, cor, estacao, ocasiao, tipo_tecido, tamanho;
	private int fachetaria, qtd, id;
	
	public String getTipo_roupa() {
		return tipo_roupa;
	}
	
	public void setTipo_roupa(String tipo_roupa) {
		this.tipo_roupa = tipo_roupa;
	}
	
	public String getMarca() {
		return marca;
	}
	
	public void setMarca(String marca) {
		this.marca = marca;
	}
	
	public String getSexo() {
		return sexo;
	}
	
	public void setSexo(String sexo) {
		this.sexo = sexo;
	}
	
	public String getCor() {
		return cor;
	}
	
	public void setCor(String cor) {
		this.cor = cor;
	}
	
	public String getEstacao() {
		return estacao;
	}
	
	public void setEstacao(String estacao) {
		this.estacao = estacao;
	}
	
	public String getOcasiao() {
		return ocasiao;
	}
	
	public void setOcasiao(String ocasiao) {
		this.ocasiao = ocasiao;
	}
	
	public String getTipo_tecido() {
		return tipo_tecido;
	}
	
	public void setTipo_tecido(String tipo_tecido) {
		this.tipo_tecido = tipo_tecido;
	}
	
	public String getTamanho() {
		return tamanho;
	}
	
	public void setTamanho(String tamanho) {
		this.tamanho = tamanho;
	}
	
	public int getFachetaria() {
		return fachetaria;
	}
	
	public void setFachetaria(int fachetaria) {
		this.fachetaria = fachetaria;
	}
	
	public int getQtd() {
		return qtd;
	}
	
	public void setQtd(int qtd) {
		this.qtd = qtd;
	}
	
	public int getId() {
		return id;
	}
	
	public void setId(int id) {
		this.id = id;
	}
	
	public Roupa(String tipo_roupa, String marca, String sexo, String cor, String estacao, String ocasiao,
			String tipo_tecido, String tamanho, int fachetaria, int qtd, int id) {
		super();
		this.tipo_roupa = tipo_roupa;
		this.marca = marca;
		this.sexo = sexo;
		this.cor = cor;
		this.estacao = estacao;
		this.ocasiao = ocasiao;
		this.tipo_tecido = tipo_tecido;
		this.tamanho = tamanho;
		this.fachetaria = fachetaria;
		this.qtd = qtd;
		this.id = id;
	}
}
