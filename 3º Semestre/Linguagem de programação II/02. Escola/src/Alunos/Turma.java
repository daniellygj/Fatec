package Alunos;
import lombok.Setter;
import lombok.Getter;

@Getter
@Setter
public class Turma {
    private String nomeTurma;
    private Aluno alunos[];
    private int qtd = 0;
    private int indice = 0;

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


         alunos[indice++] = aluno;
         System.out.println("Aluno matriculado com sucesso");
         return true;
    }

    public boolean alterarDados(int matricula, String nomeDado, String campo) {
        for (int i=0; i<qtd; i++) {
            if (alunos[i].getMatricula() == matricula) {
                if (nomeDado.equals("nome")) {
                    alunos[i].setNome(campo);
                } else if (nomeDado.equals("curso")){
                    alunos[i].setCurso(campo);
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
        for (int i = 0; i<qtd; i++) {
            if (alunos[i].getNome().equals(nome)) {
                for (; i<(qtd-1); i++) {
                     if (alunos[i+1] != null) {
                         alunos[i] = alunos[i+1];
                    } else
                        break;
                }
                indice--;
                alunos[i] = null;
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
