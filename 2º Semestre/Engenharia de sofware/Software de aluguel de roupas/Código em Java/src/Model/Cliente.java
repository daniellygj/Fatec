package Model;

import java.time.LocalDate;
import java.util.Date;

public class Cliente {
	private String nome, sexo, email, telefone, RG, CPF, medida;
	
	private LocalDate Data_nascimento;
	Boolean desabilitar;
	
	public Boolean getDesabilitar() {
		return desabilitar;
	}
	public void setDesabilitar(Boolean desabilitar) {
		this.desabilitar = desabilitar;
	}
	public Cliente(String nome, String sexo, String email, String telefone, String RG, String CPF, String medida,
		LocalDate data_nascimento) {
		super();
		this.nome = nome;
		this.sexo = sexo;
		this.email = email;
		this.telefone = telefone;
		this.RG = RG;
		this.CPF = CPF;
		this.medida = medida;
		Data_nascimento = data_nascimento;
		
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getSexo() {
		return sexo;
	}
	public void setSexo(String sexo) {
		this.sexo = sexo;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getTelefone() {
		return telefone;
	}
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	public String getRG() {
		return RG;
	}
	public void setRG(String rG) {
		RG = rG;
	}
	public String getCPF() {
		return CPF;
	}
	public void setCPF(String cPF) {
		CPF = cPF;
	}
	public String getMedida() {
		return medida;
	}
	public void setMedida(String medida) {
		this.medida = medida;
	}
	public LocalDate getData_nascimento() {
		return Data_nascimento;
	}
	public void setData_nascimento(LocalDate data_nascimento) {
		Data_nascimento = data_nascimento;
	}

}
