#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>
#include "funcoes.h"

/* 1) Considerando o programa Quadrado apresentado em sala de aula, pede-se:
a) >>>fazer proteção para que somente números inteiros sejam permitidos como entrada para o lado do quadrado
b) acrescentar as seguintes funções:
b1) int area_maior_10 (int lado), que retorna 1, se área maior que 10, senão retorna 0;
b2) void perim_menor_10 (int lado), que escreve na tela se o perímetro do quadrado é menor ou maior que 10.

int main() {
    setlocale(LC_ALL, "portuguese");

    char op;
    int la;

    do {
     printf("\nO que deseja:\nPerimetro\nArea\nDiagonal\nSair\n");
     op = getche();
     op = tolower(op);

     switch(op) {
         case 'p':
                printf("\nEntre com o lado do quadrado: ");
                scanf("%d", &la);
                printf("\nPerímetro = %d", perimetro_quadrado(la));
                break;

         case 'a':
                printf("\nEntre com o lado do quadrado: ");
                scanf("%d", &la);
                area_quadrado(la);
                break;

         case 'd':
                printf("\nDiagonal = %.2f", diagonal_quadrado());
                break;

         case 's':
                printf("\nTchau");
                break;

         default: printf("\nOpcao Inválida.\n");

     }

     printf("\n\n");
     system("PAUSE");
     system("CLS");

    } while(op != 's');

    return 0;
} */

/* 2) Faça um programa que apresente o menu de opções a seguir e permita ao usuário escolher a opção desejada, mostrando o seu resultado final.
Verifique a possibilidade de opção inválida ou inexistente. Dica: use switch case.
Menu de Opções
A- Imposto
B- Novo salário
C- Classificação
Atenção: Cada opção deve ser implementada em uma função diferente.
A opção A deverá receber o salário de um funcionário, calcular e apresentar o valor do imposto de renda mensal, usando regras descritas em:
http://idg.receita.fazenda.gov.br/acesso-rapido/tributos/irpf-imposto-de-renda-pessoa-fisica
Confira se o resultado está coerente com:
http://www.receita.fazenda.gov.br/Aplicacoes/ATRJO/Simulador/simulador.asp?tipoSimulador=M

A opção B deverá receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as regras a seguir:

SALÁRIO                                              AUMENTO %
Maiores que R$ 15000,00                        10%
De R$ 7500,00 a R$ 15000,00                  20%
De R$ 1000,00 a R$ 7500,00                    30%
Menores que R$1000,00                          40%

A opção C receberá o salário de um funcionário e mostrará a sua classificação usando a relação a seguir:

SALÁRIO CLASSIFICAÇÃO
Até R$ 7000,00 Mal remunerado
Maiores que R$ 7000,00 Bem remunerado

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc;
    float salario;

    printf("| 1 | Imposto\n");
    printf("| 2 | Novo salário\n");
    printf("| 3 | Classificação\n");
    printf("Opção: ");
    opc = getche();

    while(opc < '0' || opc > '3') {
        printf("\nOpção inválida, tente novamente. \n\n");

        printf("| 1 | Imposto\n");
        printf("| 2 | Novo salário\n");
        printf("| 3 | Classificação\n");
        printf("Opção: ");
        opc = getche();
    }

    printf("\n\nEntre com o seu salário: ");
    scanf("%f", &salario);

    while (salario <= 0 ) {
        printf("\nSalário inválido, tente novamente.");
        scanf("%f", &salario);
    }

    switch (opc){
        case '1':
            calcular_imposto(salario);
            break;

        case '2':
            novo_salario(salario);
            break;

        case '3':
            classificacao(salario);
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
} */

/* 3) Faça um programa que leia, via teclado, 5 numeros inteiros, calcule e mostre, conforme a escolha do usuario:
a) o maior numero entre eles;
b) o menor numero entre eles;
c) a media aritmetica entre eles;
d) a mediana entre eles;
e) a moda entre eles;

Use uma função para cada item.

int main(){
    setlocale(LC_ALL, "portuguese");

    int num[5];
    char opc = 'x';

    for (int c=0; c<5; c++){
        printf("Entre com o %dº numero: ", c+1);
        scanf("%d", &num[c]);
    }
    while (opc != '0'){
        printf("| 0 | Sair\n");
        printf("| 1 | Maior numero\n");
        printf("| 2 | Menor numero\n");
        printf("| 3 | Media aritmetica\n");
        printf("| 4 | Mediana\n");
        printf("| 5 | Moda\n");
        printf("Opção: ");
        opc = getche();
        printf("\n\n");

        switch (opc){
        case '1':
            maior(num);
            break;

        case '2':
            menor(num);
            break;

        case '3':
            media(num);
            break;

        case '4':
            mediana(num);
            break;

        case '5':
            Moda(num);
            break;
        }


    printf("\n\n");
    system("PAUSE");
    system("CLS");

    }
    return 0;
} */

