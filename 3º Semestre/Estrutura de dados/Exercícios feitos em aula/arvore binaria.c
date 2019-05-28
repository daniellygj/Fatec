#include <stdio.h>
#include <stdlib.h>


#include <string.h>

#include <locale.h>

struct ARVORE {
    int valor;
    struct ARVORE *dir;
    struct ARVORE *esq;
};

struct FILA {
    struct ARVORE *folha;
    struct FILA *no;
};

typedef struct FILA fila;
typedef struct ARVORE arvore;
// ESQ se for menor
// DIR se for maior
// E < R < D

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

int altura(arvore *r) {
    int alturaDir;
    int alturaEsq;

    if (r == NULL) {
        return 1;
    } else {
        int alturaDir = altura(r->dir);
        int alturaEsq = altura(r->esq);

        if (alturaDir > alturaEsq)
            return alturaDir +1;
        else
            return alturaEsq +1;
    }
}

arvore *buscar(arvore *r, int x) {
    if (r != NULL) {
        if (r->valor == x)
            return r;
        if (x > r-> valor)
            buscar(r->dir, x);
        else
            buscar(r->esq, x);
    }
}

arvore *inverter(arvore *r) {
  if (r) {
    arvore *temp = r->dir;
    r->dir = r->esq;
    r->esq = temp;

    inverter(r->dir);
    inverter(r->esq);
  }
    return r;
}

int somaRecursiva(arvore *r) {
    int somaDir, somaEsq;

    if (r == NULL)
        return 0;

    if (r != NULL) {
        somaDir = somaRecursiva(r->dir);
        somaEsq = somaRecursiva(r->esq);
    }

    return r->valor + somaDir + somaEsq;
}

void inserirFila(fila **i, fila **t, arvore *valor) {
    if (*t == NULL || valor != (*t)->valor) {
        fila *temp = malloc(sizeof(fila));
        temp->prox = NULL;
        temp->valor = valor;

        if (*i == NULL) *i = temp;

        else (*t)->prox = temp;
        *t = temp;
    }
}


int somaInterativa(arvore *r) {
    int continuar = 1;
    arvore *aux = r;


    while (continuar) {

    }

}

int ehEspelho(arvore *r1, arvore *r2) {
    if (r1 == NULL && r2 == NULL)
        return 1;

    if (r1 == NULL || r2 == NULL)
        return 0;

    return (r1->valor == r2->valor &&
            ehEspelho(r1->esq, r2->dir) &&
            ehEspelho(r1->dir, r2->esq));
}



int main() {
    arvore *sla = NULL;
    arvore *sla1 = NULL;

    insereArvore(&sla, 6);
    insereArvore(&sla, 3);
    insereArvore(&sla, 10);
    insereArvore(&sla, 2);
    insereArvore(&sla, 5);
    insereArvore(&sla, 7);
    insereArvore(&sla, 9);
    insereArvore(&sla, 1);
    insereArvore(&sla, 4);
    insereArvore(&sla, 10);

    insereArvore(&sla1, 6);
    insereArvore(&sla1, 3);
    insereArvore(&sla1, 10);
    insereArvore(&sla1, 2);
    insereArvore(&sla1, 5);
    insereArvore(&sla1, 7);
    insereArvore(&sla1, 9);
    insereArvore(&sla1, 1);
    insereArvore(&sla1, 4);
    insereArvore(&sla1, 10);
    sla1 = inverter(sla1);

    imprimeArvore(sla);
    printf("\n");
    imprimeArvore(sla1);
    printf("\n\n");

  printf("%d", ehEspelho(sla, sla1));

}
