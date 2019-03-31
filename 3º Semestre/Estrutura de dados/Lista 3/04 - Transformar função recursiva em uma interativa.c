#include <stdio.h>

/* 3ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * 4 - Escreva uma função iterativa que simule o comportamento da seguinte função recursiva. Use uma pilha.
 * int TTT (int x[], int n) {
 *   if (n == 0) return 0;
 *   if (x[n] > 0) return x[n] + TTT (x, n-1);
 *   else return TTT (x, n-1);
 * }
 */


int desempilha(int vet[], int *t) {
    if (*t > -1)
        *t -= 1;

    return vet[*t +1];
}

int funcao(int vet[], int *t) {
    int soma = 0;

    while (*t > 0) {
        if (vet[*t] > 0)
            soma += desempilha(vet, t);
        else
            desempilha(vet, t);
    }
    return soma;
}


