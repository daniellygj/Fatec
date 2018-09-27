#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Escreva um programa que recebe do usuario uma string, um caractere  e uma posicao e devolve o indice
da primeira posicao da string onde foi encontrado o caractere. a procura deve começar a partir da posicao i */

int main() {
  char str[20], c;
  int i, j=0;

  printf("Entre com uma string: \n");
  fgets(str, 20, stdin);
  str[strlen(str)-1] = '\0';

  printf("Digite um caractere: \n");
  scanf(" %c", &c);

  printf("Digite um numero: \n");
  scanf("%d", &i);

  for (j = 0; j < strlen(str); j++){
    if (j >= i && str[j] == c) break;
  }

  printf("Primeira ocorrencia de %c: %d\n", c,j);
  return 0;
}
