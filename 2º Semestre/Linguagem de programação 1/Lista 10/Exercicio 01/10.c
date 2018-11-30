#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Fac¸a um programa que receba o nome de um arquivo de entrada e outro de saıda. O arquivo de entrada contem em cada linha o nome de uma cidade
(ocupando 40 caracteres) e o seu numero de habitantes. O programa devera ler o arquivo de entrada e gerar um arquivo de saıda onde aparece o nome
da cidade mais populosa seguida pelo seu numero de habitantes */

int main() {
  FILE* req;
  FILE* res;
  char linhas[60][60], cidades[60][40], popString[60][15], aux, maiorCidade[40];
  int contLinha = 0, contChar = 0, popInt[60], maiorPop = -1;;

  req = fopen("cidades.txt", "r");
  if (req == 0) {
    printf("Erro ao ler arquivo\n");
    exit(1);
  }

  while ((aux = fgetc(req)) != EOF) {
    if (aux == '\n') {

      int positionEqual = -1;
      for (int i = 0; i < contChar; i++) {
          if (linhas[contLinha][i] == '=') {
            positionEqual = i;
          }
          if (i >= positionEqual && positionEqual != -1) {
            popString[contLinha][i-positionEqual] = linhas[contLinha][i+1];
          } else {
            cidades[contLinha][i] = linhas[contLinha][i];
          }
      }

      popInt[contLinha] = atoi(popString[contLinha]);

      if (popInt[contLinha] > maiorPop) {
        maiorPop = popInt[contLinha];
        strcpy(maiorCidade, cidades[contLinha]);
      }

      contChar = 0;
      contLinha++;

    } else {
      linhas[contLinha][contChar] = aux;
      contChar++;
    }
  }
  fclose(req);

  res = fopen("maiorcidade.txt", "w");
  fprintf(res, "%s = %d", maiorCidade, maiorPop);
  fclose(res);

  return 0;
}
