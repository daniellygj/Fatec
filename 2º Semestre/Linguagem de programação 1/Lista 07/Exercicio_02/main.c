#include "Funcoes.h"

/* O m�gico descobre, com a for�a do seu pensamento, duas cartas escolhidas aleatoriamente pelo espectador.
MATERIAL NECESS�RIO
Um cartas retirando-se do ma�o as cartas dez, valete, dama e rei de todos os nipes.
SEGREDO
    a- Pe�a para o espectador escolher uma carta qualquer e memoriz�-la.
    b- Pe�a para ele multiplicar por dois o valor da carta, mentalmente.
    c- Somar cinco e depois multiplicar por cinco.
    d- Pe�a para memorizar o resultado da conta.
    e- Agora, pe�a para escolher outra carta e somar o valor dela com o primeiro valor
    memorizado, ou seja, o resultado da conta.
    f- Pe�a para ele falar o valor total. Desse valor, subtraia 25, com resultado de dois algarismos voc� descobrir� o valor das
    duas cartas pensadas. (Ex: se o valor total foi 76, menos 25, � igual a 51, a primeira carta escolhida foi o n�mero 5, e a
    segunda carta escolhida foi o n�mero 1, ou seja, o �s.)

Elabore um programa, usando Linguagem de Programa��o C, que simule o truque de ilusionismo descrito acima. O
programa dar� as instru��es ao usu�rio e ler� via teclado apenas o valor_total, apresentando, em seguida, os dois n�meros
escolhidos pelo usu�rio. */

int main() {
    Baralho cartas;

    printf("Escolha uma carta\n");
    system("pause");
    printf("\nMultiplique o numero da carta por 2\n");
    system("pause");
    printf("\nAgora some 5 ao resultado\n");
    system("pause");
    printf("\nAgora multiplique por 5 o resultado\n");
    system("pause");
    printf("\nMemorize o resultado\n");
    system("pause");
    printf("\nEscolha outra carta e some seu valor ao resultado memorizado\n");
    system("pause");
    printf("\nEscreva o resultado obtido ");
    scanf("%d", &cartas.baralho);

    cartas.valor_total = cartas.baralho - 25;

    char carta[3];
    itoa(cartas.valor_total, carta, 10);

    if (carta[0] == '1')
        printf("As ");
    else printf("%c ", carta[0]);

    if (carta[1] == '1')
        printf("As\n");
    else printf("%c\n", carta[1]);
}
