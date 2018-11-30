#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Fac¸a um programa que receba do usuario um arquivo texto e mostre na tela quantas vezes cada letra do alfabeto aparece dentro do arquivo.  */

char letras[27] = "abcdefghijklmnopqrstuvwxyz";
typedef struct alfabeto {
  int vezes[26];
} ALFABETO;

int pegarIndex(char letra) {
  for (int i = 0; i < 26; i++)
    if (letra == letras[i])
      return i;
}

int jaExiste(char letra, ALFABETO* alfabeto) {
  if (alfabeto->vezes[pegarIndex(letra)] > 0)
    return 1;
  return 0;
}

int main() {
  FILE* arq;
  ALFABETO alfabeto;
  char aux;

  arq = fopen("arquivo.txt", "r");

  while ((aux = fgetc(f)) != EOF) {
    if (aux != ' ') {
      alfabeto.vezes[pegarIndex(tolower(aux))] += 1;
    }
  }

  fclose(arq);

  for (int i = 0; i < 26; i++) {
    printf("%c: %d\n", letras[i], alfabeto.vezes[i]);
  }

  return 0;
}
