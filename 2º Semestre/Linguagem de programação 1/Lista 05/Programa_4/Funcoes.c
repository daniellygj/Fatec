#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "Funcoes.h"

void LerMatriz(int v[][TAM]) {
    for (int i=0; i<TAM; i++)
        for (int j=0; j<TAM; j++)
            scanf("%d", &v[i][j]);
}

void PrintMatriz(int v[][TAM]) {
    for (int i=0; i<TAM; i++) {
        printf("\n");
        for (int j=0; j<TAM; j++)
                printf("%d ", v[i][j]);
    }
}

void SomaMatriz(int v[][TAM], int v2[][TAM]) {
    int result[TAM][TAM];

    for (int i=0; i<TAM; i++)
        for (int j=0; j<TAM; j++)
            result[i][j] = v[i][j] + v2[i][j];

    PrintMatriz(result);
}

void SubtraiMatriz(int v[][TAM], int v2[][TAM]) {
    int result[TAM][TAM];

    for (int i=0; i<TAM; i++)
        for (int j=0; j<TAM; j++)
            result[i][j] = v[i][j] - v2[i][j];

    PrintMatriz(result);
}
