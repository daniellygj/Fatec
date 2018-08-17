#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

/* 1.  Faca um programa que receba dois numeros e mostre qual deles e o maior.
int main(){
    int n1, n2;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &n1);

    printf("Enter com o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2) printf("%d é maior", n1);
    else if (n2 > n1) printf("%d é maior", n2);
    else printf("Os números são iguais.");

    return 0;
} */

/* 2. Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o numero
e invalido.

int main(){
    setlocale(LC_ALL, "portuguese");

    float num;

    printf("Entre com o numero: ");
    scanf("%f", &num);

    if (num > 0) printf("%.2f", sqrt(num));
    else printf("Numero inválido.");

}  */

/* 3. Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario,
imprima o numero ao quadrado.

int main(){
    setlocale(LC_ALL, "portuguese");

    float num;

    printf("Entre com o número: ");
    scanf("%f", &num);

    if (num > 0) printf("%.2f", sqrt(num));
    else printf("%.2f", pow(num, 2));

    return 0;
}

/* 4. Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
-  O numero digitado ao quadrado
- A raiz quadrada do numero digitado

int main(){
    setlocale(LC_ALL, "portuguese");
    float num;

    printf("Entre com o número: ");
    scanf("%f", &num);

    if (num > 0) printf("Raiz: %.2f\nAo quadrado: %.2f", sqrt(num), pow(num, 2));
}*/

/* 5. faca um programa que receba um numero inteiro e verifique se este numero e par ou impar.

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Entre com o número: ");
    scanf("%d", &num);ai, rodei

    printf((num % 2 == 0) ? "É PAR" : "É IMPAR");
}*/

/* 6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, assim
como a diferença entre ambos

int main(){
    setlocale(LC_ALL, "portuguese");
    int n1, n2;

    scanf("Entre com os numeros: ");
    scanf("%d %d", &n1, &n2);

    printf((n1 > n2) ? "%d é maior\n", n1 : "%d é maior\n", n2);

    printf((n1 > n2) ? "%d\n", n1 - n2 : "%d\n", n2 - n1);
} */

/* 7. Faça um programa que receba dois numeros e mostre o maior. Se por acaso, os dois numeros
forem iguais, imprima a mensagem "numeros iguais"

int main(){
    setlocale(LC_ALL, "portuguese");

    int n1, n2;

    printf("Ente com os numeros: ");
    scanf("%d %d", &n1, &n2);

    printf((n1 == n2) ? "Numeros iguais\n" : (n1 > n2) ? "%d é maior\n", n1 : "%d é maior", n2);
} */

/* 8. Faca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e exiba
na tela a media destas notas. Uma ta valida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0,
onde caso a nota nao possua um valor valido, este fato deve ser informado ao usuario e o programa
termina

int main(){
    setlocale(LC_ALL, "portuguese");
    float nota1 = -1, nota2 = -1;

    printf("Entre com as notas: ");
    scanf("%f %f", &nota1, &nota2);

    if (nota1 > 0 && nota1 < 10 && nota2 > 0 && nota2 < 10) printf("Media: %.2f\n", (nota1 + nota2) / 2);
    else printf("Nota inválida.\n");
} */

/* 9. Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. se a prestacao
for maior que 20% do salario imprima: Emprestimo nao concedido, caso contrario imprima:
Emprestimo concedido.

int main(){
    setlocale(LC_ALL, "portuguese");
    float salario, prestacao;

    printf("Entre com o seu salario: ");
    scanf("%f", &salario);

    printf("Entre com a prestação: ");
    scanf("%f", &prestacao);

    printf(((salario * 20) / 100 >= prestacao) ? "\nEmprestimo concedido\n" :"\nEmprestimo não concedido\n");
} */

/* 10. Faca um programa que receba a altura e o sexo de uma pessoa e calcula e mostre seu peso
ideal, utilizando as seguintes formulas (onde h corresponde a altura)
- Homens (72,7 * h) - 58
- Mulheres (62,1 * h) - 44,7

int main(){
    float altura, peso;
    char sexo;

    printf("Entre com sua altura: ");
    scanf("%f", &altura);

    printf("Entre com seu sexo: ");
    sexo = getche();

    if (sexo == 'f') peso = (62.1 * altura) - 44.7;
    else peso = (72.7 * altura) - 58.0;

    printf("\nPeso ideal: %.2f\n", peso);
} */

