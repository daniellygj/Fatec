#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/* Dado um arquivo contendo um conjunto de nome e data de nascimento (DD MM AAAA, isto e, 3 inteiros em sequencia), faca um programa que leia o nome
do arquivo e a data de hoje e construa outro arquivo contendo o nome e a idade de cada pessoa do primeiro arquivo.  */

int main() {
  FILE* req;
  FILE* res;

  char names[60][30], datas[60][20], aux;
  int idades[60];

  req = fopen("nome_nasc.txt", "r");
  if (req == 0) {
    printf("Erro ao ler arquivo\n");
    exit(1);
  }
  int pipeFounded = 0;
  int contLinha = 0;
  int contChar = 0;

  while ((aux = fgetc(req)) != EOF) {
    if (aux == '\n') {
      contLinha++;
      pipeFounded = 0;
      contChar = 0;
    } else if (aux == '|') {
      pipeFounded = 1;
      contChar = 0;
    } else if (pipeFounded) {
      datas[contLinha][contChar] = aux;
    } else {
      names[contLinha][contChar] = aux;
    }

    contChar++;
  }

  fclose(req);
  res = fopen("nome_nasc_resp.txt", "w");
  for (int i = 0; i < contLinha; i++) {
    if (i != 0) names[i][0] = ' ';
    datas[i][0] = ' ';

    char datas;
    fprintf(res, "%s (%s)", names[i], datas[i]);
  }
  fclose(res);


  return 0;
}
