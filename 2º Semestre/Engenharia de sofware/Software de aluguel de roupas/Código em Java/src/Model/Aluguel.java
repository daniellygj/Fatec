package Model;

import java.util.Date;
import java.util.LinkedList;
import java.util.List;

public class Aluguel {
	private String nome, documento, clienteCPF;
	private int nParcelas;
	private float valorAluguel;
	private Date dataRetirada, dataEntrega, dataLocacao;
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
	public int getNParcelas() {
		return nParcelas;
	}
	public void setNParcelas(int nParcelas) {
		this.nParcelas = nParcelas;
	}
	public float getValorAluguel() {
		return valorAluguel;
	}
	public void setValor_aluguel(float valorAluguel) {
		this.valorAluguel = valorAluguel;
	}
	public Date getDataRetirada() {
		return dataRetirada;
	}
	public void setData_retirada(Date dataRetirada) {
		this.dataRetirada = dataRetirada;
	}
	public Date getDataEntrega() {
		return dataEntrega;
	}
	public void setData_entrega(Date dataEntrega) {
		this.dataEntrega = dataEntrega;
	}
	public Date getDataLocacao() {
		return dataLocacao;
	}
	public void setData_locucao(Date dataLocacao) {
		this.dataLocacao = dataLocacao;
	}
	public List<Roupa> getRoupa() {
		return roupa;
	}
	public void setRoupa(List<Roupa> roupa) {
		this.roupa = roupa;
	}
	public Aluguel(String nome, String documento, String clienteCPF, int nParcelas, float valorAluguel,
			Date dataRetirada, Date dataEntrega, Date dataLocacao, List<Roupa> roupa) {
		super();
		this.nome = nome;
		this.documento = documento;
		this.clienteCPF = clienteCPF;
		this.nParcelas = nParcelas;
		this.valorAluguel = valorAluguel;
		this.dataRetirada = dataRetirada;
		this.dataEntrega = dataEntrega;
		this.dataLocacao = dataEntrega;
		this.roupa = roupa;
	}
}

