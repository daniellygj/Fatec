#include <stdio.h>

/*
 * 1� Lista de Estrutura de Dados - Recurs�o
 *
 * 2 - Fa�a uma fun��o recursiva que receba um inteiro n e imprima at� zero e em seguida volte a n.
 * ex: n=5
 * 5 4 3 2 1 2 3 4 5
 */

 void imprimir (int n) {
    if (n > 0) {
        printf("%d\n", n);
        imprimir(n - 1);
    }
    printf("%d\n", n);
 }
