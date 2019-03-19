package com.fatec.sjc.model;

import java.time.LocalDate;
import lombok.Setter;
import lombok.Getter;

@Setter
@Getter
public class Obra {
	private String genero;
	private String idioma;
	private String midia;
	private String nome;
	private LocalDate anoPrublicacao;
	private Autor autor;
	private Editora editora;
	
}	
