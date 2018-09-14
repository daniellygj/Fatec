#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>
#include "funcoes.h"

/* 1) Considerando o programa Quadrado apresentado em sala de aula, pede-se:
a) >>>fazer prote��o para que somente n�meros inteiros sejam permitidos como entrada para o lado do quadrado
b) acrescentar as seguintes fun��es:
b1) int area_maior_10 (int lado), que retorna 1, se �rea maior que 10, sen�o retorna 0;
b2) void perim_menor_10 (int lado), que escreve na tela se o per�metro do quadrado � menor ou maior que 10.

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
                printf("\nPer�metro = %d", perimetro_quadrado(la));
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

         default: printf("\nOpcao Inv�lida.\n");

     }

     printf("\n\n");
     system("PAUSE");
     system("CLS");

    } while(op != 's');

    return 0;
} */

/* 2) Fa�a um programa que apresente o menu de op��es a seguir e permita ao usu�rio escolher a op��o desejada, mostrando o seu resultado final.
Verifique a possibilidade de op��o inv�lida ou inexistente. Dica: use switch case.
Menu de Op��es
A- Imposto
B- Novo sal�rio
C- Classifica��o
Aten��o: Cada op��o deve ser implementada em uma fun��o diferente.
A op��o A dever� receber o sal�rio de um funcion�rio, calcular e apresentar o valor do imposto de renda mensal, usando regras descritas em:
http://idg.receita.fazenda.gov.br/acesso-rapido/tributos/irpf-imposto-de-renda-pessoa-fisica
Confira se o resultado est� coerente com:
http://www.receita.fazenda.gov.br/Aplicacoes/ATRJO/Simulador/simulador.asp?tipoSimulador=M

A op��o B dever� receber o sal�rio de um funcion�rio, calcular e mostrar o valor do novo sal�rio, usando as regras a seguir:

SAL�RIO                                              AUMENTO %
Maiores que R$ 15000,00                        10%
De R$ 7500,00 a R$ 15000,00                  20%
De R$ 1000,00 a R$ 7500,00                    30%
Menores que R$1000,00                          40%

A op��o C receber� o sal�rio de um funcion�rio e mostrar� a sua classifica��o usando a rela��o a seguir:

SAL�RIO CLASSIFICA��O
At� R$ 7000,00 Mal remunerado
Maiores que R$ 7000,00 Bem remunerado

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc;
    float salario;

    printf("| 1 | Imposto\n");
    printf("| 2 | Novo sal�rio\n");
    printf("| 3 | Classifica��o\n");
    printf("Op��o: ");
    opc = getche();

    while(opc < '0' || opc > '3') {
        printf("\nOp��o inv�lida, tente novamente. \n\n");

        printf("| 1 | Imposto\n");
        printf("| 2 | Novo sal�rio\n");
        printf("| 3 | Classifica��o\n");
        printf("Op��o: ");
        opc = getche();
    }

    printf("\n\nEntre com o seu sal�rio: ");
    scanf("%f", &salario);

    while (salario <= 0 ) {
        printf("\nSal�rio inv�lido, tente novamente.");
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
            printf("Op��o inv�lida.\n");
    }

    return 0;
} */

/* 3) Fa�a um programa que leia, via teclado, 5 numeros inteiros, calcule e mostre, conforme a escolha do usuario:
a) o maior numero entre eles;
b) o menor numero entre eles;
c) a media aritmetica entre eles;
d) a mediana entre eles;
e) a moda entre eles;

Use uma fun��o para cada item.

int main(){
    setlocale(LC_ALL, "portuguese");

    int num[5];
    char opc = 'x';

    for (int c=0; c<5; c++){
        printf("Entre com o %d� numero: ", c+1);
        scanf("%d", &num[c]);
    }
    while (opc != '0'){
        printf("| 0 | Sair\n");
        printf("| 1 | Maior numero\n");
        printf("| 2 | Menor numero\n");
        printf("| 3 | Media aritmetica\n");
        printf("| 4 | Mediana\n");
        printf("| 5 | Moda\n");
        printf("Op��o: ");
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

/* 4) Um ve�culo tem um certo consumo de combust�vel (medidos em km / litro) e uma certa quantidade de combust�vel no tanque. O consumo � especificado em
uma constante e o n�vel de combust�vel inicial � 0. Implemente um programa contenha as seguintes fun��es:
a) void andar( ) que simula o ato de dirigir o ve�culo por uma certa dist�ncia, reduzindo o n�vel de combust�vel no tanque de gasolina;
b) float obterGasolina( ), que retorna o n�vel atual de combust�vel;
c) adicionarGasolina(float litros), para abastecer o tanque.
O programa deve apresentar um menu de op��es que permita ao usu�rio escolher a op��o desejada.

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
        printf("Op��o: ");
        opc = getche();

        printf("\n");

        switch (opc){
            case '1':
                andar();
                break;

            case '2':
                printf("O ve�culo possui %.2f litro(s) de combust�vel\n", obterGasolina());
                break;

            case '3':
                printf("\nQuanto deseja abastecer? \n");
                scanf("%f", &litros);
                adicionarGasolina(litros);
                break;

            case '0':
                printf("Saindo do ve�culo\n");
                break;
            default:
                printf("\nA��o inv�lida, tente novamente.\n");
                break;
        }

        printf("\n");
        system("PAUSE");
        system("CLS");

    }
} */

