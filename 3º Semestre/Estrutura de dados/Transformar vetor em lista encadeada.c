#include <stdio.h>
#include <stdlib.h>

struct node {
    int valor;
    struct node *prox;
};

typedef struct node Node;

void imprimir_lista(Node *lista) {
    Node *temp;
    for (temp = lista; temp != NULL; temp = temp->prox)
        printf("%d ", temp->valor);
}

Node *inserir(int *vet, int n) {
    Node *temp = NULL, *aux = NULL;

    for (int i=0; i<n; i++) {
        if (temp == NULL) {
         temp = malloc (sizeof(Node));
         temp->valor= vet[i];
         temp->prox = NULL;
         aux = temp;
        } else {
         temp->prox = malloc (sizeof(Node));
         temp = temp->prox;
         temp->valor = vet[i];
         temp->prox = NULL;
        }
    }
    return aux;
}

int main() {
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *lista = NULL;

    lista = inserir(vet, 10);

    imprimir_lista(lista);
}