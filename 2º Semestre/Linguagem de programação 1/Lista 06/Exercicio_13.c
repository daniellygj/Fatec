#include <stdio.h>

/* Leia uma frase e conte quantos caracteres s�o espa�os em branco. */

int main() {
    char string[255], cont = 0;

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    string[strlen(string) -1]  = '\0';

    for (int i=0; i<strlen(string); i++)
        if (string[i] ==' ')
            cont ++;

    printf("%d espacos", cont);
}
