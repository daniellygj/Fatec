package Alunos;
import lombok.Setter;
import lombok.Getter;

@Getter
@Setter
public class Aluno {
    private int matricula;
    private String nome;
    private String curso;
    private Nota n1, n2, n3, n4;

    public Aluno(int matricula, String nome, String curso, Nota n1, Nota n2, Nota n3, Nota n4) {

        this.matricula = matricula;
        this.nome = nome;
        this.curso = curso;
        this.n1 = n1;
        this.n2 = n2;
        this.n3 = n3;
        this.n4 = n4;
    }
}
