#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "Funcoes.h"

/*
4) Fa�a um programa que leia, via teclado, duas matrizes de n�meros inteiros do tipo 4 x 4. O programa dever� apresentar um menu para as opera��es
de soma e subtra��o das duas matrizes. Ap�s o usu�rio escolher a opera��o a ser feita, o programa mostrar� a matriz resultante.
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
