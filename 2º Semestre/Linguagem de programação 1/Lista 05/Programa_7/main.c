#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include "Funcoes.h"

/*
7) Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as
vogais da palavra dada por esse caractere.
*/

int main() {
    setlocale(LC_ALL, "portuguese");
    char opc, letra, frase[255];

    printf("| 1 | Contar vogais\n" );
    printf("| 2 | Substituir letra\n");
    printf("Opcao: ");
    opc = getche();
    printf("\n\n");

    switch (opc) {
        case '1':
            printf("Entre com a frase: ");
            fflush(stdin);
            fgets(frase, 255, stdin);
            frase[strlen(frase) -1] = '\0';
            printf("%d vogal(is)\n", conta_vogais(frase));
            break;

        case '2':
            printf("Entre com a frase: ");
            fflush(stdin);
            fgets(frase, 255, stdin);
            printf("Entre com a letra: ");
            scanf("%c", &letra);
            printf("%c\n", letra);
            substitui_letra_por_asterisco(frase, letra);
            printf("%s", frase);
            break;

        default:
            printf("Opção inválida.\n");
    }

    getch();
}
