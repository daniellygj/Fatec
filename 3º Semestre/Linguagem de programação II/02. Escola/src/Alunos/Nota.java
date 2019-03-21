package Alunos;
import lombok.Setter;
import lombok.Getter;

@Getter
@Setter
public class Nota {

    private double nota;
    private int peso;

    public Nota (double nota, int peso) {
        this.nota = nota;
        this.peso = peso;
    }
}
