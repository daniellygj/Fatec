#include <stdio.h>
#include <locale.h>
#include "funcoes.h"

int main(){
    setlocale(LC_ALL, "portuguese");
    int opc = 1;

    do {
        printf("| 00 | Sair \n");
        printf("| 01 | 5 primeiros múltiplos de 3\n");
        printf("| 02 | 1 - 100 (3 vezes)\n");
        printf("| 03 | Contagem regressiva\n");
        printf("| 04 | Imprimir de 1000 em 1000 até que chegue em 1000000\n");
        printf("| 05 | Somar 10 valores\n");
        printf("| 06 | Media entre 10 numeros\n");
        printf("| 07 | Media entre números positivos\n");
        printf("| 08 | Maior e menor valor lido entre 10 numeros\n");
        printf("| 09 | Primeiros N naturais impares.\n");
        printf("| 10 | Soma dos 50 primeiros números pares.\n");
        printf("| 11 | Números naturais até N em ordem crescente\n");
        printf("| 12 | Números naturais até N em ordem decrescente \n");
        printf("| 13 | Números pares de 0 a N em ordem crescente\n");
        printf("| 14 | Números pares de 0 a N em ordem decrescente\n");
        printf("| 15 | Números impares de 0 a N em ordem crescente\n");
        printf("| 16 | Números impares de 0 a N em ordem decrescente\n");
        printf("| 17 | Soma dos N primeiros números naturais \n");
        printf("| 18 | Maior e menor número (encerra com o 1000)<<<\n");
        printf("| 19 | Imprime os algarismos separados (numero de 100 a 999) <<<");
        printf("| 20 | Números pares\n");
        printf("| 21 | Soma dos pares, multiplicação dos ímpares\n");
        printf("| 22 | Média aritmética \n");
        printf("| 23 | Divisores de um número \n");
        printf("| 24 | Soma dos divisores de um número\n");
        printf("| 25 | Soma dos numeros abaixo de 100 que são múltiplos de 3 ou 5\n");
        printf("| 26 | Primeiro multiplo de 11, 13 ou 17 apos um numero dado\n");
        printf("| 27 | Número harmônico\n");
        printf("| 28 | Calculo da formula: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N\n");
        printf("| 29 | Calcular o valor da serie, para 5 termos: S = 0 + 1/2! + 2/4! + 3/6! + ...\n");
        printf("| 30 | Calcular as sequencias:  (1 + 2 + 3 + 4 + 5 + ... + n ) ; (1-2 + 3-4 + 5 + ... + (2n-1) ) ; (1 + 3 + 5 + 7 + ... + (2n-1)) \n");
        printf("| 31 | Calcular o valor de S\n");
        printf("| 32 | Lançamento de N dados\n");
        printf("| 33 | Multiplos de I e J, até N\n");
        printf("| 34 | Menor numero divisível pelos numeros de 1 a 20\n");
        printf("| 35 | Soma dos números ímpares dentro de um intervalo\n");
        printf("| 36 | Soma dos quadrados dos números de 1 a 100\n");
        printf("| 37 | Soma dos digitos de mais baixa ordem\n");
        printf("| 38 | Terno pitagórico \n");
        printf("| 39 | Área do triângulo\n");
        printf("| 40 | Maior e menor número (termina com numero negativo)\n");
        printf("| 41 | Calcular associação em paralelo de dois resistores\n");
        printf("| 42 | Calcular quadrado, cubo e raiz de N números\n");
        printf("| 43 | Idade média de um grupo\n");
        printf("| 44 | Fibonacci até o numero informado\n");
        printf("| 45 | Converter velocidade expressa em km/k para m/s\n");
        printf("| 46 | Adivinhar o número que foi gerado\n");
        printf("| 47 | Calculo de operações\n");
        printf("| 48 | Soma dos termos da sequencia de fibonacci que não ultrapassem 4000000\n");
        printf("| 49 | Quanto falta pro salario do joao chegar no de Carlos\n");
        printf("| 50 | Anos que irá levar para Zé chegar na altura de Chico\n");
        printf("| 51 | Salario atual do funcionário \n");
        printf("| 52 | Saque no banco\n");
        printf("| 53 | Imprimir o triangulo de Floyd\n");
        printf("| 54 | Verificar se um número é primo\n");
        printf("| 55 | Soma dos N primeiros números primos \n");
        printf("| 56 | Soma dos números primos abaixo de dois milhões\n");
        printf("| 57 | Quantidade de números primos entre A e B\n");
        printf("| 58 | Soma dos numeros primos, de A a B\n");
        printf("| 59 | Consumo da população\n");
        printf("| 60 | Calcular n");
        printf("| 61 | Número palindromo\n");
        printf("| 62 | Quantidade de letras o numero tem (0 - 5)\n");
        printf("Opcao: ");
        scanf("%d", &opc);


        system("cls");

        switch (opc){
            case 01:
                Multiplo_3();
                 break;

            case 02:
                Escreve_1a100();
                break;

            case 03:
                Contagem_Regressiva();
                break;

            case 04:
                Imprime1000();
                break;

            case 05:
                Somar_10_valores();
                break;

            case 06:
                Media_10_Num();
                break;

            case 07:
                MediaNumPositivo();
                break;

            case 8:
                Maior_menor10();
                break;

            case 9:
                Primeiros_N_Impares();
                break;

            case 10:
                Soma_50_Pares();
                break;

            case 11:
                NumNaturalAteN_Crescente();
                break;

            case 12:
                NumNaturalAteN_Decrescente();
                break;

            case 13:
                Num_Par_0aN_Crescente();
                break;

            case 14:
                Num_Par_0aN_Decrescente();
                break;

            case 15:
                Num_Impar_0aN_Crescente();
                break;

            case 16:
                Num_Impar_0aN_Decrescente();
                break;

            case 17:
                Soma_n_Naturais();
                break;

            case 18:
                Maior_Menor_Dinamico();
                break;

            case 19:
                Algarismos_Separados();
                break;

            case 20:
                Numeros_Pares_E_Qtd_Digitada();
                break;

            case 21:
                Soma_Multiplica();
                break;

            case 22:
                Media_Notas();
                break;

            case 23:
                Divisores();
                break;

            case 24:
                Soma_Divisores();
                break;

            case 25:
                Soma_Multiplos_3ou5();
                break;

            case 26:
                Multiplo_11_13_17();
                break;

            case 27:
                Numero_harmonico();
                break;

            case 28:
                Calculo_Da_Formula();
                break;

            case 29:
                Calculo_Serie_5_Termos();
                break;

            case 30:
                Calcular_3_Sequencias();
                break;

            case 31:
                Calcular_Valor_De_S();
                break;

            case 32:
                Lancamento_Dados();
                break;

            case 33:
                N_nums_naturais_multiplos_de_i_j();
                break;

            case 34:
                Num_divisivel_20();
                break;

            case 35:
                Soma_Impares_Intervalo();
                break;

            case 36:
                Diferenca_Soma_Quadrado();
                break;

            case 37:
                Verificar_Propriedade();
                break;

            case 38:
                Terno_Pitagorico();
                break;

            case 39:
                Area_Triangulo();
                break;

            case 40:
                Maior_E_Menor_Ate0();
                break;

            case 41:
                 Resistores();
                break;

            case 42:
                Quadrado_Cubo_Raiz();
                break;

            case 43:
                Idade_Media_grupo();
                break;

            case 44:
                Fibonacci();
                break;

            case 45:
                Converter_KMh_Em_Ms();
                break;

            case 46:
                adivinhacao();
                break;

            case 47:
                Calculo_Operacoes();
                break;

            case 48:
                Soma_Fibonnaci();
                break;

            case 49:
                Caderneta_Carlos();
                break;

            case 50:
                Chico_e_ze();
                break;

            case 51:
                Aumento_Salario();
                break;

            case 52:
                Saque_Banco();
                break;

            case 53:
                Triangulo_de_Floyd();
                break;

            case 54:
                Verificar_Primo();
                break;

            case 55:
                Soma_N_Primeiros_Primos();
                break;

            case 56:
                Soma_Primo_Abaixo_2kk();
                break;

            case 57:
                Qtd_Numeros_Primos_Entre_A_B();
                break;

            case 58:
                Soma_Numeros_Primos_Entre_A_B();
                break;

            case 59:
                Consumo_Do_Mes();
                break;

            case 60:
                calculadora();
                break;

            case 61:
                Maior_Palindromo();
                break;

            case 62:
                Soma_Caractere_Num_extenso();
                break;

            case 0:
                printf("Tchau!\n");
                break;

            default:
                printf("Opção inválida.\n");

        }
    } while (opc != 0);
}


