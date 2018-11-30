#include <stdio.h>

/* Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas linhas esse arquivo possui. */

int main() {
    FILE *arq = fopen("arquivo.txt", "r");
    char aux;
    int cont = 0;

    while((aux = fgetc(arq)) != EOF ) {
        if (aux == '\n')
            cont++;
    }

    printf("%d linhas.\n", cont);
    return 0;
}
