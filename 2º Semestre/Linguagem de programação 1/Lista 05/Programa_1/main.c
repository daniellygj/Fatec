#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include "caracteres.h"

/*
1) Considerando o código do projeto BBI_STR que referes-e ao uso de biblioteca e strings, adicione à biblioteca "caracteres.h" e implemente  mais
essas funções:

a) int conta_vogais (char s[]);
b) void substitui_vogais_por_asterisco(char s[]);
c) void conta_consoante(char s[])

Modifique a  função main.c de forma  a permitir o  teste das novas funcionalidades da biblioteca.
*/

int main() {
    setlocale(LC_ALL, "portuguese");
    char frase[255], opc, letra;

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(frase, 255, stdin);
    frase[strlen(frase) -1] = '\0';

    printf("| 1 | Contar as vogais\n");
    printf("| 2 | Substituir vogais por asterisco\n");
    printf("| 3 | Contar consoantes\n");
    printf("| 4 | Contar caracteres\n");
    printf("| 5 | Substituir caracteres\n");
    printf("Opcao: ");
    opc = getche();

    printf("\n");

    switch (opc) {
    case '1':
        printf("A frase contém %d vogal(is)\n", conta_vogais(frase));
        break;

    case '2':
        substitui_vogais_por_asterisco(frase);
        printf("Frase: %s\n", frase);
        break;

    case '3':
        conta_consoante(frase);
        break;

    case '4':
        printf("Qual letra deseja contar?");
        letra = getche();
        printf("\n%d caracteres.\n",conta_caracter(frase, letra));
        break;

    case '5':
        printf("Qual letra deseja substituir?");
        letra = getche();
        substitui_caracter(frase, letra);
        break;

    default:
        printf("Opção inválida. \n");
        break;
    }
    getch();

    return 0;
}
