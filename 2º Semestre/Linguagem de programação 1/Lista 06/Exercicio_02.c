#include <stdio.h>

/* Crie um programa que calcule o comprimento de uma string (n�o use a fun��o strlen)*/
int main() {
  char str[30];
  int tam = 0;

  printf("Entre com uma string: ");
  scanf("%s", &str);

  for (int i = 0; str[i] != '\0'; i++) tam++;

  printf("Tamanho da string: %d \n", tam);

  return 0;
}