/* 11. Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a
soma de todos os sus algarismos. Por exemplo, ao numero 251 corresponderá o valor 8(2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará com a mensagem "Numero invalido"

int main(){
    setlocale(LC_ALL, "portuguese");

    int num, soma=0;

    printf("Entre com um numero: ");
    scanf("%d",&num);

    if (num > 0) {
        while(num > 0){
            soma += num % 10;
            num /= 10;
        }

        printf("%d\n",soma);

    } else printf("Numero invalido.\n");


    return 0;
} */

/* 12. Ler um numero inteiro. se o numero lido for negativo, escreva a mensagem "Numero invalido".
Se o numero for positivo, calcular o logaritmo deste numero.

int main(){
    int num;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    printf((num < 0) ? "Número Inválido.\n" : "log = %f ", log(num));
} */

/* 13. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e a segunda
prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a media do aluno e indicar se o aluno foi
aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos

int main(){
    setlocale(LC_ALL, "portuguese");

    float p1, p2, p3;

    printf("Entre com a nota da p1: ");
    scanf("%f", &p1);

    printf("Entre com a nota da p2: ");
    scanf("%f", &p2);

    printf("Entre com a nota da p3: ");
    scanf("%f", &p3);

    float media = (p1 * 1 + p2 * 1 + p3 * 2) / (1+1+2);

    printf((media >= 60) ? "\nAprovado.\n" : "\nReprovado.\n");
} */

/* 14. A nota de um estudante é calculada a partir de tres notas atribuidas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliacao bimestral e a um
exame final. A media das tres notas mencionadas anteriormente obedece aos pessos: trabalho
de laboratorio: 2; avaliacao semestral: 3; exame final: 5. De acordo com o resultado, mostre
na tela se o aluno está reprovado (media entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se
foi aprovado. Faca todas as verificações necessarias.

void validar(float *var){
    while (1) {
        scanf("%f", var);
        if (*var >= 0 && *var <= 10) return;
        printf("\nNota invalida, tente novamente: ");
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");

    float lab, avaliacao, exame;

    printf("Entre com a nota do trabalho de laboratorio: ");
    validar(&lab);

    printf("Entre com a nota da avaliação bimestral: ");
    validar(&avaliacao);

    printf("Entre com a nota do exame final: ");
    validar(&exame);

    float media = (lab * 2 + avaliacao * 3 + exame * 5) / (2+3+5);

    printf((media < 3) ? "\nAluno reprovado.\n" : (media < 5) ? "\nAluno em recuperação\n" : "\nAluno aprovado\n");
}*/

/* 15. Usando switch, escrava um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.

int main(){
    setlocale(LC_ALL, "portuguese");
    char dia;

    printf("Entre com o numero correspondente ao dia da semana: ");
    dia = getche();

    switch (dia){

        case '1':
            printf("\nDomingo.\n");
            break;

        case 2:
            printf("\nSegunda-Feira.\n");
            break;

        case '3':
            printf("\nTerça-Feira.\n");
            break;

        case '4':
            printf("\nQuarta-Feira.\n");
            break;

        case '5':
            printf("\nQuinta-Feira.\n");
            break;

        case '6':
            printf("\nSexta-Feira.\n");
            break;

        case '7':
            printf("\nSábado.\n");
            break;

        default:
            printf("\nInformação inválida.");
    }
} */

/* 16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mes correspondente
a este umero. isto é, janeiro se 1, fevereiro se 2, e assim por diante.

int main(){
    setlocale(LC_ALL, "portuguese");

    char mes;

    printf("Entre com o numero correspondente do mes: ");
    mes = getche();

    switch (mes){

case '1':
    printf("\nJaneiro.\n");
    break;

case '2':
    printf("\nFevereiro.\n");
    break;

case '3':
    printf("\nMarço\n");
    break;

case '4':
    printf("\nAbril.\n");
    break;

case '5':
    printf("\nMaio.\n");
    break;

case '6':
    printf("\nJunho.\n");
    break;

case '7':
    printf("\nJulho\n");
    break;

case '8':
    printf("\nAgosto.\n");
    break;

case '9':
    printf("\nSetembro.\n");
    break;

case '10':
    printf("\nOutubro.\n");
    break;

case '11':
    printf("\nNovembro.\n");
    break;

case '12':
    printf("\nDezembro.\n");
    break;

default:


    }
    return 0;
} */

