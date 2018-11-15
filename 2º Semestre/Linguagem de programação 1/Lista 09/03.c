#include <stdio.h>

/* Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas letras sao vogais.  */

int main () {
    FILE *arquivo = fopen("arquivo.txt", "r");
    char aux;
    int cont = 0;

     while((aux = fgetc(arquivo)) != EOF ) {
		if (aux == 'a' || aux == 'e' || aux == 'i' ||  aux == 'o' ||  aux == 'u' )
            cont ++;
     }

    printf("%d", cont);

    fclose(arquivo);

    return 0;
}
