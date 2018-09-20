#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

void PrintMatriz(char v[][40]) {
    for (int i=0; i<5; i++)
        printf("%s \n", v[i]);
}

void BubbleSort(char vet[][40]){
    char aux[40];

    for (int i=0; i<5; i++){
        for (int j=i; j<5; j++){
            if (strcmp(vet[i], vet[j]) > 0) {
                strcpy(aux, vet[i]);
                strcpy(vet[i], vet[j]);
                strcpy(vet[j], aux);
            }
        }
    }
}

void DeixaMaiusculo(char vet[][40]) {
    for(int i=0; i<5; i++)
        strupr(vet[i]);
}
