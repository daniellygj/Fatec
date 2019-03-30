#include <stdio.h>
#include <stdlib.h>

/* 2ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * Dado um vetor V com tamanho n e um inteiro p.
 * Faça uma função que separe dentro do mesmo vetor, os elementos
 * menores que p à esquerda e os maiores à direita.
 */


void separar(int v[], int n, int p) {
  int i = 0;
  int f = n-1 ;
  int aux;

    for (int j = 0; f > i; j++) {
        if (v[j] > p) {
            aux = v[j];
            v[j] = v[f];
            v[f] = aux;

            f--;
            j--;
        } else if (v[j] < p) {
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;

            i++;
        }
    }
}


void imprimeVetor(int vet[], int n) {
    for (int i=0; i<n; i++)
        printf("%d ", vet[i]);
}

int main() {
    int vet [] = {4, 9, 2, 7, 8, 5, 1};
    separar(vet, 7, 8);
    imprimeVetor(vet, 7);
}

