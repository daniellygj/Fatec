#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funcoes.h"

/*
Usando Linguagem C, implemente um programa que leia um conjunto de caracteres digitados pelo usu�rio e armazene-os em um vetor.
O usu�rio deve informar quantos caracteres ser�o digitados. Ap�s a digita��o dos caracteres, o programa mostrar� um menu para que o usu�rio escolha
 por qual algoritmo de ordena��o, dentre pelo menos quatro, ele quer que os caracteres sejam ordenados alfabeticamente.
Cada algoritmo de ordena��o deve ser uma fun��o de uma biblioteca chamada "ordenando.h", criada por voc�.
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


    printf("Qual tipo de ordena��o deseja utilizar:?\n");
    printf("| 1 | Bubble sort\n");
    printf("| 2 | Insertion sort\n");
    printf("| 3 | Selection sort\n");
    printf("| 4 | Shell sort\n");
    printf("Op��o: ");
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
            printf("Op��o inv�lida.");

    }



    return 0;
}
