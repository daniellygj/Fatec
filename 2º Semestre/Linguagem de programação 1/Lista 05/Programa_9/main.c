#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funcoes.h"

/*
Usando Linguagem C, implemente um programa que leia um conjunto de caracteres digitados pelo usuário e armazene-os em um vetor.
O usuário deve informar quantos caracteres serão digitados. Após a digitação dos caracteres, o programa mostrará um menu para que o usuário escolha
 por qual algoritmo de ordenação, dentre pelo menos quatro, ele quer que os caracteres sejam ordenados alfabeticamente.
Cada algoritmo de ordenação deve ser uma função de uma biblioteca chamada "ordenando.h", criada por você.
*/

int main() {
    setlocale(LC_ALL, "portuguese");
    int tam;
    char *vet, opc;

    printf("Quantas letras deseja armazenar? ");
    scanf("%d", &tam);

    vet = (int*) calloc (tam, sizeof(char));

    printf("Letras: \n");
    for (int i=0; i<tam; i++) {
        fflush(stdin);
        scanf("%c", &vet[i]);
    }


    printf("Qual tipo de ordenação deseja utilizar:?\n");
    printf("| 1 | Bubble sort\n");
    printf("| 2 | Insertion sort\n");
    printf("| 3 | Selection sort\n");
    printf("| 4 | Shell sort\n");
    printf("Opção: ");
    opc = getche();
    printf("\n\n");

    switch (opc) {
        case '1':
            BubbleSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        case '2':
            InsertionSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        case '3':
            SelectionSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        case '4':
            ShellSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        default:
            printf("Opção inválida.");

    }



    return 0;
}
