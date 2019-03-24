#include <stdio.h>

/*
 * 1� Lista de Estrutura de Dados - Recurs�o
 *
 * 3- Crie um programa em C que receba um vetor de n�meros reais com 100 elementos.
 * Escreva uma fun��o recursiva que inverta ordem dos elementos presentes no vetor.
 */

void inverter(float vet[], int n) {
    if (n == 7) // Se estiver na metade, significa que comparou os dois lados.
        return;

    int temp = vet[n-1];
    vet[n-1] = vet[14 - n];
    vet[14 - n] = temp;
    inverter(vet, n-1);
 }

