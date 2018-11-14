package Model;

import static org.junit.jupiter.api.Assertions.*;

import java.time.LocalDate;
import java.time.Month;


import org.junit.jupiter.api.Test;

class teste {
	

	@Test
	void test() {
		Loja loja = new Loja();
		LocalDate data = LocalDate.of(2018, Month.NOVEMBER, 13);
		
		assertEquals(loja.getRoupa().size(), 0);
		
		loja.cadastrarCliente(new Cliente("Rone Felipe Bento", "Masculino", "ronefelipe@live.com", "98156592", "577040807", "13834529621", "berra tirar 2 cm",
				data));
		
		
		
	}

}
