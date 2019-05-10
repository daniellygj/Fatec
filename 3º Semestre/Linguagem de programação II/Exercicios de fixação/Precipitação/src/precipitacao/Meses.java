package precipitacao;

public enum Meses {
    m1("Janeiro"),
    m2("Fevereiro"),
    m3("Março"),
    m4("Abril"),
    m5("Maio"),
    m6("Junho"),
    m7("Julho"),
    m8("Agosto"),
    m9("Setembro"),
    m10("Outubro"),
    m11("Novembro"),
    m12("Dezembro");

    private String month;

    Meses(String mes) {
        this.month = mes;
    }

    public String getMes() {
        return month;
    }
}
