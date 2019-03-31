#include <stdio.h>
#include <stdlib.h>

/* 3ª Lista de Eestrutura de Dados
 *
 * 1 - Faça uma função que receba duas listas encadeadas L1 e L2 e retorne
 * uma terceira lista L3 com a intercalação de L1 e L2.
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


void *inserir (cel **lista, int x) {
    cel *temp = NULL, *aux = *lista;

    temp = malloc(sizeof(cel));
    temp->valor = x;
    temp->prox = NULL;


    if (*lista == NULL)
      *lista = temp;
    else {
      for (; aux->prox != NULL; aux = aux->prox);
      aux->prox = temp;
    }
 }



 void imprimir(cel *lista) {
    for (cel *aux = lista; aux != NULL; aux = aux->prox)
        printf("%d\n", aux->valor);
 }

 int main() {
    cel *lst = NULL;
    cel *lst2 = NULL;

    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);

    inserir(&lst2, 7);
    inserir(&lst2, 9);
    inserir(&lst2, 8);
    inserir(&lst2, 510);

    *intercalar(lst, lst2);

    imprimir(lst);
}





