/*  17. Faça um progama que calcule e mostre a área de um trapézio. sabe-se que:
        A = ((basemaior + basemenor) * altura) / 2
Lembre-se: a base maior e a base menor devem ser numeros maiores ue zero.

void ler_e_validar(float *var){
    scanf("%f", var);

    while (*var < 0){
        printf("Entre com um número maior que 0: ");
        scanf("%f", var);
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    float basemaior, basemenor, altura;

    printf("Entre com a base maior: ");
    ler_e_validar(&basemaior);

    printf("Entre com a base menor: ");
    ler_e_validar(&basemenor);

    printf("Entre com a altura: ");
    ler_e_validar(&altura);

    printf("\n\nArea: %.2fm\n", ((basemaior + basemenor) * altura) / 2);
} */

/* 18. Faça um programa que mostre ao usuario um menu com 4 opções de operações matemáticas
(as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede
dois valores numéricos e realiza a operação, mostrando o resuntado e saindo.

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc;
    int n1, n2;

    printf("Escolha uma opção:\n");
    printf("| 1 | Adição (+)\n");
    printf("| 2 | Subtração (-)\n");
    printf("| 3 | Multiplicação (x)\n");
    printf("| 4 | Divisão (/)\n");
    opc = getche();

    printf("\nEntre com os dois números: ");
    scanf("%d %d", &n1, &n2);

    switch(opc){
        case '1':
            printf("\nAdição: %d\n", n1 + n2);
            break;

        case '2':
            printf("\nSubtração: %d\n", n1 - n2);
            break;

        case '3':
            printf("\nMultiplicação: %d\n", n1 * n2);
            break;

        case '4':
            printf("\nDivisão: %d\n", n1 / n2);
            break;

        default:
            printf("Informação inválida.");
    }
} */

/* 19. Faça um programa para verificar se um determinado número inteiro e divisivel por 3 ou 5, mas
não simultaneamente pelos 2.

int main(){
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    if (num % 5 == 0) printf("\nÉ divisivel por 5\n");
    else if (num % 3 == 0) printf("\nÉ divisivel por 3\n");
    else printf("\nNão é divisivel por 3 nem por 5.\n");
    return 0;
} */

/* 20. Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e,
se for, se é um triangulo escaleno, equilatero ou isosceles, considerando os segintes conceitos:
    - O comprimento de cada lado de um triangulo e menor do que a soma dos outros lados
    - Chama-se equilatero o triangulo que tem tres lados iguais
    - Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais
    - Recebe o nome de escaleno o triangulo que tem os três lados diferentes.

int main(){
    setlocale(LC_ALL, "portuguese");

    float a, b, c;

    printf("Entre com o lado A: ");
    scanf("%f", &a);

    printf("Entre com o lado B: ");
    scanf("%f", &b);

    printf("Entre com o lado C: ");
    scanf("%f", &c);

    if (a + b >= c && a + c >= b && b + c >= a){

        if (c == a && a == b && b == c) printf("\nTriângulo equilátero.");

        else if (a == b || c == a || b == c) printf("\nTriângulo Isósceles.\n");

        else if (a != b && c != a && b != c) printf("\nTriângulo escaleno.\n");

    } else printf("\nNão é possível formar um triângulo.\n");


    return 0;
} */

/* 21. Escreva o menu de opcoes abaixo. Leia a opcao do usuario e execute a operacao escolhida.
Escrea uma mensagem de erro se a opcao for invalida

Escolha a opcao:
1- Soma de 2 numeros
2- Diferenca entre dois numeros
3- Produto entre 2 numeros
4- Divisao entre 2 numeros

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc;
    int n1, n2;

    printf("Escolha uma opção: \n");
    printf("| 1 | Soma de 2 números\n");
    printf("| 2 | Diferença entre dois números\n");
    printf("| 3 | Produto entre 2 números\n");
    printf("| 4 | Divisão entre 2 números\n");
    opc = getche();

    printf("\n\nEntre com dois números: ");
    scanf("%d %d", &n1, &n2);

    switch (opc){
        case '1':
            printf("\nSoma: %d\n", n1 + n2);
            break;

        case '2':
            printf((n1 > n2) ? "\nDiferença: %d\n", n1 - n2 : "\nDiferença: %d\n", n2 - n1);
            break;

        case '3':
            printf("\nProduto: %d\n", n1 * n2);
            break;

        case '4':
            while (n1 == 0 || n2 == 0) {
                printf("Digite um numero diferente de 0: ");
                scanf("%d %d", &n1, &n2);
            }

            printf("\nDivisao: %d\n", n1 / n2);
            break;

        default:
            printf("Informação inválida.\n");
    }

    return 0;
} */

