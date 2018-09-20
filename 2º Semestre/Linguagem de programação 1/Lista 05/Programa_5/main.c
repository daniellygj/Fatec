#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "funcoes.h"

/*
5)Elabore um programa que leia cinco nomes de pessoas via teclado.  O programa deve verificar se somente caracteres alfab�ticos foram digitados.
O programa deve conter fun��es para:

a) imprimir os nomes em ordem alfab�tica;
b) imprimir os nomes em letras mai�sculas;
c) informar apenas um nome, conforme �ndice requerido pelo usu�rio.
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

    printf("| 1 | Imprimir os nomes em ordem alfab�tica\n");
    printf("| 2 | Imprimir os nomes com letras mai�sculas\n");
    printf("| 3 | Imprimir um nome\n");
    printf("Op��o: ");
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
            printf("Informe o �ndice do nome que deseja ver: ");
            scanf("%d", &indice);

            while (indice < 0 || indice > 3) {
                printf("Op��o inv�lida, tente novamente. \n\n");

                printf("Informe o �ndice do nome que deseja ver: ");
                scanf("%d", &indice);
            }

            printf("%s", matriz[indice]);
            break;

        default:
            printf("Op��o inv�lida. \n");

    }

    getch();

    return 0;
}
