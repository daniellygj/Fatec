package sw;

public class Robotico {
	private String cor_lataria;
	private String Classe;
	private String cor_sensor;
	private String modelo;
	
	private Biologico construido_por;
	
	

	public Biologico getConstruido_por() {
		return construido_por;
	}

	public void setConstruido_por(Biologico construido_por) {
		this.construido_por = construido_por;
	}

	public String getCor_lataria() {
		return cor_lataria;
	}

	public void setCor_lataria(String cor_lataria) {
		this.cor_lataria = cor_lataria;
	}

	public String getClasse() {
		return Classe;
	}

	public void setClasse(String classe) {
		Classe = classe;
	}

	public String getCor_sensor() {
		return cor_sensor;
	}

	public void setCor_sensor(String cor_sensor) {
		this.cor_sensor = cor_sensor;
	}

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}	
}
