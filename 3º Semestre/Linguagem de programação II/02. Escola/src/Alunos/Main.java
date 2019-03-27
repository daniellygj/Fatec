package Alunos;

public class Main {

    public static void main(String[] args) {

        Turma turma = new Turma("Banco", 10);

        System.out.println("*ADICIONAR ALUNO*");
        turma.adicionarAluno(new Aluno(123, "Danielly", "Banco", new Nota(7, 2), new Nota(8, 2), new Nota(7, 1), new Nota(8, 3)));
        turma.adicionarAluno(new Aluno(124, "Matheus", "Banco", new Nota(8, 2), new Nota(9, 2), new Nota(9, 1), new Nota(7, 3)));
        turma.adicionarAluno(new Aluno(125, "Bruna", "Banco", new Nota(6, 2), new Nota(10, 2), new Nota(9, 1), new Nota(7, 3)));
        turma.adicionarAluno(new Aluno(126, "aaaa", "Banco", new Nota(8, 2), new Nota(9, 2), new Nota(9, 1), new Nota(7, 3)));
        turma.adicionarAluno(new Aluno(127, "bbbb", "Banco", new Nota(6, 2), new Nota(10, 2), new Nota(9, 1), new Nota(7, 3)));

        System.out.println("\n=-=-=-=-=-=-=-=-=-=-=--=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=");

        System.out.println("*LISTA DE ALUNOS*");
        turma.listarAlunos();

        System.out.println("\n=-=-=-=-=-=-=-=-=-=-=--=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=");

        System.out.println("*BUSCAR POR MATRICULA*");
        turma.buscarAlunoPorMatricula(123);

        System.out.println("\n=-=-=-=-=-=-=-=-=-=-=--=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=");

        System.out.println("*ALTERAR DADOS*");
        turma.alterarDados(124, "nome", "Mateus");
        System.out.println();
        turma.buscarAlunoPorNome("Mateus");

        System.out.println("\n=-=-=-=-=-=-=-=-=-=-=--=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=");

        System.out.println("*BUSCAR POR NOME*");
        turma.buscarAlunoPorNome("Danielly");

        System.out.println("\n=-=-=-=-=-=-=-=-=-=-=--=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=");

        System.out.println("*EXCLUIR*");
        turma.excluirAlunoPorNome("Bruna");
        System.out.println();
        turma.listarAlunos();
    }
}
