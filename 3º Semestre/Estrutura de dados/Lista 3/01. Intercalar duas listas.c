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


void *inserir (cel **lista, int x) {
    cel *temp = NULL;

    temp = malloc(sizeof(cel));
    temp->valor = x;
    temp->prox = NULL;

    if (*lista == NULL)
        *lista = temp;
    else {
        cel *aux = *lista
        for (; aux->prox != NULL; aux = aux->prox);
        aux->prox = temp;
    }
}


cel *intercalar(cel *l1, cel *l2) {
    cel *l3 = NULL;
    cel *aux1 = l1;
    cel *aux2 = l2;

    while(aux1 != NULL && aux2 != NULL) {

        if (aux1 != NULL) {
            inserir(&l3, aux1->valor);
            aux1 = aux1->prox;
        }

        if (aux2 != NULL) {
            inserir(&l3, aux2->valor);
            aux2 = aux2->prox;
        }
    }

    return l3;
}

 void imprimir(cel *lista) {
    for (cel *aux = lista; aux != NULL; aux = aux->prox)
        printf("%d\n", aux->valor);
 }

 int main() {
    cel *lst = NULL;
    cel *lst2 = NULL;
    cel *lst3 = NULL;

    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);

    inserir(&lst2, 2);


    printf("lista1\n");
    imprimir(lst);

    printf("lista2\n");
    imprimir(lst2);

    printf("\n\nresultado\n");


    lst3 = intercalar(lst, lst2);

    imprimir(lst3);
}





