/* 22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar.
As condições de aposentadoria são:
    - Ter pelo menos 65 anos
    - Ou ter trabalhado pelo menos 30 anos
    - Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade, tempo;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    printf("Entre com o tempo de serviço: ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || idade >= 60 && tempo >= 25) printf("Pode se aposentar.\n");
    else printf("Não pode se aposentar.\n");
    return 0;
} */

/* 23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisivel
por 400 ou se for divisivel por 4 e não por 100. por exemplo: 1988, 1992, 1996.

int main(){
    setlocale(LC_ALL, "portuguese");

    int ano;

    printf("Entre com o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) printf ("É bissexto.\n");
    else printf("Não é bissexto.\n");

    return 0;
} */

/* 24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa
diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuario
entre com o valor e o estado do produto e o programa retorne se o preco final do produto acrescido do
imposto do estado em que ele será vendido. Se o estado digitado não for valido, mostrar uma mensagem de
erro.

int main(){
    setlocale(LC_ALL, "portuguese");

    char estado[3];
    float valor;

    printf("Entre com o estado: ");
    fflush(stdin);
    fgets(estado, 3, stdin);

    printf("Entre com o valor: ");
    fflush(stdin);
    scanf("%f", &valor);

    printf("%s\n", estado);

    if (strcmpi(estado, "MG") ==0) printf("\n1Preço final: %.2f\n", valor * 1.07);

    else if (strcmpi(estado, "SP") == 0) printf("\n2Preço final: %.2f\n", valor * 1.12);

    else if (strcmpi(estado, "RJ") == 0) printf("\n3Preço final: %.2f\n", valor * 1.15);

    else if (strcmpi(estado, "MS")== 0 ) printf("\n4Preço final: %.2f\n", valor * 1.08);

    return 0;
}*/

/* 25. Calcule as raízes da equação de 2 grau.
A variavel a tem que ser diferente de zero. Caso seja igual, imprima a mensagem "não é equação
de segundo grau"
    - se deta < 0, não existe real, imprima a mensagem "não existe raiz"
    - Se delta = -, existe uma raiz real. imprima a raiz e a mensagem "Raiz unica"
    - Se delta >= 0. imprima as duas raizes reais

int main(){
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    printf("Entre com o valor de A: ");
    scanf("%d", &a);

    printf("Entre com o valor de B: ");
    scanf("%d", &b);

    printf("Entre com o valor de C: ");
    scanf("%d", &c);

    if (a != 0) {

        float delta = pow(b, 2) - 4 * a * c;

        if (delta < 0) printf("Não existe raiz.\n");
        else if (delta == 0) printf("Raiz única. %.2f\n", sqrt(delta));
        else if (delta >= 0) printf("%.2f, %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));

    } else printf("Não é equação de segundo grau. ");

    return 0;
} */

/* 26. Leia a distancia em KM e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule
o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO             (Km/l)                                      MENSAGEM
menor que              8                                              Venda o carro!
entre                      8 e 14                                        Economico!
maior que               12                                             Super economico!

 int main(){
    setlocale(LC_ALL, "portuguese");

    int km, litros;

    printf("Entre com a distancia percorrida, em KM: ");
    scanf("%d", &km);

    printf("Entre com a quantidade de litros consumidos: ");
    scanf("%d", &litros);

    if (km / litros <= 8) printf("Venda o carro!\n");
    else if (km / litros <= 14) printf("Economico!\n");
    else printf("Super economico!\n");

    return 0;
 } */

/* 27. Escreva um prorama que, dada a idade de um nadador, classefique-o em uma das seguintes categorias:
infantil a - 5 a 7 anos
infantil b - 8 a 10
juvenil a -- 11 a 13
juvenil b -- 14 a 17
senior ----- maiores de 18

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);


    if (idade >= 5 && idade <= 7) printf("\nInfantil A\n");
    else if (idade <= 10) printf("\nInfantil B\n");
    else if (idade <= 13) printf("\nJuvenilA\n");
    else if (idade <= 17) printf("\nJuvenil B\n");
    else printf("\nSênior\n");

} */

