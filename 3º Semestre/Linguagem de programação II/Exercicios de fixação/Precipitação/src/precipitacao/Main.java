package precipitacao;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Random;

public class Main {

    public static void main(String[] args) {
        Ano ano = new Ano(2019, Poupular.listaMeses());

        System.out.println("Dia com maior precipitação: " + Precipitacao.getMaiorPrecipitacaoDia(ano) + "\n");
        System.out.println("Dia com menor precipitação: " + Precipitacao.getMenorPrecipitacaoDia(ano) + "\n");
        System.out.println("Mês com maior precipitação: " + Precipitacao.getMaiorPrecipitacaoMes(ano) + "\n");
        System.out.println("Mês com menor precipitação: " +  Precipitacao.getMenorPrecipitacaoMes(ano) + "\n");
        System.out.println("Média de precipitação do ano: " + Precipitacao.getMediaPrecipitacaoAno(ano) + "\n");

        System.out.println("Média de precipitação por mês: " + Precipitacao.getMediaPrecipitacaoMes(ano));


//        for (int i=0; i<12; i++) {
//            System.out.println(listaPrecipitacaoMes);
//        }


    }

}

