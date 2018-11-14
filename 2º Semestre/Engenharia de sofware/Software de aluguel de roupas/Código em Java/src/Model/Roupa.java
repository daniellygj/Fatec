package Model;

public class Roupa {
	private String tipoRoupa, marca, sexo, cor, estacao, ocasiao, tipoTecido, codigo;
	private int faixaEtaria, qtd, id, tamanho, quantidade;
	
	public int getQuantidade() {
		return quantidade;
	}
	
	
	public void setQuantidade (int quantidade) {
		this.quantidade = quantidade;
	}
	
	public String getCodigo() {
		return codigo;
	}
	
	public void setCodigo(String codigo) {
		this.codigo = codigo;
	}
	
	public String getTipoRoupa() {
		return tipoRoupa;
	}
	
	public void setTipoRoupa(String tipoRoupa) {
		this.tipoRoupa = tipoRoupa;
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
	
	public String getTipoTecido() {
		return tipoTecido;
	}
	
	public void setTipoTecido(String tipoTecido) {
		this.tipoTecido = tipoTecido;
	}
	
	public int getTamanho() {
		return tamanho;
	}
	
	public void setTamanho(int tamanho) {
		this.tamanho = tamanho;
	}
	
	public int getFaixaEtaria() {
		return faixaEtaria;
	}
	
	public void setFaixaEtaria(int faixaEtaria) {
		this.faixaEtaria = faixaEtaria;
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
	
	public Roupa(String tipoRoupa, String marca, String sexo, String cor, String estacao, String ocasiao,
			String tipoTecido, int tamanho, int fachetaria, int qtd, int id, int quantidade, String codigo) {
		super();
		this.tipoRoupa = tipoRoupa;
		this.marca = marca;
		this.sexo = sexo;
		this.cor = cor;
		this.estacao = estacao;
		this.ocasiao = ocasiao;
		this.tipoTecido = tipoTecido;
		this.tamanho = tamanho;
		this.faixaEtaria = faixaEtaria;
		this.qtd = qtd;
		this.id = id;
		this.quantidade = quantidade;
		this.codigo = codigo;

	}
}
