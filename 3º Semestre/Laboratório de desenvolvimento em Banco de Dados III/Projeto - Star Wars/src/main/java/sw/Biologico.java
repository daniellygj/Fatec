package sw;

public class Biologico {
	private String genero;
	private String raca;
	private String funcao;
	
	private Robotico construtor;
	private Biologico mestre;
	

	public Robotico getConstrutor() {
		return construtor;
	}
	public void setConstrutor(Robotico construtor) {
		this.construtor = construtor;
	}
	public Biologico getMestre() {
		return mestre;
	}
	public void setMestre(Biologico mestre) {
		this.mestre = mestre;
	}
	public String getGenero() {
		return genero;
	}
	public void setGenero(String genero) {
		this.genero = genero;
	}
	public String getRaca() {
		return raca;
	}
	public void setRaca(String raca) {
		this.raca = raca;
	}
	public String getFuncao() {
		return funcao;
	}
	public void setFuncao(String funcao) {
		this.funcao = funcao;
	}	
}
