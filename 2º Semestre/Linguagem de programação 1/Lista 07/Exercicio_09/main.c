#include "funcoes.h"

/*Fa�a um programa que use uma estrutura para armazenar os atributos de uma circunfer�ncia C,isto �,
raio e centro. O programa deve permitir as seguintes funcionalidades: a) calcular comprimento da
circunfer�ncia b) calcular a �rea do c�rculo envolto pela circunfer�ncia. Use fun��es. */


int main() {
    setlocale(LC_ALL, "portuguese");
	circ Circ;

	printf("Insira o raio\n");
	scanf("%f", &Circ.raio);
	printf("Insira o centro\n");
	scanf("%f", &Circ.centro);

	printf("Comprimento: %.2f �rea:%.2F\n", calc1(Circ), calc2(Circ));


	return 0;
}
