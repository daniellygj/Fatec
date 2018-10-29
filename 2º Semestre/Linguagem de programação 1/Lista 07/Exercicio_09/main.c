#include "funcoes.h"

/*Faça um programa que use uma estrutura para armazenar os atributos de uma circunferência C,isto é,
raio e centro. O programa deve permitir as seguintes funcionalidades: a) calcular comprimento da
circunferência b) calcular a área do círculo envolto pela circunferência. Use funções. */


int main() {
    setlocale(LC_ALL, "portuguese");
	circ Circ;

	printf("Insira o raio\n");
	scanf("%f", &Circ.raio);
	printf("Insira o centro\n");
	scanf("%f", &Circ.centro);

	printf("Comprimento: %.2f Área:%.2F\n", calc1(Circ), calc2(Circ));


	return 0;
}