/* 4) Um veículo tem um certo consumo de combustível (medidos em km / litro) e uma certa quantidade de combustível no tanque. O consumo é especificado em
uma constante e o nível de combustível inicial é 0. Implemente um programa contenha as seguintes funções:
a) void andar( ) que simula o ato de dirigir o veículo por uma certa distância, reduzindo o nível de combustível no tanque de gasolina;
b) float obterGasolina( ), que retorna o nível atual de combustível;
c) adicionarGasolina(float litros), para abastecer o tanque.
O programa deve apresentar um menu de opções que permita ao usuário escolher a opção desejada.

int main(){
    setlocale(LC_ALL, "portuguese");

    _combustivel = 0;

    char opc = 'x';
    float litros;

    while (opc != '0'){

        printf("| 0 | Sair\n");
        printf("| 1 | Andar\n");
        printf("| 2 | Visualizar quantidade de combustivel\n");
        printf("| 3 | Abastecer\n");
        printf("Opção: ");
        opc = getche();

        printf("\n");

        switch (opc){
            case '1':
                andar();
                break;

            case '2':
                printf("O veículo possui %.2f litro(s) de combustível\n", obterGasolina());
                break;

            case '3':
                printf("\nQuanto deseja abastecer? \n");
                scanf("%f", &litros);
                adicionarGasolina(litros);
                break;

            case '0':
                printf("Saindo do veículo\n");
                break;
            default:
                printf("\nAção inválida, tente novamente.\n");
                break;
        }

        printf("\n");
        system("PAUSE");
        system("CLS");

    }
} */

/* 5) Faça um programa que contenha as seguintes características
a) variáveis -> char nome[20], int idade, float peso e float altura
b) funções -> void envelhecer(int anos), void engordar(float kg), void emagrecer(float kg), void crescer(),
float Imc (float peso,  float altura)
Obs: Por padrão, a cada ano que a pessoa envelhece, sendo a idade dela menor que 21 anos, ela deve crescer 0,5 cm.
A função main fornecerá um menu para que o usuário escolha a opção desejada.

int main(){
    setlocale(LC_ALL, "portuguese");

    char nome[20], opc = 'x';
    int anos;
    float quilos;

    printf("Entre com seu nome: ");
    fgets(nome, 20, stdin);
    nome[strlen(nome) -1] = '\0';

    printf("Entre com sua idade: ");
    scanf("%d", &_idade);

    printf("Entre com seu peso: ");
    scanf("%f", &_peso);

    printf("Entre com sua altura: ");
    scanf("%f", &_altura);

    while (opc != '0'){
        printf("\n%s, Escolha uma opção: \n", nome);
        printf("| 0 | Sair\n");
        printf("| 1 | Envelhecer\n");
        printf("| 2 | Engordar\n");
        printf("| 3 | Emagrecer\n");
        printf("| 4 | Crescer\n");
        printf("| 5 | Calcular IMC\n");
        printf("Opção: ");
        opc = getche();
        printf("\n");

        switch (opc){
            case '1':
                printf("Quantos anos você envelheceu? ", nome);
                fflush(stdin);
                scanf("%d", &anos);
                envelhecer(anos);
                break;

            case '2':
                printf("Quanto você engordou? (em KG) ", nome);
                fflush(stdin);
                scanf("%f", &quilos);
                engordar(quilos);
                break;

            case '3':
                printf("Quanto você emagreceu? ",  nome);
                fflush(stdin);
                scanf("%f", &quilos);
                emagrecer(quilos);
                break;

            case '4':
                crescer();
                break;

            case '5':
                imc(_peso, _altura);
                break;

            case '0':
                printf("Até a próxima :) ");
                break;

            default:
                printf("Opção inválida, tente novamente.\n");
        }
        printf("\n\n");
        system("PAUSE");
        system("CLS");
    }

    return 0;
} */

