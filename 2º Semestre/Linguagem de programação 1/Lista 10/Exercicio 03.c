#include <stdio.h>
#include <stdlib.h>

/* Explique o significado de cada ocorr�ncia de * no fragmento de c�digo a seguir e indique qual a sa�da exibida na tela */

int main()
{

    int *p, x=5; // declara��o de ponteiro e da variavel x, j� atribuindo valor a ela

    p *= 2*p;// Tenta fazer uma opera��o com o ponteito P, mas n�o foi atribu�do nenhum valor a ele.

    printf("%d", x);// Imprime o valor da variavel x, que � 5
}
