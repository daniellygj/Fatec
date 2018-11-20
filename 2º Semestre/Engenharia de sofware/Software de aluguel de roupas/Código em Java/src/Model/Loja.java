package Model;

import java.time.LocalDate;
import java.util.LinkedList;
import java.util.List;


public class Loja {
	private List <Roupa> roupas = new LinkedList <Roupa> ();
	private List <Aluguel> alugueis = new LinkedList <Aluguel> ();
	private List <Cliente> clientes = new LinkedList <Cliente> ();
	private List <Roupa> selectedRoupa = new LinkedList <Roupa> ();
	
	public Cliente buscaCliente(String nome, String cpf) {
		for(Cliente cliente:clientes) {
			if(cliente.getNome().equals(nome) || cliente.getCPF().equals(cpf))return cliente;
		}
		return null;
	}
	//Adicionar na documentação
	public List<Roupa> selecionaRoupa(int codigo) {
		for(Roupa roupa:roupas) {
			if(roupa.getCodigo() == codigo) {
				selectedRoupa.add(roupa);
			}
		}return selectedRoupa;
	}
	
	public Aluguel buscaAluguel(String nomeCliente, String cpfCliente) {
		for(Aluguel aluguel:alugueis) {
			if(aluguel.getNome().equals(nomeCliente) || aluguel.getDocumento().equals(cpfCliente))return aluguel;
		}
		return null;
	}
	
	public Roupa buscaRoupa(int codigoRoupa) {
		for(Roupa roupa:roupas) {
			if(roupa.getCodigo() == codigoRoupa) return roupa;
		}	
		return null;
	}
	
	public void alterarCliente(String cpfClientedeBusca, String novoNome, String sexo,String medida ,String email, String telefone) {
		for(Cliente cliente:clientes) {
			
			if(cliente.getCPF().equals(cpfClientedeBusca)) {
				if(!novoNome.isEmpty()) {
					cliente.setNome(novoNome);
				}
				if(!sexo.isEmpty()) {
					cliente.setSexo(sexo);			
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
	
public void alterarRoupa(int codigo, String novoTipoRoupa, String novoMarca, String novoTamanho, String novoCor, String novoEstacao, String novoOcasiao, int novoFaixaEtaria, String novoTipoTecido, int novoQuantidade ) {
		
		for(Roupa roupa:roupas) {				
			if(roupa.getCodigo() == codigo) {
				
				if(!novoTipoRoupa.isEmpty()) {
					roupa.setTipoRoupa(novoTipoRoupa);
				}	
				
				if(!novoMarca.isEmpty()) {
					roupa.setMarca(novoMarca);
				}	
				
				if(!novoTamanho.isEmpty()) {
					roupa.setTamanho(novoTamanho);
				}		
				
				if(!novoCor.isEmpty()) {
					roupa.setCor(novoCor);
				}			
				
				if(!novoEstacao.isEmpty()) {
					roupa.setEstacao(novoEstacao);
				}			
				
				if(!novoOcasiao.isEmpty()) {
					roupa.setOcasiao(novoOcasiao);
				}				
				
				if(novoFaixaEtaria != 0) {
					roupa.setFaixaEtaria(novoFaixaEtaria);
				}				
				
				if(!novoTipoTecido.isEmpty()) {
					roupa.setTipoTecido(novoTipoTecido);
				}
				
				if(novoQuantidade != 0) {
					roupa.setQuantidade(novoQuantidade);
				}
			}
		}
	}

	public void alterarAluguel(int codigoAluguel, float valor_aluguel, LocalDate data_retirada, LocalDate data_entrega, List<Roupa> roupa) {
		for(Aluguel aluguel:alugueis) {
			if(aluguel.getCodigoAluguel() == codigoAluguel) {
				if(valor_aluguel != 0) {
					aluguel.setValor_aluguel(valor_aluguel);
				}if(!aluguel.getData_retirada().equals(data_retirada)) {
					aluguel.setData_retirada(data_retirada);
				}if(!aluguel.getData_entrega().equals(data_entrega)) {
					aluguel.setData_entrega(data_entrega);
				}if(!roupa.isEmpty()) {
					aluguel.setRoupa(roupa);
				}
			}
		}
	}
	
	public void cadastrarCliente(Cliente cliente) {
		clientes.add(cliente);
	}
	
	public void cadastrarRoupa(Roupa roupa) {
		roupas.add(roupa);
	}
	
	public void cadastrarAluguel(Aluguel aluguel) {
		alugueis.add(aluguel);
	}
	
	public void removeRoupa(int codigoRoupa) {
		for(Roupa roupa:roupas) {
			if(roupa.getCodigo() == codigoRoupa) {
				roupas.remove(roupa);
			}
		}
		
	}
	
	public void desabilitarCliente(String cpf) {
		for(Cliente cliente:clientes) {
			if(cliente.getCPF() == cpf) {
				cliente.setDesabilitar(true);
			}
		}
	}
	public void desabilitarAluguel(int codigoAlu) {
		for(Aluguel aluguel:alugueis) {
			if(aluguel.getCodigoAluguel() == codigoAlu) {
				aluguel.setDesabilitar(true);
			}
		}
	}
	
	public void aprovarPagamentoParcela(int codigoAluguel) {
		for(Aluguel aluguel:alugueis) {
			if(aluguel.getCodigoAluguel() == codigoAluguel) {
				aluguel.setN_parcelas(aluguel.getN_parcelas() - 1);
				if(aluguel.getN_parcelas() <= 0) {
					aluguel.setDesabilitar(true);
				}
			}
		}
	}
	
	public List<Cliente> getClientes(){
		return this.clientes;
	}
	
	public List<Roupa> getRoupa() {
		return roupas;
	}
	
	
	
}


