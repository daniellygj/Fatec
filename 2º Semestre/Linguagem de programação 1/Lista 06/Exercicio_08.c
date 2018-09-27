#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Faça um programa que conte os numeros 1 que aparecem em  uma string.  */

int main() {
  char str[30];
  int cont = 0;

  printf("Entre com uma sequencia binaria: ");
  fgets(str, 30, stdin);
  str[strlen(str)-1] = '\0';

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '1') cont++;
  }

  printf("'%d\n", cont);
}