/* 5) Fa�a um programa que contenha as seguintes caracter�sticas
a) vari�veis -> char nome[20], int idade, float peso e float altura
b) fun��es -> void envelhecer(int anos), void engordar(float kg), void emagrecer(float kg), void crescer(),
float Imc (float peso,  float altura)
Obs: Por padr�o, a cada ano que a pessoa envelhece, sendo a idade dela menor que 21 anos, ela deve crescer 0,5 cm.
A fun��o main fornecer� um menu para que o usu�rio escolha a op��o desejada.

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
        printf("\n%s, Escolha uma op��o: \n", nome);
        printf("| 0 | Sair\n");
        printf("| 1 | Envelhecer\n");
        printf("| 2 | Engordar\n");
        printf("| 3 | Emagrecer\n");
        printf("| 4 | Crescer\n");
        printf("| 5 | Calcular IMC\n");
        printf("Op��o: ");
        opc = getche();
        printf("\n");

        switch (opc){
            case '1':
                printf("Quantos anos voc� envelheceu? ", nome);
                fflush(stdin);
                scanf("%d", &anos);
                envelhecer(anos);
                break;

            case '2':
                printf("Quanto voc� engordou? (em KG) ", nome);
                fflush(stdin);
                scanf("%f", &quilos);
                engordar(quilos);
                break;

            case '3':
                printf("Quanto voc� emagreceu? ",  nome);
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
                printf("At� a pr�xima :) ");
                break;

            default:
                printf("Op��o inv�lida, tente novamente.\n");
        }
        printf("\n\n");
        system("PAUSE");
        system("CLS");
    }

    return 0;
} */

/* 6) Fa�a um programa, descritor de uma bomba de combust�vel, que contenha as seguintes caracter�sticas
a) vari�veis -> char tipoCombustivel, float valorLitro, float quantidadeCombustivel
b) fun��es ->
b1. void abastecerPorValor(float valor) � dado o valor a ser abastecido, mostra a quantidade de litros de combust�vel que foi colocada no ve�culo;
b2. void abastecerPorLitro(float litros) � dada a quantidade em litros de combust�vel, mostra o valor a ser pago pelo cliente.
b3. void alterarValor(float valor) � altera o valor do litro do combust�vel.
b4. void alterarCombustivel(char c) � altera o tipo do combust�vel.
b5. void alterarQuantidadeCombustivel( ) � altera a quantidade de combust�vel restante na bomba.
OBS: Sempre que acontecer um abastecimento � necess�rio atualizar a quantidade de combust�vel total na bomba.
A fun��o main fornecer� um menu para que o usu�rio escolha a op��o desejada.

int main(){
    setlocale(LC_ALL, "portuguese");

    char tipo[10], opc;
    float litros, valor;

    printf("Inicio do expediente!\n");
    system("CLS");

    printf("Entre com o tipo do combust�vel: ");
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
        printf("| 4 | Alterar combust�vel\n");
        printf("| 5 | Alterar quantidade\n");
        printf("Op��o: ");
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
                else printf("Combust�vel insuficiente.\n");
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
                printf("At� a pr�xima! \n");
                break;
        }
    }
    return 0;
} */

/* 7) Fa�a um programa que contenha um menu com as seguintes op��es:
(a) Ler uma string S1 (tamanho m�ximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usu�rio e imprimir o resultado da compara��o;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatena��o;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usu�rio;
(g) Substituir a primeira ocorr�ncia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 ser�o lidos via teclado. */

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
        printf("Op��o: ");
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

        default: printf("Op��o inv�lida, tente novamente. ");
        }
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    }
    return 0;
}







