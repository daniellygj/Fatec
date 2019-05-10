package precipitacao;

import java.util.ArrayList;
import java.util.List;


public class Mes{
    private String mes;
    private int qtdDia;
    private List<Dia> dias = new ArrayList<Dia>();

    public Mes(String mes, int qtdDia, List<Dia> dias) { ;
        this.mes = mes;
        this.qtdDia = qtdDia;
        this.dias = dias;
    }


    public String getMes() {
        return mes;
    }

    public void setMes(String mes) {
        this.mes = mes;
    }

    public int getQtdDia() {
        return qtdDia;
    }

    public void setQtdDia(int qtdDia) {
        this.qtdDia = qtdDia;
    }

    public List<Dia> getDias() {
        return dias;
    }

    public void setDias(List<Dia> dias) {
        this.dias = dias;
    }

    public Double getPrecipitacaoMes() {
        return this.dias.stream().mapToDouble(Dia::getPrecipitacaoDia).sum();
    }
}
