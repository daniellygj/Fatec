#include <stdio.h>
#include <stdlib.h>

struct ARVORE {
    int valor;
    struct ARVORE *dir;
    struct ARVORE *esq;
};

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

int main() {
    arvore *sla = NULL;

    insereArvore(&sla, 5);
    insereArvore(&sla, 1);
    insereArvore(&sla, 30);
    insereArvore(&sla, 6);
    insereArvore(&sla, 3);
    insereArvore(&sla, 59);
    insereArvore(&sla, 4);
    insereArvore(&sla, 10);
    insereArvore(&sla, 9);
    insereArvore(&sla, -10);
    insereArvore(&sla, 11);
    insereArvore(&sla, 2);
    insereArvore(&sla, -7);
    insereArvore(&sla, -33);
    insereArvore(&sla, 70);
    insereArvore(&sla, 33);
    insereArvore(&sla, 23);
    insereArvore(&sla, 20);


    //imprimeArvore(sla);

    printf("\n");
    printf("%d", buscar(sla, 20)->valor);
}
