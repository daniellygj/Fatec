#include "Funcoes.h"
/* Observe as instruções desse truque de Ilusionismo.
Peça que a pessoa siga estas instruções

Anotar mês de nascimento (Exemplo de Fevereiro): 2
Duplicá-lo: 4
Adicionar 5: 9
Multiplicar por 50: 450
Adicionar idade do amigo (Exemplo 40): 490
Subtrair 365: 125

Neste ponto, pergunte à pessoa para dizer o valor total, o que, neste caso, é de 125.

Na sua cabeça, de forma rápida e secretamente adicionar 115.
Neste exemplo, você vai acabar com 240.

Em seguida, proclame: "Você nasceu em fevereiro e tem 40 anos de idade. "
Elabore um programa, usando Linguagem de Programação C, que simule o truque de ilusionismo descrito acima. O
programa dará as instruções ao usuário e lerá via teclado apenas o valor_total, apresentando, em seguida, o mês de
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
