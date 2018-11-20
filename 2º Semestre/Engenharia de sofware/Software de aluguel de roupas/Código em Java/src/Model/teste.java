package Model;

import static org.junit.jupiter.api.Assertions.*;

import java.time.LocalDate;
import java.time.Month;


import org.junit.jupiter.api.Test;

class teste {
	

	@Test
	void test() {
		/*Declarações*/
		Loja loja = new Loja();
		LocalDate data = LocalDate.of(2018, Month.NOVEMBER, 13);
		
		
		/*---------------------------------Teste Loja Inserts-Sets-Cadastros---------------------------------------*/
		
		assertEquals(loja.getRoupa().size(), 0);
		
		loja.cadastrarCliente(new Cliente("Rone Felipe Bento", "Masculino", "ronefelipe@live.com", 
										 "98156592", "577040807", "13834529621", "berra tirar 2 cm",data));
		assertEquals(loja.getClientes().size(), 1);//Veririfca se possuui 1 cadastro
		
		
		//tipoRoupa, marca, sexo, cor, estacao, ocasiao, tipoTecido, tamanho, faixaEtaria, quantidade, codigoRoupa
		loja.cadastrarRoupa(new Roupa("Calça", "RC", "Masculino", "Preto", "Inverno", 
									  "Casamento", "Social", "44", 22, 5, 001));
		assertEquals(loja.getRoupa().size(), 1);
		
		loja.cadastrarRoupa(new Roupa("Camisa", "RC", "Masculino", "Azul", "Todas as Estações", 
				  "Casamento", "Social", "G", 18, 5, 002));
		
		assertEquals(loja.getRoupa().size(), 2);
		
		
		//nome, documento, clienteCPF, n_parcelas, codigoAluguel, valor_aluguel, data_retirada, data_entrega, data_locucao, roupa
		loja.cadastrarAluguel(new Aluguel("Rone Felipe Bento", "577040807", "13834529621", 2, 001, false, 100, LocalDate.of(2018, Month.NOVEMBER, 20),
										LocalDate.of(2018, Month.NOVEMBER, 25), LocalDate.of(2018, Month.NOVEMBER, 13),
										loja.selecionaRoupa(1)));
		
		/*----------------------------------Teste Loja Buscas de Dados(Gets)------------------------------------*/
		assertEquals(loja.buscaAluguel("Rone Felipe Bento", "13834529621").getCodigoAluguel(), 001);
		assertEquals(loja.buscaCliente("Rone Felipe Bento", "13834529621").getRG(), "577040807");
		assertEquals(loja.buscaRoupa(001).getTipoRoupa(), "Calça");
		/*----------------------------------Teste Roupa-------------------------------------*/
		
		System.out.printf("Email Antigo: %s", loja.buscaCliente("Rone Felipe", "13834529621").getEmail());
		System.out.printf("\nCalça Tipo Antigo: %s", loja.buscaRoupa(001).getTipoTecido());
		/*----------------------------------Teste Loja Alterar dados (Updates)------------------------------------*/
		
		loja.alterarCliente("13834529621", "Rone Felipe", "", "", "ronefelipe97@gmail.com", "");
		loja.alterarRoupa(001, "", "", "", "", "", "", 19, "Jeans", 2);
		loja.alterarAluguel(001, 0, LocalDate.of(2018, Month.NOVEMBER, 28), LocalDate.of(2018, Month.DECEMBER, 2), loja.selecionaRoupa(1));
		loja.aprovarPagamentoParcela(001);
		
		/*----------------------------------Teste Loja Excluir dados (Remove, Desativar)------------------------------------*/
		
		loja.removeRoupa(001);
		//assertEquals(loja.getRoupa().size(), 2); Esse assert irá gerar um erro pois um item foi excluido, portanto exitem apenas 1 registro
		
		loja.desabilitarCliente("13834529621");
		assertEquals(loja.buscaCliente("Rone Felipe Bento", "13834529621").getDesabilitar(), true);
		
		loja.desabilitarAluguel(001);
		assertEquals(loja.buscaAluguel("Rone Felipe Bento", "13834529621").getDesabilitar(), true);
		
		
		
		/*Testes com print*/
		
		System.out.printf("%s", loja.buscaAluguel("Rone Felipe Bento", "1383452921").getData_locucao());
		
		System.out.printf("\nEmail novo: %s", loja.buscaCliente("Rone Felipe", "13834529621").getEmail());
		
		System.out.printf("\nCalça Tipo Novo: %s", loja.buscaRoupa(002).getTipoTecido());
		
		
		
		
	}

}
