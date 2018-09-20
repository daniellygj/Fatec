#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*
2) Faça um programa que simule um calendário permanente, isto é, o usuário digitará uma data e o programa retornará o dia da semana correspondente
àquela data digitada.
Dica: Use uma matriz bidimensional para armazenar os nomes dos dias da semana.
Algoritmo:

A = o inteiro de [(12 - Mês) ÷ 10]
B = Ano - A
C = Mês + (12 x A)
D = o inteiro de (B ÷ 100)
E = o inteiro de (D ÷ 4)
F = 2 - D + E
G = o inteiro de (365,25 x B)
H = o inteiro de [30,6001 x (C + 1)]
I = F + G + H + Dia + 5
J = o resto de (I ÷ 7), onde 0=SAB 1=DOM 2=SEG 3=TER 4=QUA 5=QUI 6=SEX
*/

int main() {
    setlocale(LC_ALL, "portuguese");
    int dia, mes, ano;
    char Dias_semana[][8] = { "Segunda\0", "Terça\0","Quarta\0","Quinta\0","Sexta\0","Sabado\0","Domingo\0" };

    printf("Entre com a data, no seguinte formato: dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%s\n", Dias_semana[(((2 - ( (int) (ano - (12 - mes) / 10) / 100) + ((int) ((ano - (12 - mes) / 10) / 100) / 4)) + (int) 365,25 * (ano - (12 - mes) / 10)) + ((int) 20,6001 * ((mes + 12 * (12 - mes) / 10) + 1)) + dia + 5
    ) % 7]);

    getch();

    return 0;
}
