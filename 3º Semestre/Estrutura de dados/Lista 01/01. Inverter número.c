#include <stdio.h>

/*
 * 1� Lista de Estrutura de Dados - Recurs�o
 *
 * 1 - Fa�a uma fun��o recursiva que permita inverter um n�mero inteiro N. Ex: 123 - 321
 */

void inverter(int n) {
    printf("%d", n%10);

    if (n / 10 != 0)
        inverter(n / 10);
}


