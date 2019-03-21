package Alunos;

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

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }

    public Nota getN1() {
        return n1;
    }

    public void setN1(Nota n1) {
        this.n1 = n1;
    }

    public Nota getN2() {
        return n2;
    }

    public void setN2(Nota n2) {
        this.n2 = n2;
    }

    public Nota getN3() {
        return n3;
    }

    public void setN3(Nota n3) {
        this.n3 = n3;
    }

    public Nota getN4() {
        return n4;
    }

    public void setN4(Nota n4) {
        this.n4 = n4;
    }
}
