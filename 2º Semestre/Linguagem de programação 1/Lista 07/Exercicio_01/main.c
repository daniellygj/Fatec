#include "Funcoes.h"

int main() {
    setlocale(LC_ALL, "portuguese");
	struct salario salario;

	printf("Entre com seu salário: ");
	scanf("%f", &salario.base_value);

	if (salario.base_value <= 1683.72){
		salario.inss = salario.base_value * 0.08;
	}

	else if (salario.base_value >= 1683.73 && salario.base_value <= 2822.90){
		salario.inss = salario.base_value * 0.09;
	}else if(salario.base_value >= 2822.91){
		salario.inss = salario.base_value * 0.11;
	}

	printf("Quantos depentes você possui? ");
	scanf("%d", &salario.dependentes);

	salario.base_value = salario.base_value - (salario.dependentes * 189.59) - salario.inss;

	if (salario.base_value <= 1903.98)
		printf("Isento\n");

	else if(salario.base_value >= 1903.99 && salario.base_value <= 2826.65)
		printf("%.2f\n", (((salario.base_value) * 0.075 ) - 142.80));

	else if(salario.base_value >=  2826.66 && salario.base_value <= 3751.05)
		printf("%.2f\n", (((salario.base_value) * 0.15 ) - 354.80));

	else if(salario.base_value <= 3751.06 && salario.base_value >= 4664.68)
		printf("%.2f\n", (((salario.base_value) * 0.225 ) - 636.13));

	else if(salario.base_value >=  4664.68)
		printf("%.2f\n", (((salario.base_value) * 0.275 ) - 869.36));

	return 0;
}
