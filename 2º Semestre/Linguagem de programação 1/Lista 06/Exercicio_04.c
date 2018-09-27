#include <stdio.h>
#include <string.h>

/* 04. Faca um programa que leia um nome e imprima as 4 primeiras letras.*/

int main() {
  char str[30];

  printf("Entre com uma string: ");
  fgets(str, 30, stdin);
  str[strlen(str)-1] = '\0';

  for (int i = 0; i < 4; i++) printf("%c", str[i]);
  return 0;
}
