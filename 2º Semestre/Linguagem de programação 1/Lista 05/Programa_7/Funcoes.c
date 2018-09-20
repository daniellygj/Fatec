#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int conta_vogais(char *s) {
    int tam = strlen(s), cont_vogal = 0;
    for (int c=0; c<tam; c++) {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            cont_vogal ++;
        s++;
    }
    return cont_vogal;
}


void substitui_letra_por_asterisco(char *s, char letra ){
    int tam = strlen(s);
    for (int c=0; c<tam-1; c++) {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u') {
            *s = letra;
        }
        s++;
    }
}
