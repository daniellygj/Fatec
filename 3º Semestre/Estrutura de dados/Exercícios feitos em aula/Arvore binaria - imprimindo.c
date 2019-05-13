#include <stdio.h>
#include <stdlib.h>

struct ARVORE {
    int valor;
    struct ARVORE *dir;
    struct ARVORE *esq;
};

typedef struct ARVORE arvore;

struct NODE {
    arvore *elem;
    struct NODE *prox;
};

typedef struct NODE node;
// ESQ se for menor
// DIR se for maior
// E < R < D



void add(node **fila, arvore *elem) {
    node *novo = malloc(sizeof(node));
    novo->elem = elem;
    novo->prox = NULL;

    if (*fila == NULL) {
        *fila = novo;
    } else {
        node *aux = *fila;
        for (; aux->prox != NULL; aux = aux->prox);
        aux->prox = novo;
    }
}

arvore* removeR(node **fila) {
    node *aux = *fila;
    arvore *elem = NULL;

    if (*fila != NULL) {
        elem = (*fila)->elem;
        *fila = (*fila)->prox;
    }

    free(aux);
    return elem;
}

/*
void print(arvore *sla) {
    node *fila = NULL;
    arvore *aux = NULL;

    add(&fila, sla);
    while (fila != NULL) {
        aux = removeR(&fila);
        printf("%d ", (aux->valor));

        if (aux->esq != NULL) {
            aux = aux->esq;
            add(&fila, aux);
        }

        if (aux->dir != NULL) {
            aux = aux->dir;
            add(&fila, aux);
        }
    }
}
*/

int altura (arvore *folha) {
   if (folha == NULL)

      return -1;
   else {

      int alturaEsquerda = altura (folha->esq);
      int alturaDireita = altura (folha->dir);

      if (alturaEsquerda < alturaDireita) return alturaDireita + 1;

      else return alturaEsquerda + 1;

   }
}


/* Print nodes at a given level */
void printGivenLevel(arvore *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->valor);
    else if (level > 1)
    {
        printGivenLevel(root->esq, level-1);
        printGivenLevel(root->dir, level-1);
    }
}

/* Function to line by line print level order traversal a tree*/
void printLevelOrder(arvore *root)
{
    int h = altura(root);
    int i;
    for (i=1; i<=h; i++)
    {
        printGivenLevel(root, i);
        printf("\n");
    }
}



void imprimeArvore(arvore *raiz) {
   if (raiz != NULL) {
        imprimeArvore(raiz->esq);
        printf("%d ", raiz->valor);
        imprimeArvore(raiz->dir);
   }
}

void* insereArvore(arvore **r, int valor) {

    if (*r == NULL)  {
        (*r) = malloc(sizeof(arvore));
        (*r)->valor = valor;
        (*r)->dir = NULL;
        (*r)->esq = NULL;

    } else {
        if (valor < (*r)->valor) {
             insereArvore(&(*r)->esq, valor);
        } else {
            insereArvore(&(*r)->dir, valor);
        }
    }
}






int main() {
    arvore *sla = NULL;

    //sla = insereArvore(sla, 10);
    insereArvore(&sla, 5);
    insereArvore(&sla, 1);
    insereArvore(&sla, 2);
    insereArvore(&sla, 6);
    insereArvore(&sla, 3);
    insereArvore(&sla, 7);
    insereArvore(&sla, 4);
    insereArvore(&sla, 10);
    insereArvore(&sla, 9);
    insereArvore(&sla, 8);


    //imprimeArvore(sla);
    printf("\n");

    printLevelOrder(sla);
    printf("\n");

  //  printf("%d", altura(sla));
}

