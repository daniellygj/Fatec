#include <stdio.h>
/* 1. Fa�a um programa que leia  uma string e a imprima */


int main() {
    char string[255];

    printf("Entre com uma string: ");
    fgets(string, 255, stdin);
    string[strlen(string) -1]  = '\0';

    printf("%s", string);N
}
