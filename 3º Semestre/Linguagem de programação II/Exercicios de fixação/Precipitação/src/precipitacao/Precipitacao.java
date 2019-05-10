package precipitacao;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Precipitacao extends Main{

    static String[] nomeMeses = {"Janeiro", "Março", "Maio", "Julho", "Outubro", "Dezembro", "Abril", "Junho" , "Agosto", "Novembro", "Setembro", "Fevereiro"};

    static String getMaiorPrecipitacaoDia(Ano ano) {
        Dia maiorPrecipitacao = null;
        String mesDia = null;

        List<Mes> meses = ano.getMeses();

        for (Mes mes:meses) {
            List<Dia> dias = mes.getDias();
            for (Dia dia:dias) {
                 if (maiorPrecipitacao == null || dia.getPrecipitacaoDia() > maiorPrecipitacao.getPrecipitacaoDia()) {
                    maiorPrecipitacao = dia;
                    mesDia =  dia.getDia() + " de " + mes.getMes() + ", com precipitação: " + dia.getPrecipitacaoDia();
                }
            }
        }

        return mesDia;
    }



    static String getMenorPrecipitacaoDia(Ano ano) {
        Dia menorPrecipitacao = null;
        String mesDia = null;

        List<Mes> meses = ano.getMeses();

        for (Mes mes:meses) {
            List<Dia> dias = mes.getDias();
            for (Dia dia:dias) {
                if (menorPrecipitacao == null || dia.getPrecipitacaoDia() < menorPrecipitacao.getPrecipitacaoDia()) {
                    menorPrecipitacao = dia;
                    mesDia =  dia.getDia() + " de " + mes.getMes() + ", com precipitação: " + dia.getPrecipitacaoDia();
                }
            }
        }
        return mesDia;
    }


    static String getMenorPrecipitacaoMes(Ano ano) {
        Mes menorPrecipitacao = null;
        String anoMes = null;
        List<Mes> meses = ano.getMeses();

        for (Mes mes:meses) {
            if (menorPrecipitacao == null || mes.getPrecipitacaoMes() < menorPrecipitacao.getPrecipitacaoMes())
                menorPrecipitacao = mes;
                anoMes =  mes.getMes() + ", com precipitação: " + mes.getPrecipitacaoMes();
        }
        return anoMes;
    }


    static String getMaiorPrecipitacaoMes(Ano ano) {
        Mes maiorPrecipitacao = null;
        String anoMes = null;

        List<Mes> meses = ano.getMeses();

        for (Mes mes:meses) {
            if (maiorPrecipitacao == null || mes.getPrecipitacaoMes() > maiorPrecipitacao.getPrecipitacaoMes())
                maiorPrecipitacao = mes;
                anoMes =  mes.getMes() + ", com precipitação: " + mes.getPrecipitacaoMes();
        }
        return anoMes;
    }


    static Double getMediaPrecipitacaoAno(Ano ano) {
        Double mediaPrecipitacao = 0.0;

        List<Mes> meses = ano.getMeses();

        for (Mes mes:meses) {
            mediaPrecipitacao += mes.getPrecipitacaoMes();

        }
        return mediaPrecipitacao / 12;
    }


    static String getMediaPrecipitacaoMes(Ano ano) {
        String mesMedia = "";

        List<Mes> meses = ano.getMeses();

        for (Mes mes:meses) {
            Double mediaMes = 0.0;
            List<Dia> dias = mes.getDias();
            for (Dia dia:dias) {
                mediaMes += dia.getPrecipitacaoDia();
            }
            mesMedia += mes.getMes() + " com média de " + mediaMes + "\n";
        }
        return mesMedia;
    }

//    static  Map<String, Dia> get10MaioresPrecipitacoes(Ano ano) {
//        Dia menorPrecipitacao = null;
//        Map<String, Dia> precipitacaoDias = new HashMap<>();
//        int indice = 0;
//
//        List<Mes> meses = ano.getMeses();
//
//        for (Mes mes:meses) {
//            List<Dia> dias = mes.getDias();
//            for (Dia dia:dias) {
//                precipitacaoDias.put(nomeMeses[indice], dia);
//            }
//            indice++;
//        }
//
//
//
//    }}

}
