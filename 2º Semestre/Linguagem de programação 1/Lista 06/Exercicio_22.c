#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto para pagamento a vista e de 10% sobre o valor total,
calcular o valor a ser pago `a vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago `a vista.*/

int main() {
  char mercadoria[20];
  float valor, valorAVista;

  printf("Entre com o nome da mercadoria: \n");
  fgets(mercadoria, 20, stdin);
  mercadoria[strlen(mercadoria)-1] = '\0';

  printf("Digite o preco da mercadoria: \n");
  scanf("%f", &valor);

  printf("%s:\n Preco total: %.2f\n Preco a vista: %.2f", mercadoria, valor, valor - (valor*0.1));

  return 0;
}
