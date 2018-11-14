package Model;

import java.util.LinkedList;
import java.util.List;

public class Loja {
	private List <Roupa> roupas = new LinkedList <Roupa> ();
	private List <Aluguel> alugueis = new LinkedList <Aluguel> ();
	private List <Cliente> clientes = new LinkedList <Cliente> ();
	
	
	public List<Roupa> getRoupa() {
		return roupas;
	}
	
	public Cliente buscaCliente(String nome, String cpf) {
		for(Cliente cliente:clientes) {
			if(cliente.getNome().equals(nome) || cliente.getCPF().equals(cpf))return cliente;
		}
		return null;
	}
	
	
	public Aluguel buscaAluguel(String nomeCliente, String cpfCliente) {
		for(Aluguel aluguel:alugueis) {
			if(aluguel.getNome().equals(nomeCliente) || aluguel.getDocumento().equals(cpfCliente))return aluguel;
		}
		return null;
	}
	
	public void alterarCliente(String novoNome, String sexo, String cpfCliente,String medida ,String email, String telefone) {
		for(Cliente cliente:clientes) {
			
			if(cliente.getCPF().equals(cpfCliente)) {
				if(!novoNome.isEmpty()) {
					cliente.setNome(novoNome);
				}
				if(!sexo.isEmpty()) {
					cliente.setSexo(sexo);			
				}
				if(!cpfCliente.isEmpty()) {
					cliente.setCPF(cpfCliente);
				}
				if(medida.isEmpty()) {
					cliente.setMedida(medida);				
				}
				if(!email.isEmpty()) {
					cliente.setEmail(email);
				}
				if(!telefone.isEmpty()) {
					cliente.setTelefone(telefone);
				}
			}
		}
		
	}
	public void desabilitarCliente(Cliente cliente) {
		cliente.setDesabilitar(true);
	}
	
	public void cadastrarCliente(Cliente cliente) {
		clientes.add(cliente);
	}
	
	public void cadastrarRoupa(Roupa roupa) {
		roupas.add(roupa);
	}
	
	public void roupaRoupa(Roupa roupa) {
		roupas.remove(roupa);
	}
	
	public void cadastrarAluguel(Aluguel aluguel) {
		alugueis.add(aluguel);
	}
	
	public void roupaAluguel(Aluguel aluguel) {
		alugueis.remove(aluguel);
	}
	
	
}


