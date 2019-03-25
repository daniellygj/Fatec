#include <stdio.h>
#include <stdlib.h>

/* 1ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * 2 - Faça uma função para remover elementos repetidos de uma lista encadeada, considerando que a lista esteja ordenada (apenas uma varredura).
 */

  struct Cel {
    int valor;
    struct Cel *prox;
};

typedef struct Cel cel;

void removeRepetido(cel **lista) {
 cel *anterior = NULL, *atual = * lista;

  while (atual != NULL){
    if (anterior != NULL && anterior->valor == atual->valor) {
        anterior->prox = atual->prox;
        free(atual);
        atual = anterior;
      }
    anterior = atual;
    atual = atual -> prox;
 }
}

