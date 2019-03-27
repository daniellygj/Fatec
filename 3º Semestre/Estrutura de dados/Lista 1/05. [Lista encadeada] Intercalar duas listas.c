#include <stdio.h>
#include <stdlib.h>

/* 1ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * Faça uma função para intercalar duas listas encadeadas
 */

  struct Cel {
    int valor;
    struct Cel *prox;
};

typedef struct Cel cel;

cel *intercalar(cel *l1, cel *l2) {
    cel *l3 = l1, *aux = NULL, *aux2 = NULL;

    while (l2 != NULL &&  l3 != NULL) {
        if (l3->prox == NULL) {
            l3->prox = l2;
            break;
        }

        aux = l3->prox;
        l3->prox = l2;
        l3 = l3->prox;
        aux2 = l3->prox;
        l3->prox = aux;
        l2 = aux2;
        l3 = l3->prox;
    }
}





