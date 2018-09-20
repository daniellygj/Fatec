#include <stdio.h>
#include "funcoes.h"

int main() {
    char frase[255];

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(frase, 255, stdin);
    int tam = strlen(frase);
    frase[tam - 1] = '\0';

    InverteSubstitui(frase, tam);

    printf("%s\n", frase);

    return 0;
}
