#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "caracteres.h"

int conta_caracter(char s[],char c) {
  int i, qtde=0;
  for(i=0;s[i]!='\0';i++)
  {
      if(tolower(s[i])==tolower(c)) qtde++;
  }
  return qtde;
}

void substitui_caracter(char s[],char c) {
    int i;
  for(i=0;s[i]!='\0';i++)
  {
      if(tolower(s[i])==tolower(c)) s[i]='*';
  }
  printf("\nnovo ficou:%s",s);
}

int conta_vogais(char *s) {
    int tam = strlen(s), cont_vogal = 0;
    for (int c=0; c<tam; c++) {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            cont_vogal ++;
        s++;
    }
    return cont_vogal;
}

void substitui_vogais_por_asterisco(char *s) {
    int tam = strlen(s), cont_vogal = 0;
    for (int c=0; c<tam; c++) {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            *s = '*';
        s++;
    }
}

void conta_consoante(char *s) {
        int tam = strlen(s), cont_consoante = 0;
    for (int c=0; c<tam; c++) {
        if (*s != 'a' && *s  != 'e' && *s  != 'i' && *s  != 'o' && *s  != 'u' && *s != ' ')
            cont_consoante ++;
        s++;
    }

    printf("%d consoantes\n", cont_consoante);
}

