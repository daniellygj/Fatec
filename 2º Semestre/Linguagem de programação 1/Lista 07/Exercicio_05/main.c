#include "funcoes.h"

/* Uma maternidade deseja cadastrar os nascimentos ocorridos. Usando a linguagem C e struct, implemente:
a) uma fun��o de cadastro capaz de armazenar nome da crian�a, nome do pai, nome da m�e, dia, m�s, ano e hora de nascimento, massa e altura
do rec�m-nascido.
b) uma fun��o que lista os nomes de todos os beb�s nascidos em uma determinada data, passada como par�metro.
c) uma fun��o que lista os nomes de todos os beb�s que nasceram com massa abaixo de determinado valor passado como par�metro;
d)uma fun��o que lista os nomes de todos os beb�s que nasceram com massa acima dede determinado valor passado como par�metro;
e) main(): oferece menu para o usu�rio escolher a opera��o desejada.
 */


int main() {
    setlocale(LC_ALL, "portuguese");
    Crianca criancas[100];
    int qtd = 0;
    char opc = 'x';

    while (opc != '0') {
        printf("| 1 |Cadastrar crian�a\n");
        printf("| 2 | Listar beb�s nascidos em uma determinada data\n");
        printf("| 3 | Listar beb�s nascidos com massa abaixo de um determinado valor\n");
        printf("| 4 | Listar beb�s nascidos com massa acima de um determinado valor\n");
        printf("| 0 | Sair\n");
        printf("Op��o: ");
        opc = getche();
        printf("\n\n");

        switch (opc) {
            case '0':
                break;

            case '1':
                cadastrar(criancas, &qtd);
                break;

            case '2':
                listarPorData(criancas, qtd);
                break;

            case '3':
                listarPorMassaAbaixo(criancas, qtd);
                break;

            case '4':
                listarPorMassaAcima(criancas, qtd);
                break;

            default :
                printf("Op��o inv�lida.\n");
        }

        printf("\n");
        system("pause");
        system("cls");
    }

    return 0;
}

