#include <stdio.h>

/*
 * 1ª Lista de Estrutura de Dados - Recursão
 *
 * 3- Crie um programa em C que receba um vetor de números reais com 100 elementos.
 * Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.
 */

void inverter(float vet[], int n) {
    if (n == 7) // Se estiver na metade, significa que comparou os dois lados.
        return;

    int temp = vet[n-1];
    vet[n-1] = vet[14 - n];
    vet[14 - n] = temp;
    inverter(vet, n-1);
 }

