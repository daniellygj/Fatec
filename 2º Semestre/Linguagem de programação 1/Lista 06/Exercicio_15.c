#include <stdio.h>

/* Escreva um programa para converter uma cadeia de caracteres de letras mai�sculas em letras
min�sculas */

int main() {
    char string[255], cont = 0;

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    string[strlen(string) -1]  = '\0';

    for (int i=0; i<strlen(string); i++)
        if (string[i]  > 64 || string[i] < 91 )
            string[i] += 32;

    printf("%s", string);

}