/* 28.  Faca um programa que leia tres numeros inteiros positivos e efetue o calculo de uma das seguintes medias de
acordo com um valor numerico digitado pelo usuario:
(a) Geometrica:
(b) Ponderada:
(c) Harmonica:
(d) Aritmetica:

int main() {
    setlocale(LC_ALL, "portuguese");
    float media, n1, n2, n3;
    int opc;

    printf("Entre com a primeira nota: ");
    scanf("%f", &n1);

    printf("Entre com a segunda nota: ");
    scanf("%f", &n2);

    printf("Entre com a serceira nota: ");
    scanf("%f", &n3);

    printf("\n| 1 | Geométrica\n");
    printf("| 2 | Ponderada\n");
    printf("| 3 | Harmônica\n");
    printf("| 4 | Aritmtica\n");
    printf("Opcao: ");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            printf("\n%.2f\n", (n1 + n2 + n3) / 3);
            break;

        case 2:
            printf("\n%.2f\n", (n1 + (n2 * 2) + (n3 * 3) / 6));
            break;

        case 3:
            printf("\n%.2f\n", (1 / (1 / n1) + (1 / n2) + (1 / n3)));
            break;

        case 4:
            printf("\n%.2f\n", (n1 + n2 + n3) / 3);
            break;
    }
    return 0;
} */


/* 29. Faca uma prova matematica para crianças que estao aprendendo a somar numeros inteiros menores do que
100. Escolha numeros aleatorios entre 1 e 100, e mostre na tela a pergunta: Qual a soma de a + b, onde a e b
são os numeros aleatorios. Peça a resposta. Faça cinco perguntas ao aluno, e mostr para eleas perguntas e as
respostas corretas, alem de quantas vezes o aluno acertou.


int main(){
    int n1, n2, resp, respA, acertos = 0, erros = 0, opc;

    for (int c=0; c<5; c++) {

        srand(time(NULL));
        n2 =  rand() % 101;
        n1 = rand() % 101;

        resp = n1 + n2;

        printf("Qual a soma de %d + %d? ", n1, n2);
        scanf("%d", &respA);

        if (resp == respA){
            printf("Parabens! resposta correta!\n\n");
            acertos += 1;
        } else {
            printf("Resposta incorreta. A resposta correta e %d.\n\n", resp);
            erros += 1;
        }
    }

    printf("\nAcertos: %d\nErros: %d", acertos, erros);
} */

/* 30. Faca um programa que receba tres numeros e mostre-os em ordem crescente.

void BubbleSort(int *vet);

int main() {
    int num[3];

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num[0]);

    printf("Entre com o segundo numero: ");
    scanf("%d", &num[1]);

    printf("Ente com o terceiro numero: ");
    scanf("%d", &num[2]);

    BubbleSort(num);

    printf("\n%d  %d  %d\n", num[0], num[1], num[2]);
}

void BubbleSort(int *vet){
      for (int c=0; c<3; c++){
            bool troca = 0;

            for (int c2=c; c2<3; c2++){
                if (vet[c] > vet[c2]){
                    int aux = vet[c];
                    vet[c] = vet[c2];
                    vet[c2] = aux;

                    troca = 1;
                }
            }
    if (!troca) return;
    }
}
*/

/* 31. Faca um programa que receba a altura e o peso de uma pessoa. Deacordo com a tabela a seguir, veriﬁque e mostra qual a classiﬁcac¸˜ao dessa pessoa.
Altura                                                Peso
                                Ate 60         Entre 60 e 90 (Inclusive)        Acima de 90
Menor que 1,20            A                      D                                       G
De 1,20 a 1,70                B                       E                                       H
Maior que 1,70              C                      F                                        I

int main() {
    float altura, peso;

    printf("Entre com seu peso: ");
    scanf("%f", &peso);

    printf("Entre com sua altura: ");
    scanf("%f", &altura);

    if (altura < 1.20){
        if (peso <= 60) printf("A\n");
        else if (peso <= 90) printf("D\n");
        else printf("G\n");

    } else if (altura <- 1.70) {
        if (peso <= 60) printf("B\n");
        else if (peso <= 90) printf("E\n");
        else printf("H\n");

    } else {
        if (peso <= 60) printf("C\n");
        else if (peso <= 90) printf("F\n");
        else printf("I\n");
    }

    return 0;
}  */

