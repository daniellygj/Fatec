#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Leia uma cadeia de caracteres e converta todos os caracteres para maiusculo*/

int main() {
    char string[255], cont = 0;

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    string[strlen(string) -1]  = '\0';

    for (int i=0; i<strlen(string); i++)
        if (string[i]  > 96 || string[i] < 123 )
            string[i] -= 32;

    printf("%s", string);

}

