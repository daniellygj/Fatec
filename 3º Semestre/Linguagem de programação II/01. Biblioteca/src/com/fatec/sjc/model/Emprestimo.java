package com.fatec.sjc.model;

import java.time.LocalDate;
import lombok.Setter;
import lombok.Getter;

@Setter
@Getter
public class Emprestimo {
	private LocalDate dataEmprestimo;
	private LocalDate dataDevolucao;
}