/* 32. Faça um programa que leia o código do produto escolhido do cardapio de uma lanchonete e a quantidade.
O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será
calculado um pedido. O cardapio da lanchonete segue o padrao abaixo:

Especializaçao      Codigo     Preço
cachorro quente     100        1.20
bauru simples       101        1.30
bauru com ovo       102        1.50
hanburguer          103        1.20
cheeseburguer       104        1.70
suco                105        2.20
refrigerante        106        1.00

int main(){
    setlocale(LC_ALL, "portuguese");

    int codigo, qtd;

    printf("Entre com o codigo: ");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &qtd);

    switch (codigo){
        case 100:
            printf("\n%.2f\n", 1.20 * qtd);
            break;

        case 101:
            printf("\n%.2f\n", 1.30 * qtd);
            break;

        case 102:
            printf("\n%.2f\n", 1.50 * qtd);
            break;

        case 103:
            printf("\n%.2f\n", 1.20 * qtd);
            break;

        case 104:
            printf("\n%.2f\n", 1.70 * qtd);
            break;

        case 105:
            printf("\n%.2f\n", 2.20 * qtd);
            break;

        case 106:
            printf("\n%.2f\n", 1.0 * qtd);
            break;

    }

    return 0;
} */

/* 33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o
preço novo novo (de acordo com a seguinte tabela)

PREÇO ANTIGO        PERCENTUAL DE AUMENTO
ate 50                           5%
entre 50 e 100              10%
acima de 100                15%

int main(){
    setlocale(LC_ALL, "portuguese");

    float preco;

    printf("Entre com o preço: ");
    scanf("%f", &preco);

    if (preco <= 50) printf("Novo preço: R$ %.2f\n", preco * 1.05);
    else if (preco <= 100) printf("Novo preço: R$ %.2f\n", preco *1.10);
    else if (preco > 100) printf("Novo preço: R$ %.2f\n", preco * 1.15);

    return 0;
} */

/* 34. Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo,
quando o aluno tem mais de 20 faltas, ocorre uma redução de conceito

NOTA          CONCEITO(ate 20)    CONCEITO(+20)
9 - 10          A                   B
7.5 - 8.9       B                   C
5.0 - 7.4       C                   D
4 - 4.9         D                   E
0 - 3.9         E                   E

int main(){
    setlocale(LC_ALL, "portuguese");

    int faltas;
    float nota;

    printf("Entre com a nota: ");
    scanf("%f", &nota);

    printf("Entre com as faltas: ");
    scanf("%f", &faltas);


    if (nota < 3.9){
        printf("E");

    } else if (nota < 4.9){
        if (faltas <= 20) printf("D");
        else printf("E");

    } else if (nota <= 7.4){
        if (faltas <= 20) printf("C");
        else printf("D");

    } else if (nota <= 8.9){
        if (faltas <= 20) printf("B");
        else printf("C");

    } else if (nota <= 10){
        if (faltas <= 20) printf("A");
        else printf("B");
    }

    return 0;
} */

/* 35. Leia uma data e determine se ela é valida. ou seja, verifique se o mes esta entre 1 e 12, e se o dia existe
naquele mes. Note que Fevereiro tem 29 dias em anos bissextos e 28 dias em anos não bissextos.

int main(){
    setlocale(LC_ALL, "portuguese");

    int data[3];

    printf("Entre com a data separando por espaço: (dd mm aaaa)");
    scanf("%d %d %d", &data[0], &data[1], &data[2]);

    if (data[2] % 400 == 0 || data[2] % 4 == 0 && data[2] % 100 != 0) {
        while (data[0] <= 0 || data[0] > 28){
            printf("\nDia inválido, tente novamente.\n");
            scanf("%d", &data[0]);
        }
    } else {
        while (data[0] <= 0 || data[0] > 30){
            printf("\nDia inválido, tente novamente.\n");
            scanf("%d", &data[0]);
        }
    }

    while (data[1] < 0|| data[1] > 12) {
        printf("\nMês inválido, tente novamente. \n");
        scanf("%d", &data[1]);
    }


    return 0;
} */

