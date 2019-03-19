package com.fatec.sjc.model;

import java.time.LocalDate;
import lombok.Setter;
import lombok.Getter;

@Setter
@Getter
public class Funcionario extends Usuario{
	private LocalDate dataAdmissao;
	private String departamento;
	

	public void cadastrarObra() {
		
	}
	
	public void excluiObra() {
		
	}
}
