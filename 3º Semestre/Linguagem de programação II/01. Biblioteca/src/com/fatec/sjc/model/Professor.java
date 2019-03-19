package com.fatec.sjc.model;

import lombok.Setter;
import lombok.Getter;

@Setter
@Getter
public class Professor extends Usuario{
	
	private String registroProfessor;
	private String departamento;
}
