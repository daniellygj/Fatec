#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 14. Faca um programa que leia uma palavra e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante */

int main() {
  char palavra[50], repalavra[50];

  printf("Entre com uma palavra: ");
  fgets(palavra, 50, stdin);
  palavra[strlen(palavra)-1] = '\0';

  for (int i = 0; palavra[i] != '\0'; i++) {
    int letraASCII = palavra[i];
    repalavra[i] = letraASCII + 1;
  }

  printf("Palavra nova: %s\n", repalavra);
  return 0;
}
