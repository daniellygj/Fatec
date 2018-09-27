#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 10. Faca um programa que receba uma palavra e a imprima de tras para frente */

int main() {
  char palavra[30];

  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';

  printf("%s\n", strrev(palavra));

  return 0;
}
