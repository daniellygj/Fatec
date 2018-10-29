#include "Funcoes.h"

/* O m�gico descobre, com a for�a do seu pensamento, duas cartas escolhidas aleatoriamente pelo espectador.
MATERIAL NECESS�RIO
Um baralho retirando-se do ma�o as cartas dez, valete, dama e rei de todos os nipes.
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

int main(int argc, char const *argv[]) {
	carta cartas;

	printf("Escolha uma carta e memorize-a\n");
    system("pause");
	printf("\nMultiplique por dois\n");
    system("pause");
	printf("\nSome cinco e depois multiplique por cinco\n");
    system("pause");
	printf("\nPegue outra carta e some o valor dela\n");
    system("pause");
	printf("\nInforme o total: ");
	scanf("%d", &cartas.valor);

	cartas.valor = cartas.valor - 25;
	sprintf(cartas.carta, "%d", cartas.valor);

	printf("%c, %c\n", cartas.carta[0], cartas.carta[1]);

	return 0;
}
