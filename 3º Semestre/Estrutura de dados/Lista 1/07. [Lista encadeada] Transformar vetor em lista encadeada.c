#include <stdio.h>
#include <stdlib.h>

/* 2ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * 3 - Faça uma função que converta um vetor em lista encadeada (mantenha a ordem)
 */

struct Cel {
    int valor;
    struct Cel *prox;
};

typedef struct Cel cel;

cel *inserir(int *vet, int n) {
    cel *temp = malloc(sizeof(cel));
    temp->prox = NULL;
    temp->valor = vet[0];
    cel *aux = temp;

    for (int i=1; i<n; i++) {
         temp->prox = malloc (sizeof(cel));
         temp = temp->prox;
         temp->valor = vet[i];
         temp->prox = NULL;
        }
    return aux;
}
