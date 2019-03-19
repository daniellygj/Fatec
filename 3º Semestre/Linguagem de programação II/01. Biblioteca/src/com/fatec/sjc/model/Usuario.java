package com.fatec.sjc.model;

import java.util.Locale;
import lombok.Setter;
import lombok.Getter;

@Setter
@Getter
public class Usuario {
	private String nome;
	private String endereco;
	private String cpf;
	private Locale dataNascimento;
}
