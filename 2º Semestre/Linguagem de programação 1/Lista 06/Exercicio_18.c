#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Fac¸a um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario. */

int main() {
  char palavra[30], c, d;

  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';

  printf("Entre com um caractere: ");
  scanf(" %c", &c);

  printf("Entre com outro caractere: ");
  scanf(" %c", &d);

  for (int i = 0; palavra[i] != '\0'; i++) {
    if (palavra[i] == c)
      palavra[i] = d;
  }

  printf("Caracteres substituidos: %s\n", palavra);

  return 0;
}
