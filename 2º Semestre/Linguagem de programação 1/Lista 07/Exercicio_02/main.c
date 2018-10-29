#include "Funcoes.h"

/* O mágico descobre, com a força do seu pensamento, duas cartas escolhidas aleatoriamente pelo espectador.
MATERIAL NECESSÁRIO
Um baralho retirando-se do maço as cartas dez, valete, dama e rei de todos os nipes.
SEGREDO
    a- Peça para o espectador escolher uma carta qualquer e memorizá-la.
    b- Peça para ele multiplicar por dois o valor da carta, mentalmente.
    c- Somar cinco e depois multiplicar por cinco.
    d- Peça para memorizar o resultado da conta.
    e- Agora, peça para escolher outra carta e somar o valor dela com o primeiro valor
    memorizado, ou seja, o resultado da conta.
    f- Peça para ele falar o valor total. Desse valor, subtraia 25, com resultado de dois algarismos você descobrirá o valor das
    duas cartas pensadas. (Ex: se o valor total foi 76, menos 25, é igual a 51, a primeira carta escolhida foi o número 5, e a
    segunda carta escolhida foi o número 1, ou seja, o ás.)

Elabore um programa, usando Linguagem de Programação C, que simule o truque de ilusionismo descrito acima. O
programa dará as instruções ao usuário e lerá via teclado apenas o valor_total, apresentando, em seguida, os dois números
escolhidos pelo usuário. */

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