/* 6) Faça um programa, descritor de uma bomba de combustível, que contenha as seguintes características
a) variáveis -> char tipoCombustivel, float valorLitro, float quantidadeCombustivel
b) funções ->
b1. void abastecerPorValor(float valor) – dado o valor a ser abastecido, mostra a quantidade de litros de combustível que foi colocada no veículo;
b2. void abastecerPorLitro(float litros) – dada a quantidade em litros de combustível, mostra o valor a ser pago pelo cliente.
b3. void alterarValor(float valor) – altera o valor do litro do combustível.
b4. void alterarCombustivel(char c) – altera o tipo do combustível.
b5. void alterarQuantidadeCombustivel( ) – altera a quantidade de combustível restante na bomba.
OBS: Sempre que acontecer um abastecimento é necessário atualizar a quantidade de combustível total na bomba.
A função main fornecerá um menu para que o usuário escolha a opção desejada.

int main(){
    setlocale(LC_ALL, "portuguese");

    char tipo[10], opc;
    float litros, valor;

    printf("Inicio do expediente!\n");
    system("CLS");

    printf("Entre com o tipo do combustível: ");
    fflush(stdin);
    scanf("%s", &_tipoCombustivel);

    printf("Entre com o valor do litro: ");
    fflush(stdin);
    scanf("%f", &_valorLitro);

    printf("Entre com a quantidade de combustivel: ");
    fflush(stdin);
    scanf("%f", &_quantidadeCombustivel);

    while (opc != '0'){
        printf("| 1 | Abastecer por valor \n");
        printf("| 2 | Abastecer por litro\n");
        printf("| 3 | Alterar valor\n");
        printf("| 4 | Alterar combustível\n");
        printf("| 5 | Alterar quantidade\n");
        printf("Opção: ");
        opc = getche();
        printf("\n\n");

        switch (opc){
            case '1':
                printf("Qual o valor que deseja adicionar? ");
                fflush(stdin);
                scanf("%f", &valor);
                abastecerPorValor(valor);
                break;

            case '2':
                printf("Quantos litros deseja colocar? ");
                fflush(stdin);
                scanf("%f", &litros);
                if (_quantidadeCombustivel > litros) abastecerPorLitro(litros);
                else printf("Combustível insuficiente.\n");
                break;

            case '3':
                printf("Entre com o novo valor: ");
                fflush(stdin);
                scanf("%f", &valor);
                alterarValor(valor);
                break;

            case '4':
                printf("Entre com o novo tipo de combustivel: ");
                fflush(stdin);
                scanf("%s", &tipo);
                alterarCombustivel(tipo);
                break;

            case '5':
                alterarQuantidadeCombustivel();
                break;

            case '0':
                printf("Até a próxima! \n");
                break;
        }
    }
    return 0;
} */

/* 7) Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos via teclado. */

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc = 'x', str1[20], str2[20];

    while (opc != '0'){
        printf("| 0 | Sair\n");
        printf("| 1 | Ler uma string\n");
        printf("| 2 | Imprimir o tamanho da string1\n");
        printf("| 3 | Comparar a string1 com a string2\n");
        printf("| 4 | Concatenar string1 com a string 2\n");
        printf("| 5 | Inverter string1\n");
        printf("| 6 | Ocorrencia de um caractere na string1\n");
        printf("| 7 | Substituir a primeira ocorrencia de um caractere na string1\n");
        printf("Opção: ");
        opc = getche();
        printf("\n\n");

        switch (opc){
        case '1':
            LerString(str1, 1);
            break;

        case '2':
            TamanhoString(str1);
            break;

        case '3':
            CompararString(str1, str2);
            break;

        case '4':
            ConcatenarString(str1, str2);
            break;

        case '5':
            if (strlen(str1) == 0) LerString(str1, 1);
            InverterString(str1);
            break;

        case '6':
            OcorrenciaCaractere(str1);
            break;

        case '7':
            SubstituirOcorrencia(str1);
            break;

        case '0': printf("\nTchau =)\n");

        default: printf("Opção inválida, tente novamente. ");
        }
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    }
    return 0;
}