/* 36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor.
Para calcular a comissão, considere a tabela abaixo:

VENDA MENSAL                                    COMISSAO
>=   R$100.000,00                                 R$700,00 + 16% das vendas
< R$100.000,00 >=  R$80.000,00          R$650,00 +14% das vendas
< R$80.000,00 >= R$60.000,00            R$600,00 +14% das vendas
< R$60.000,00 >= R$40.000,00            R$550,00 +14% das vendas
< R$40.000,00 >= R$20.000,00            R$500,00 +14% das vendas
< R$20.000,00                                       R$400,00 +14% das vendas

int main(){
    setlocale(LC_ALL, "portuguese");

    float venda;

    printf("Entre com a venda mensal: ");
    scanf("%f", &venda);

    if (venda <= 20.000) printf("Comissão: %.2f", (venda * 0.14) + 400);
    else if (venda <= 40000) printf("Comissão: %.2f", (venda * 0.14) + 500);
    else if (venda <= 60000) printf("Comissão: %.2f", (venda * 0.14) + 550);
    else if (venda <= 80000) printf("Comissão: %.2f", (venda * 0.14) + 600);
    else if (venda <= 100000) printf("Comissão: %.2f", (venda * 0.14) + 650);
    else printf("Comissão: %.2f", (venda * 0.16) + 700);

    return 0;
} */

/* 37. As tarifas de certo parque de estacionamento sao as seguintes:
    - 1 e 2 hs = 1,00
    - 3 e 4 = 1.40
    - 5 - n = 2.00

O numero de horas a pagar e sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante
61 minutos pagara por duas horas, que e o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de
chegada ao parque e partida deste sao apresentados na forma de pares de inteiros, representando horas e minutos.
Por exemplo, o par 12 50 representara "dez para a uma da tarde". Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preco cobrado pelo estacionamento. Admite-se que a
chegada e a partida se dao com intervalo nao superior a 24 horas. Portanto, se uma dada hora de chegada for superior
a da partida, isso nao e uma situacacao de erro, apenas significara que a partida ocorreu no dia seguinte ao da chegada

int main(){
    setlocale(LC_ALL, "portuguese");
    int hora_chegada[2], hora_partida[2], hora, min, min_total, hora_total;

    printf("Entre com a hora de chegada (hh mm)) ");
    scanf("%d %d", &hora_chegada[0], &hora_chegada[1]);

    printf("Entre com a hora de saida) (hh mm)) ");
    scanf("%d %d", &hora_partida[0], &hora_partida[1]);

    if (hora_chegada[0] > hora_partida[0]) hora_partida[0] += 24;

    if (hora_chegada[1] > hora_partida[1]) {
        hora_partida[1] += 60;
        hora_partida[0] -= 1;
    }

    min= hora_partida[1] - hora_chegada[1];
    hora = hora_partida[0] - hora_chegada[0];

    min_total = (int) (hora * 60) + min;

    if (min_total <= 120) {
        if (min_total <= 60) {
            printf("Preço: R$ 1.00.\n");
        } else {
            printf("Preço: R$ 2.00.\n", preco);
        }
    } else if  (min_total <= 240) {
        if (min_total <= 180) {
            printf("Preço: R$ %.2f.\n", 2 + 1.40 );

        } else {
            printf("Preço: R$ %.2f.\n", 2 + (1.40 * 2));
        }
    } else {
        hora_total = (int) min_total / 60;
        printf("Preço: R$ %.2f.\n", 4.40 + ((hora_total - 4) * 2)) ;
    }
} */

/* 38. Leia uma data de nascimento de uma pessoa fornecida atraves de tres numeros inteiros: Dia, Mês e Ano.
Teste a validade desta data para saber se esta é uma data válida. Teste se o dia fornecido é um dia válido: dia
> 0, dia <= 28 para o mes de fevereiro (29 se o ano for bissexto), dia <= 30 em abril, junho, setembro e novembro,
dia <= 31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano
atual (use uma constante definida com o valor igual a 2008). Imprimir: "data válida" ou "data inválida" no final da
execução do programa.
#define ANO 2018

int main() {
    setlocale(LC_ALL, "portuguese");

    int data[3];
    bool valido = 1;

    printf("Entre com a data seguindo o exemplo (dd mm aaaa) : ");
    scanf("%d %d %d", &data[0], &data[1], &data[2]);

    if (data[2] > ANO) valido = 0;
        if (data[2] % 400 == 0 || data[2] % 4 == 0 && data[2] % 100 != 0) {
            if (data[1] == 2){
                if (data[0] < 0 || data[0] > 29)  valido = 0;
            }

        } else if (data[0] < 0 || data[0] > 28) valido = 0;
        else {
            if (data[1] < 0 || data[1] > 12)  valido = 0;

            if (data[1] == 4 || data[1] == 6 || data[1] == 9 || data[1] == 12) {
                if (data[0] < 0 || data[0] > 30) valido = 0;
            } else if (data[0] < 0 || data[0] > 31) valido = 0;
        }

        printf(valido ? "Data válida.\n" : "Data inválida.\n");

    return 0;
} */

