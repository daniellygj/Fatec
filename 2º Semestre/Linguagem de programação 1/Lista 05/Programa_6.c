#include <stdio.h>
#include <locale.h>
#include <conio.h>

#define QTD 5
/*
6) Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d ou e), em uma turma com 3 alunos. Cada questão
vale 1 ponto. Leia o gabarito, e para cada aluno leia sua matrícula (número inteiro) e suas respostas. Calcule e escreva, para cada aluno, sua matrícula,
suas respostas, e sua nota. O percentual de aprovação, assumindo média 7.0.
*/

int main() {
    setlocale(LC_ALL, "portuguese");
    int matricula[QTD], notas[] = {0, 0, 0};
    char gabarito[] = {'e', 'a', 'b', 'd', 'c', 'a', 'd', 'e', 'd', 'c' }, respostas[QTD][10];

    for(int i=0; i<QTD; i++) {
        printf("matricula do %d aluno\n", i+1);
        scanf("%d", &matricula[i]);
        for (int j=0; j<10; j++) {
            printf("%d questão: ", j+1);
            fflush(stdin);
            scanf("%s", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j])
                notas[i]++;
        }
    }

    for(int i=0; i<QTD; i++) {
         int Percentual = notas[i] * 100 / 10;

        printf("\n\nMatricula: %d\n", matricula[i]);
        printf("Acertos %d\n", notas[i]);
        printf("Percentual de acerto: %d%%\n", Percentual);
        printf(Percentual > 60 ? "Aprovado\n" : "Reprovado\n");

        printf("Respostas:\n");
        for (int j=0; j<10; j++) {
            printf("    %c\n", respostas[i][j]);
        }
    }
    getch();
}
