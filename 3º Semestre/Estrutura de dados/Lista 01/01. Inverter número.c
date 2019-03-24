#include <stdio.h>

/*
 * 1ª Lista de Estrutura de Dados - Recursão
 *
 * 1 - Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321
 */

void inverter(int n) {
    printf("%d", n%10);

    if (n / 10 != 0)
        inverter(n / 10);
}