/* 39. Uma empresa decide dar um aumento aos seus funcionarios de acordo com uma tabela que considera o
salário atual e o tempo de serviço de cada um. Os funcionarios com menor salario terao um aumento
proporcionalmente maior do que os funcionarios com um salario maior, e conforme o tempo de serviço na
empresa, cada funcionario ira receber um bonus adicional de salario. Faca um programa que leia:
    - o valor do salario atual do funcionario;
    - o tempo de serviço desse funcionario da empresa (em anos)
Use as tabelas abaixo para calcular o salario reajustado deste funcionario e imprima o valor do salario final
reajustado, ou uma mensagem caso o funcionario nao tenha direito a nenhum aumento.

SALARIO ATUAL           REAJUSTE(%)         TEMPO DE SERVIÇO            BONUS
ate 500,00                      25%                         < 1 ano                                 Sem bonus
ate 1000,00                     20%                         1 - 3 anos                             100,00
ate 1500,00                     15%                          4 - 6 anos                            200,00
ate 2000,00                    10%                         7 - 10 anos                            300,00
+2000 ,00                       Sem reajuste           +10 anos                              500,00

 void verificar_salario(float *salario);

int main(){
    setlocale(LC_ALL, "portuguese");

    float salario;
    int anos;

    printf("Entre com o seu salário: ");
    scanf("%f", &salario);

    printf("Quantos anos de serviço? ");
    scanf("%d", &anos);

    verificar_salario(&salario);

    if (anos < 1) printf("Novo salario: R$ %d\nSem bonus", salario);
    else if (anos < 4) printf("Novo salario: R$ %.2f,", salario + 100);
    else if (anos < 6) printf("Novo salario: R$ %.2f", salario+ 200);
    else if (anos < 11)  printf("Novo salario: R$ %.2f", salario + 300);
    else if (anos > 10)  printf("Novo salario: R$ %.2f", salario + 500);

    return 0;
}

void verificar_salario(float *salario){
    if (salario < 501) *salario *= 1.25;
    else if (salario < 1001) *salario *= 1.20;
    else if (salario < 1501)  *salario *= 1.15;
    else if (salario < 2001) *salario *= 1.10;
} */

/* 40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor e dos
impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia
o custo de fábrica e escreva o custo ao consumidor.

CUSTO DE FABRICA            % DO DISTRIBUIDOR           % DOS IMPOSTOS
ate 12.000.00                                5                                      isento
12.000.00 - 25.000.00                  10                                      15
> 25.000.00                                 15                                      20

int main(){
    setlocale(LC_ALL, "portuguese");

    float custo;

    printf("Entre com o custo de fabrica: ");
    scanf("%f", &custo);

    if ( custo <= 12000) printf("Valor com impostos: R$ %.f", custo * 1.05);
    else if (custo <= 25000) printf("Valor com impostos: R$ %.f", custo * 1.25);
    else if (custo > 25000) printf("Valor com impostos: R$ %.f", custo * 1.45);

    return 0;
} */

/* 41. /*Faca um algoritmo que calcule o IMC de uma pessoa e mostre sua classiﬁcacao de acordo com a tabela abaixo:

IMC                    Classiﬁcacao
< 18,5                 Abaixo do Peso
18,6 - 24,9            Saudavel
25,0 - 29,9            Peso em excesso
30,0 - 34,9            Obesidade Grau I
35,0 - 39,9            Obesidade Grau II(severa)
≥40,0                   Obesidade Grau III(morbida)

int main()
{
    float peso, altura, imc;

    printf("Entre com a sua altura: ");
    scanf("%f", &altura);

    printf("Entre com o seu peso: ");
    scanf("%f", &peso);

    imc = (peso / pow(altura, 2));

    if (imc < 18.5) printf("Abaixo do peso");
    else if (imc < 25) printf("Saudavel.\n");
    else if (imc < 30) printf("Peso em excesso.\n");
    else if (imc < 35) printf("Obesidade Grau I.\n");
    else if (imc < 40) printf("Obesidade Grau II.\n");
    else printf("Obesidade Grau III");

    return 0;
} */


