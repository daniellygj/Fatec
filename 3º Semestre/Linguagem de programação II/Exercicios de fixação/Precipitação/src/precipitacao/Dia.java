package precipitacao;

public class Dia {
    private double precipitacaoDia;
    private int dia;

    Dia(double precipitacaoDia, int dia){
        this.precipitacaoDia = precipitacaoDia;
        this.dia = dia;
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        this.dia = dia;
    }

    public double getPrecipitacaoDia() {
        return precipitacaoDia;
    }

    public void setPrecipitacaoDia(double precipitacaoDia) {
        this.precipitacaoDia = precipitacaoDia;
    }
}
