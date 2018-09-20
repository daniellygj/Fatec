#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "funcoes.h"

/*
5)Elabore um programa que leia cinco nomes de pessoas via teclado.  O programa deve verificar se somente caracteres alfabéticos foram digitados.
O programa deve conter funções para:

a) imprimir os nomes em ordem alfabética;
b) imprimir os nomes em letras maiúsculas;
c) informar apenas um nome, conforme índice requerido pelo usuário.
*/

int main() {
    setlocale(LC_ALL, "portuguese");

    char matriz[5][40], opc; // adriana, andre, bruna, dani, mateus
    int indice;

    for (int i=0; i<5; i++) {
        printf("Ente com o %d nome: ", i+1);
        fflush(stdin);
        fgets(matriz[i], 40, stdin);
        matriz[i][strlen(matriz[i]) -1] = '\0';
    }

    printf("| 1 | Imprimir os nomes em ordem alfabética\n");
    printf("| 2 | Imprimir os nomes com letras maiúsculas\n");
    printf("| 3 | Imprimir um nome\n");
    printf("Opção: ");
    opc = getche();
    printf("\n\n");

    switch (opc) {
        case '1':
            BubbleSort(matriz);
            PrintMatriz(matriz);
            break;

        case '2':
            DeixaMaiusculo(matriz);
            PrintMatriz(matriz);
            break;
        case '3':
            printf("Informe o índice do nome que deseja ver: ");
            scanf("%d", &indice);

            while (indice < 0 || indice > 3) {
                printf("Opção inválida, tente novamente. \n\n");

                printf("Informe o índice do nome que deseja ver: ");
                scanf("%d", &indice);
            }

            printf("%s", matriz[indice]);
            break;

        default:
            printf("Opção inválida. \n");

    }

    getch();

    return 0;
}
