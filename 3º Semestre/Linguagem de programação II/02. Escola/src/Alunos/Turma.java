package Alunos;
import lombok.Setter;
import lombok.Getter;

@Getter
@Setter
public class Turma {
    private String nomeTurma;
    private Aluno alunos[];
    private int qtd = 0;


    Turma(String nomeTurma, int qtd){
        this.alunos = new Aluno[qtd];
        this.nomeTurma = nomeTurma;
        this.qtd = qtd;
    }

    public boolean adicionarAluno(Aluno aluno) {
        if (alunos[qtd-1] != null) {
            System.out.println("Turma cheia");
            return false;
        }
        if (buscarAlunoPorMatricula(aluno.getMatricula()) != null) {
            System.out.println("Aluno já matriculado");
            return false;
        }

        for (int i=0; i<qtd; i++) {
             if (alunos[i] == null) {
                 alunos[i] = aluno;
                 System.out.println("Aluno matriculado com sucesso");
                 return true;
             }
        }
        return false;
    }

    public boolean alterarDados(int matricula, String nomeDado, String valor) {
        for (int i=0; i<qtd; i++) {
            if (alunos[i].getMatricula() == matricula) {
                if (nomeDado.equals("nome")) {
                    alunos[i].setNome(valor);
                } else if (nomeDado.equals("curso")){
                    alunos[i].setCurso(valor);
                } else {
                    System.out.println("Ta errado");
                }

                System.out.println("Dado alterado.");
                return true;
            }
        }
        System.out.println("Matrícula não encontrada.");
        return false;
    }


    public Aluno buscarAlunoPorNome(String nome) {
        for (int i=0; i<qtd; i++) {
            if (alunos[i] != null && alunos[i].getNome().equals(nome)) {
                System.out.println("Nome: " + alunos[i].getNome());
                System.out.println("Matrícula: " + alunos[i].getMatricula());
                System.out.println("Curso: " + alunos[i].getCurso());
                return alunos[i];
            }
        }
        System.out.println("Não encontrado");
        return null;
    }

    public Aluno buscarAlunoPorMatricula(int matricula) {
        for (int i=0; i<qtd; i++) {
            if (alunos[i] != null && alunos[i].getMatricula() == matricula) {
                System.out.println("Nome: " + alunos[i].getNome());
                System.out.println("Matrícula: " + alunos[i].getMatricula());
                System.out.println("Curso: " + alunos[i].getCurso());
                System.out.println("entrou");
                return alunos[i];
            }
        }
        System.out.println("Matrícula não encontrada");
        return null;
    }

    public void excluirAlunoPorNome(String nome) {
        int i=0;
        for (; i<qtd; i++) {
            if (alunos[i].getNome().equals(nome)) {
                System.out.println("Aluno(a) excluido(a): " + alunos[i].getNome());
                alunos[i] = null;
                for (; i<qtd; i++) {
                    alunos[i] = alunos[i++];
                }
                break;
            }
        }

    }

    public void listarAlunos(){
        for (int i=0; i<qtd; i++) {
            if (alunos[i] == null) {
                break;
            }
            System.out.println("Aluno " + (i + 1));
            System.out.println("| Nome: " + alunos[i].getNome());
            System.out.println("| Matrícula: " + alunos[i].getMatricula());
            System.out.println("| Curso: " + alunos[i].getCurso());
            System.out.println();
        }
    }

}
