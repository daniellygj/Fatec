#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*12. Faca um programa que receba uma palavra e calcule quantas vogais possui essa palavra.
entre com um caractere e substitua todas as vogais da palavra dada por esse caractere */

int main() {
  char palavra[30], c;
  int cont = 0;

  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';

  printf("Entre com um caractere: ");
  scanf("%c", &c);

  for (int i = 0; palavra[i] != '\0'; i++) {
    if (tolower(palavra[i]) == 'a' || tolower(palavra[i]) == 'e' || tolower(palavra[i]) == 'i' || tolower(palavra[i]) == 'o' || tolower(palavra[i]) == 'u') {
      cont++;
      palavra[i] = c;
    }
  }

  printf("Quantidade de vogais: %d\nVogais substituidas: %s\n", cont, palavra);

  return 0;
}
