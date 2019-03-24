#include <stdio.h>

/*
 * 1ª Lista de Estrutura de Dados - Recursão
 *
 * 2 - Faça uma função recursiva que receba um inteiro n e imprima até zero e em seguida volte a n.
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
