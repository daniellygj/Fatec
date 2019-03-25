#include <stdio.h>
#include <stdlib.h>

/* 1ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * 1 - Faça uma função para concatenar duas listas encadeadas
 */

struct Cel {
    int valor;
    struct Cel *prox;
};

typedef struct Cel cel;

 void concatenar(cel **lista1, cel *lista2) {
    if (*lista1 != NULL){
        for (cel *aux=lista1; aux->prox != NULL; aux=aux->prox)
            aux->prox = lista2;
   } else
        *lista1 = lista2;
 }
