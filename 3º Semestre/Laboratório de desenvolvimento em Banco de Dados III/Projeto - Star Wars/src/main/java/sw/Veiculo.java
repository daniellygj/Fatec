package sw;

public class Veiculo {
	private String modelo;
	private int qtd_passageiro;
	private String fabricante;
	private String classe;
	
	private Afiliacao afiliacao;
	private Arma arma;
	
	
	
	public Arma getArma() {
		return arma;
	}
	public void setArma(Arma arma) {
		this.arma = arma;
	}
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	public int getQtd_passageiro() {
		return qtd_passageiro;
	}
	public void setQtd_passageiro(int qtd_passageiro) {
		this.qtd_passageiro = qtd_passageiro;
	}
	public String getFabricante() {
		return fabricante;
	}
	public void setFabricante(String fabricante) {
		this.fabricante = fabricante;
	}
	public String getClasse() {
		return classe;
	}
	public void setClasse(String classe) {
		this.classe = classe;
	}
	public Afiliacao getAfiliacao() {
		return afiliacao;
	}
	public void setAfiliacao(Afiliacao afiliacao) {
		this.afiliacao = afiliacao;
	}
	
	
}
