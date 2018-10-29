#include "funcoes.h"

/* Uma igreja deseja cadastrar os casamentos ocorridos. Usando a linguagem C e struct, implemente:
a) uma fun��o de cadastro capaz de armazenar nome da noiva, nome do noivo, nomes do pai e
da m�e de cada c�njuge, dia, m�s, ano e hora da cerim�nia.
b) uma fun��o que lista todas as cerim�nias ocorridas em uma determinada data, passada como
par�metro.
c) uma fun��o que fornece o nome do futuro c�njuge, a partir do nome de um dos nubentes.
d)  uma fun��o que fornece a data e o hor�rio da cerim�nia, a partir dos nomes dos noivos.
e) main(): oferece menu para o usu�rio escolher a opera��o desejada. */



int main() {
    setlocale(LC_ALL, "portuguese");
    Casamento casamentos[100];
    char opc = 'x';
    int qtd = 0;

    while (opc != '0') {
        printf("| 0 | Sair\n");
        printf("| 1 | Cadastrar\n");
        printf("| 2 | Buscar por data\n");
        printf("| 3 | Futuro c�njuge\n");
        printf("| 4 | Data e horario a partir do nome dos noivos\n");
        printf("Opcao: ");
        opc = getche();
        printf("\n");

        switch (opc) {
            case '0':
                break;

            case '1':
                cadastrar(casamentos, &qtd);
                break;

            case '2':
                listarPorData(casamentos, qtd);
                break;

            case '3':
                futuroConjugue(casamentos, qtd);
                break;

            case '4':
                datahorario(casamentos, qtd);
                break;

            default:
                printf("Op��o inv�lida.\n");
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    return 0;
}
