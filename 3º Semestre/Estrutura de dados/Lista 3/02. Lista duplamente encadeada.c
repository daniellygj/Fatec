#include <stdio.h>

/* 3ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * 3 - Uma TV chega a cada 3min num setor de qualidade para inspeção. Apenas um técnico faz a inspeção no modo FIFO e
 * leva 4min por aparelho. Faça uma função para simular as inspeções. Quantas TVs saíram após 8 horas de trabalho?
 */

struct Cel {
    int valor;
    struct Cel *prox;
    struct Cel *ant;
};

void inserirDuplamenteEncadeada(cel **lista, int valor) {
    cel *novo = malloc(sizeof(cel));
    novo->ant = NULL;
    novo->prox = NULL;
    novo->valor = valor;

    if (*lista == NULL) {
        novo->prox = *lista;
        *lista->anterior = novo;
    }

    *lista = temp;
}

int main() {
    printf("%d", simular());

}
