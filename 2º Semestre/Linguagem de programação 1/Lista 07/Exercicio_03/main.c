#include "Funcoes.h"
/* Observe as instru��es desse truque de Ilusionismo.
Pe�a que a pessoa siga estas instru��es

Anotar m�s de nascimento (Exemplo de Fevereiro): 2
Duplic�-lo: 4
Adicionar 5: 9
Multiplicar por 50: 450
Adicionar idade do amigo (Exemplo 40): 490
Subtrair 365: 125

Neste ponto, pergunte � pessoa para dizer o valor total, o que, neste caso, � de 125.

Na sua cabe�a, de forma r�pida e secretamente adicionar 115.
Neste exemplo, voc� vai acabar com 240.

Em seguida, proclame: "Voc� nasceu em fevereiro e tem 40 anos de idade. "
Elabore um programa, usando Linguagem de Programa��o C, que simule o truque de ilusionismo descrito acima. O
programa dar� as instru��es ao usu�rio e ler� via teclado apenas o valor_total, apresentando, em seguida, o m�s de
nascimento e a idade da pessoa. */


int main() {
    Adivinhacao adivinhacao;
    char meses[][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

   printf("Pense o mes de nascimento. \n");
    system("pause");
    printf("\nMultiplique por 2\n");
    system("pause");
    printf("\nSome 5\n");
    system("pause");
    printf("\nMultiplique por 50\n");
    system("pause");
    printf("\nAdicione a idade do amigo\n");
    system("pause");
    printf("\nSubtraia 365\n");
    system("pause");

    printf("\nEntre com o valor total: ");
    scanf("%d", &adivinhacao.valor_total);

  adivinhacao.valor_total += 115;

    itoa(adivinhacao.valor_total, adivinhacao.aux, 10);

    int tam = strlen(adivinhacao.aux);

    if (tam == 4) {
        for (int c=0; c<2; c++)
                adivinhacao.mes[c] = adivinhacao.aux[c];
        adivinhacao.mes[2] = '\0';

        for (int c=2; c<5; c++)
            adivinhacao.idade[c-2] = adivinhacao.aux[c];
        adivinhacao.idade[2] = '\0';
    } else {
        adivinhacao.mes[0] = adivinhacao.aux[0];
        adivinhacao.mes[1] = '\0';
        for (int c=1; c<5; c++)
            adivinhacao.idade[c-1] = adivinhacao.aux[c];
        adivinhacao.idade[2] = '\0';
    }

   printf("\nVoce nasceu em %s e tem %s anos", meses[atoi(adivinhacao.mes)-1], adivinhacao.idade);
    return 0;
}
