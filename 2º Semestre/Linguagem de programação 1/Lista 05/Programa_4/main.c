#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "Funcoes.h"

/*
4) Faça um programa que leia, via teclado, duas matrizes de números inteiros do tipo 4 x 4. O programa deverá apresentar um menu para as operações
de soma e subtração das duas matrizes. Após o usuário escolher a operação a ser feita, o programa mostrará a matriz resultante.
*/

int main() {
    setlocale(LC_ALL, "portuguese");
    int matriz1[TAM][TAM], matriz2[TAM][TAM], result[TAM][TAM];
    char opc;

    printf("Entre com os valores da primeira matriz\n");
    LerMatriz(matriz1);

    printf("Entre com os valores da segunda matriz\n");
    LerMatriz(matriz2);

    printf("\n\n[ 1 ] Somar \n");
    printf("[ 2 ] Subtrair\n");
    opc = getche();
    printf("\n\n");

    printf("Matriz final: \n");

    switch (opc) {
        case '1':
            SomaMatriz(matriz1, matriz2);
        break;

        case '2':
            SubtraiMatriz(matriz1, matriz2);
        break;
    }

    getch();

    return 0;
}
