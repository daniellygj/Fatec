#include <stdio.h>
#include <stdlib.h>

/* 2ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 *  Dado um vetor contendo dois subvetores ordenados v[i..h-1] e v[h..n].
 * Faça uma função que retorne este vetor ordenado.
 */


 void imprimeVetor(int vet[], int n) {
    for (int i=0; i<n; i++)
        printf("%d ", vet[i]);
    printf("\n");
 }


void ordenar(int vet[], int i, int h, int n) {
    int vet2[n] , indice = 0;

    if (vet[i] > vet[h]) {
        for (int j = h; j < n; j++, indice++)
            vet2[indice] = vet[j];

        for (int j = i; j < h; j++, indice ++)
            vet2[indice] = vet[j];

        for (int j = 0; j < n; j++)
            vet[j] = vet2[j];
    }
 }


 int main() {
    int vet[] = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};

    imprimeVetor(vet, 10);

    ordenar(vet, 0, 6, 10);

    imprimeVetor(vet, 10);
 }
