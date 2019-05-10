package precipitacao;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Poupular {

    static String[] nomeMeses = {"Janeiro", "Março", "Maio", "Julho", "Outubro", "Dezembro", "Abril", "Junho" , "Agosto", "Novembro", "Setembro", "Fevereiro"};

    static  List<Dia> listaDias(int range) {
        Random diaAleatorio = new Random();
        List<Dia> dias = new ArrayList<Dia>();

        for (int i = 0; i < range; i++) {
            dias.add( new Dia(diaAleatorio.nextInt( 4 ), i+1));
        }

        return dias;
    }

    static  List<Mes> listaMeses() {
        List<Mes> meses = new ArrayList<>();

        for(int i = 0; i < 12; i++) {
            if (i < 6)
                meses.add(new Mes(nomeMeses[i], 31, listaDias(31)));
            else if (i == 11)
                meses.add(new Mes(nomeMeses[i], 28, listaDias(28)));
            else
                meses.add(new Mes(nomeMeses[i], 30, listaDias(30)));
        }
        return meses;
    }

}
