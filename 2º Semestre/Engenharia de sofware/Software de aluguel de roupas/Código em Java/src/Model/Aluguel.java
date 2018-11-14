package Model;

import java.util.Date;
import java.util.LinkedList;
import java.util.List;

public class Aluguel {
	private String nome, documento, clienteCPF;
	private int n_parcelas;
	private float valor_aluguel;
	private Date data_retirada, data_entrega, data_locucao;
	private List <Roupa> roupa = new LinkedList <Roupa> ();
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getDocumento() {
		return documento;
	}
	public void setDocumento(String documento) {
		this.documento = documento;
	}
	public String getClienteCPF() {
		return clienteCPF;
	}
	public void setClienteCPF(String clienteCPF) {
		this.clienteCPF = clienteCPF;
	}
	public int getN_parcelas() {
		return n_parcelas;
	}
	public void setN_parcelas(int n_parcelas) {
		this.n_parcelas = n_parcelas;
	}
	public float getValor_aluguel() {
		return valor_aluguel;
	}
	public void setValor_aluguel(float valor_aluguel) {
		this.valor_aluguel = valor_aluguel;
	}
	public Date getData_retirada() {
		return data_retirada;
	}
	public void setData_retirada(Date data_retirada) {
		this.data_retirada = data_retirada;
	}
	public Date getData_entrega() {
		return data_entrega;
	}
	public void setData_entrega(Date data_entrega) {
		this.data_entrega = data_entrega;
	}
	public Date getData_locucao() {
		return data_locucao;
	}
	public void setData_locucao(Date data_locucao) {
		this.data_locucao = data_locucao;
	}
	public List<Roupa> getRoupa() {
		return roupa;
	}
	public void setRoupa(List<Roupa> roupa) {
		this.roupa = roupa;
	}
	public Aluguel(String nome, String documento, String clienteCPF, int n_parcelas, float valor_aluguel,
			Date data_retirada, Date data_entrega, Date data_locucao, List<Roupa> roupa) {
		super();
		this.nome = nome;
		this.documento = documento;
		this.clienteCPF = clienteCPF;
		this.n_parcelas = n_parcelas;
		this.valor_aluguel = valor_aluguel;
		this.data_retirada = data_retirada;
		this.data_entrega = data_entrega;
		this.data_locucao = data_locucao;
		this.roupa = roupa;
	}
}

