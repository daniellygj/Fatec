#include <stdio.h>
#include <string.h>

/*17. Leia um vetor contendo letras de uma frase inclusive os espa�os em branco. Retirar os
espa�os em branco do vetor e depois escrever o vetor resultante. */

int main() {
    char string[255];
    int  cont = 0, tam;
    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    tam = strlen(string);
    string[tam -1]  = '\0';

    for (int i=0; i<tam; i++)
        if (string[i] == ' ')
            for (int j=i; j<tam; j++) {
                    string[j] = string[j+1];
            }

    printf("%s", string);
}
