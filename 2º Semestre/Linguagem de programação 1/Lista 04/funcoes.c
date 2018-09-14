#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "funcoes.h"

void BubbleSort(int *vet){
      for (int c=0; c<5; c++){
            bool troca = 0;

            for (int c2=c; c2<10; c2++){
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

int fatorial(float n){
    if (n == 1){
        return 1;
    }
    return n * fatorial(n-1);
}

// 1
void Multiplo_3(){
    int multiplo=0, i=0;

    do {
        if (i % 3 == 0){
            printf("%d ", i);
            multiplo ++;
        }
        i++;
    }while (multiplo <= 5);

    printf("\n");
    system("pause");
}

//2
void Escreve_1a100(){
    int c = 0;


    for (int i=1; i<101; i++) printf("%d ", i);
    printf("\n\n");

    while (c != 101) printf("%d ", c++);
    printf("\n\n");

    c = 0;

    do {
        printf("%d ", c ++);
    } while (c != 101);
    printf("\n\n");
    system("pause");
}


// 3
void Contagem_Regressiva(){
    int num = 10;

    while (num >= 0){
        printf("%d\n", num);
        num --;
    }
    printf("FIM!");
    system("pause");
}

//4
void Imprime1000(){
    for (int c=0; c<=100000; c+=1000) printf("%d\n", c);
}

// 5
void Somar_10_valores(){
    int num, soma = 0, c;

    printf("Entre com 10 números\n");

    for (c=0; c<10; c++){
        printf("-> ");
        scanf("%d", &num);
        soma += num;
    }
    printf("%d\n", soma);
    system("pause");
}

// 6
void Media_10_Num(){
    float num, soma = 0;

    for (int c=0; c<10; c++){
        printf("%dº numero: ", c+1);
        scanf("%f", &num);
        soma += num;
    }

    printf("\nMédia: %.2f", soma / 10);
    system("pause");

}

// 7
void MediaNumPositivo(){
    float num, soma = 0;

    for (int c=0; c<10; c++){
        printf("%dº numero: ", c+1);
        scanf("%f", &num);
        if (num > 0) soma += num;
    }

    printf("\nMédia: %.2f", soma / 10);
    system("pause");
}

// 8
void Maior_menor10(){
    int vet[10];

    for (int c=0; c<10; c++){
        printf("%dº: ", c+1);
        scanf("%d", &vet[c]);
    }

    BubbleSort(vet);

    printf("Maior numero: %d\nMenor numero: %d", vet[0], vet[9]);
    system("pause");
}

// 9
void Primeiros_N_Impares(){
    int num;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    printf("\n");
    for (int c=0; c<=num; c++) if (c % 2 != 0) printf("%d ", c);
    printf("\n");
    system("pause");
}

// 10
void Soma_50_Pares(){
    int soma = 0;

    for (int c=0; c<51; c++) {
        if (c % 2 == 0) {
            soma += c;
        }
    }

    printf("A soma dos primeiros 50 números pares é: %d\n", soma);
    system("pause");
}

// 11
void NumNaturalAteN_Crescente(){
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);
    printf("\n");

    for (int c=0; c<= n; c++) printf("%d ", c);
    system("pause");
}

// 12
void NumNaturalAteN_Decrescente(){
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);
    printf("\n");

    for (int c=n; c>=0; c--) printf("%d ", c);
    system("pause");
}

// 13
void Num_Par_0aN_Crescente() {
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int c=0; c<=n; c++) if (c % 2 == 0) printf("%d ", c);
    system("pause");
}

// 14
void Num_Par_0aN_Decrescente() {
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int c=n; c>=0; c--) if (c % 2 == 0) printf("%d ", c);
    system("pause");
}

// 15
void Num_Impar_0aN_Crescente() {
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int c=0; c<=n; c++) if (c % 2 != 0) printf("%d ", c);
    system("pause");
}

// 16
void Num_Impar_0aN_Decrescente() {
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int c=n; c>=0; c--) if (c % 2 != 0) printf("%d ", c);
    system("pause");
}
// 17
void Soma_n_Naturais() {
    int n, soma = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int c=0; c<=n; c++) soma += c;

    printf("A soma dos %d primeiros numeros naturais é: %d\n", n, soma);
    system("pause");
}

// 18
void Maior_Menor_Dinamico(){
    int maior, menor, c = 0, num;

    printf("Digite 1000 para parar.\n");
    do {
        printf("-> ");
        scanf("%d", &num);

        if (c == 0){
            maior = num;
            menor = num;
        }
        if (num > maior && num != 1000){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }

        c ++;
    } while (num != 1000);

    printf("\n\nMaior: %d\nMenor: %d\n", maior, menor);

    system("pause");
}

// 19
void Algarismos_Separados(){
    int num = 0, nums[3];

    while (num < 100 || num > 999) {
        printf("Escolha um numero entre 100 e 999: ");
        scanf("%d", &num);
    }

    for (int i=0; i<3; i++) {
        nums[i] = num%10;
        num = num / 10;
    }

    for (int i=2; i>-1; i--){
        printf("%d  ", nums[i]);
    }
    system("pause");

}

// 20
void Numeros_Pares_E_Qtd_Digitada(){
    int num=3, par=0, qtd=0;

    printf("Entre com os números: (Digite 1000 para sair do programa)\n\n");

    do {
        if (num % 2 == 0){
            par ++;
        }
        qtd ++;
        printf("-> ");
        scanf("%d", &num);
    } while (num != 1000);

    printf("Total de numeros digitados: %d\nTotal de numeros pares: %d", qtd-1, par-1);
    system("pause");
}

// 21
void Soma_Multiplica() {
    int inicio, fim, soma = 0, multiplicacao = 1;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &inicio);

    printf("Entre com o segundo numero: ");
    scanf("%d", &fim);

    while (fim < inicio) {
        printf("O segundo numero deve ser maior que o primeiro. \n");

        printf("Entre com o segundo numero: ");
        scanf("%d", &fim);
    }

    for (int c=inicio; c<= fim; c++) {
        multiplicacao *= c;
        soma += c;
    }

    printf("\nSoma: %d\nMultiplicação: %d\n", soma, multiplicacao);
    system("pause");
}

// 22
void Media_Notas() {
    float nota, soma = 0;
    int cont = 0;

    do {
        printf("Nota: ");
        scanf("%f", &nota);


        if (nota > 9 && nota < 21 )  {
                soma += nota;
                cont += 1;
        }

    } while (nota > 9 && nota < 21);

    printf("\nMedia: %.2f\n", soma / cont);
    system("pause");
}

// 23
void Divisores() {
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    printf("\nOs divisores de %d são: ", n);
    for (int c=1; c<=n; c++) if (n % c == 0) printf("%d ", c);
    system("pause");
}

// 24
void Soma_Divisores() {
    int n, soma = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int c=1; c<=n; c++) {
            if (n % c == 0) {
                    soma += c;
            }
    }

    printf("\nA soma dos divisores de %d é %d\n", n, soma - n);
    system("pause");
}

// 25
void Soma_Multiplos_3ou5() {
    int soma = 0;

    for (int i=0; i<1001; i++){
        if (i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }

    printf("\nA soma dos multiplos de 3 e 5 menore que 100 é: %d\n", soma);
    system("pause");
}

// 26
void Multiplo_11_13_17() {
    int num, i;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    i = num;

    while (1){
        if (i % 11 == 0) {
            printf("%d é multiplo de 11\n", i);
            break;

        } else if (i % 13 == 0) {
            printf("%d é multiplo de 13\n", i);
            break;

        } else if (i % 17 == 0) {
            printf("%d é multiplo de 17\n", i);
            break;
        }

        i += 1;
    }
    system("pause");
}

// 27
void Numero_harmonico(){
    int num, c;
    float h = 0;

    printf("Entre com um número positivo: ");
    scanf("%d", &num);
    while (num < 0){
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    }

    for(c=num; c >= 1; c--){
        h += 1.0 / c;
    }

    printf("O valor de H(n) é: %.2f\n", h);
    system("pause");
}

// 28
void Calculo_Da_Formula(){
    float result=1, fat=1;
    int n, c;

    printf("Entre com o valor de N: ");
    scanf("%d", &n);

    for( c=1; c<=n ; c++){
    //fat *= c; pode ser isso ou..
    fat = fatorial(c);
    result += 1.0/ fat;
    }

    printf("%.4f\n", result);
    system("pause");
}

// 29
void Calculo_Serie_5_Termos() {
    float s = 0;
    int F = 2;
    for (int i=0; i<6; i++) {
        F += 2;
        s += i / fatorial(F);
    }

    printf("O valor de s é: %f\n", s);
    system("pause");
}

// 30
void Calcular_3_Sequencias() {
    int num, sequencia1 = 0, sequencia2 = 0, sequencia3 = 0, c= 1;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {
        sequencia1 += i;

        if (i % 2 != 0) sequencia2 -= i;
        else sequencia2 += i;

        if (i == c){
            sequencia3 += i;
            c += 2;
        }
    }

    printf("\nSequencia 1: %d\nSequencia 2: %d\nSequencia 3: %d\n", sequencia1, sequencia2, sequencia3);
    system("pause");
}

// 31
void Calcular_Valor_De_S() {
    float n1 = 1, soma = 0;

    for (int n2=1; n2<51; n2++) {
        soma += n1 / n2;
        n1 += 2;
    }

    printf("O valor de S é: %.2f\n", soma);
    system("pause");
}

// 32
void Lancamento_Dados() {
    char opc = 's';
    int dado1, dado2;

    srand((unsigned)time(NULL));

    while (opc == 's' ) {
        dado1 = rand() % 6;
        dado2 = rand() % 6;

        if (dado1 > dado2) printf("Dado1 > dado2 (%d > %d)\n", dado1, dado2);
        else if (dado2 > dado1) printf("Dado2 > dado1 (%d > %d)\n", dado2, dado1);
        else printf("Dado1 = dado2 (%d = %d)\n", dado1, dado2);

        do {
            printf("Deseja lançar os dados novamente? [s] [n]");
            opc = getche();
            tolower(opc);
            printf("\n");

            if (opc != 's' && opc != 'n') printf("Opção inválida, tente novamente.\n");
        } while (opc != 's' && opc != 'n') ;
    }

}

// 33
void N_nums_naturais_multiplos_de_i_j() {
    int n, i, j, cont = 0, c = 0;

    printf("Entre com os valore de n, i, e j, respectivamente: ");
    scanf("%d %d %d", &n, &i, &j);

    while (cont < 6) {
        if (c % i == 0 || c % j == 0) {
                printf("%d ", c);
                cont++;
        }
        c++;
    }
    printf("\n");
    system("pause");
}

// 34
void Num_divisivel_20() {
 int num = 1, divisor, c;
 printf("Esse codigo está meio lento. Espera um pouquinho que ele funciona :)\n\n");
   while (num > 0 && c != 20) {
      divisor = 1;
      c = 0;
      while (divisor <= 20) {
         if(num % divisor == 0)
            c++;
         divisor++;
      }
      num++;
   }
   printf("O menor número divisivel pelos numero de 1 a 20 é: %d\n", num - 1);
   system("pause");
}

// 35
void Soma_Impares_Intervalo() {
    int inicio, fim, soma = 0;

    printf("Entre com os valores de início e fim, respectivamente: ");
    scanf("%d %d", &inicio, &fim);

    if (inicio < fim) {
        for (int i=inicio; i<=fim; i++)
            if (i % 2 != 0) soma += i;
        printf("A soma dos números impares entre %d e %d é %d\n", inicio, fim, soma);
    } else
        printf("Intervalo de valores inválido. \n");
        system("pause");
}

// 36
void Diferenca_Soma_Quadrado() {
    int somaQuadrado = 0, soma = 0;

    for (int i=1; i<101; i++) {
        somaQuadrado += pow(i, 2);
        soma += i;
    }

    printf("A a diferença da soma dos quadrados dos numeros de 1 a 100 é: %d\n",soma * soma - somaQuadrado);
    system("pause");
}

// 37
void Verificar_Propriedade() {
    int num = 0;

    while (num < 1000 || num > 9999) {
        printf("Entre com um numero entre 1000 e 9999: ");
        scanf("%d", &num);
    }
    printf("%d = %d + %d = %d\n%d^2 = %d \n",num, num/100, num%100, (num/100)+(num%100), (num/100)+(num%100), num);
    system("pause");
}

// 38
#define SOMA 1000

void Terno_Pitagorico() {
    int c;
    for (int a = 1; a <= SOMA/3; a++) {
        for (int b = a + 1; b <= SOMA/2; b++) {
            c = SOMA - a - b;
            if ( a*a+ b*b== c*c ) printf("A = %d, B = %d, C = %d\n",a, b, c);
        }
    }
    system("pause");
}

// 39
void Area_Triangulo() {
    float base, altura;

    printf("Entre com a base ");
    scanf("%f", &base);

    printf("Entre com a altura: ");
    scanf("%f", &altura);

    printf("\nA area do triangulo é: %.2f", (base * altura) / 2);
    system("pause");

}

// 40
void Maior_E_Menor_Ate0(){
    int num, maior, menor, c=1;

    printf("Entre com os numeros (digite um numero negativo para sair)\n-> ");
    scanf("%d", &num);

    do{
        if (c == 1){
            maior = num;
            menor = num;
            c++;
        }

        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
        printf("-> ");
        scanf("%d", &num);

    } while (num >= 0);

    printf("\nMaior: %d\nMenor: %d\n", maior, menor);
    system("pause");
}

// 41
void Resistores(){
    float r1=1, r2=1;

    do{
        printf("Entre com os valores de R1 e R2: (Digite 0 para sair) ");
        scanf("%f %f", &r1, &r2);

        if (r1 != 0 && r2 != 0) printf("-> %.2f\n\n", (r1 * r2) / (r1 + r2));

    } while (r1 != 0 && r2 != 0);
    system("pause");
}

// 42
void Quadrado_Cubo_Raiz(){
    float n;

    printf("Entre com um número (digite um numero igual ou menor que 0 para sair): ");
    scanf("%f", &n);

    do {

        printf("Ao quadrado: %.2f\n", pow(n, 2));
        printf("Ao cubo: %.2f\n", pow(n, 3));
        printf("Raiz quadrada: %.2f\n\n", sqrt(n));

    printf("Entre com um número (digite um numero igual ou menor que 0 para sair): ");
    scanf("%f", &n);

    } while (n > 0);
    system("pause");
}

// 43
void Idade_Media_grupo() {
    int idade = 1, soma_idade = 0, cont = 0;

    while (idade != 0) {
        printf("Entre com sua idade: ");
        scanf("%d", &idade);
        soma_idade += idade;
        cont ++;
    }

    printf("A média de idade do grupo é de: %d\n", soma_idade / (cont - 1));
    system("pause");
}

// 44
void Fibonacci(){
    int n, t1=0, t2=1, t3=0;

    printf("Entre com um  número: ");
    scanf("%d", &n);

    if (n >= 2){
        printf("%d %d ", t1, t2);

        while (t3 < n){
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
            printf("%d ", t3);
        }
    } else {
        printf("%d", t1);
    }
    system("pause");
}

// 45
void Converter_KMh_Em_Ms() {
    float kmH;

    printf("Quantos KM/H? ");
    scanf("%f", &kmH);

    printf("%.2f km/h corresponde a %.2f m/s\n", kmH, kmH / 3.6);
    system("pause");
}

// 46
void adivinhacao(){
    int tentativas=0, num, numpc;

    numpc = rand() % 1000;
    printf("Tente adivinhar o numero que escolhi!\n");
    printf("Entre com um número: ");
    scanf("%d", &num);

    do {
        tentativas ++;
        if (num > numpc){
            printf("Menos\n");
        } else {
            printf("Mais\n");
        }
        printf("Entre com um numero: ");
        scanf("%d", &num);
    } while (num != numpc);

    printf("\nParabens! você acertou em %d tentativas.\n", tentativas);
    system("pause");
}

// 47
void PedirNumero(int *n1, int *n2){
    printf("Entre com o primeiro número: ");
    scanf("%d", n1);

    printf("Entre com o segundo numero: ");
    scanf("%d", n2);
}

void Calculo_Operacoes() {
    char opc = 'x';
    int num1, num2;

    while (opc != '5') {
        printf("[ 1 ] Adição\n");
        printf("[ 2 ] Subtração\n");
        printf("[ 3 ] Multplicação\n");
        printf("[ 4 ] Divisão\n");
        printf("[ 5 ] Sair");
        printf("Opção: ");
        opc = getche();

        printf("\n\n");


        switch (opc) {
            case '1':
                PedirNumero(&num1, &num2);
                printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
                break;

            case '2':
                PedirNumero(&num1, &num2);
                printf("%d - %d = %d\n\n", num1, num2, num1 - num2);
                break;

            case '3':
                PedirNumero(&num1, &num2);
                printf("%d x %d = %d\n\n", num1, num2, num1 * num2);
                break;

            case '4':
                PedirNumero(&num1, &num2);
                printf("%d / %d = %d\n\n", num1, num2, num1 / num2);
                break;

            case '5':
                printf("Fim do programa\n");
                break;

            default:
                printf("Opção inválida.\n\n");
        }
    }
    system("pause");
}

// 48
void Soma_Fibonnaci() {
    int  t1=0, t2=1, t3=0;
    int  soma = 2;

    while (t3 < 4000000){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        soma += t3;
    }

    printf("A soma dos termos é: %d\n", soma);
    system("pause");
}

// 49
void Caderneta_Carlos() {
    float Sal_Joao, Sal_Carlos, Rend_Carlos, Rend_Joao;
    int meses = 0;

    printf("Salário do Carlos: ");
    scanf("%f", &Sal_Carlos);

    Sal_Joao = Sal_Carlos / 3;

    Rend_Carlos = Sal_Carlos / (100 * 0.02);
    Rend_Joao = Sal_Joao / (100 * 0.05);

    while (Rend_Joao < Rend_Carlos) {
        Rend_Carlos *= meses;
        Rend_Joao *= meses;
        meses ++;
        printf("%d", meses);
    }

    printf("Para igualar o valor, João levou %d meses\n", meses);
    system("pause");
}

// 50
void Chico_e_ze() {
    float Chico = 1.50, Ze = 1.10;
    int anos = 0;

    while (Chico > Ze) {
        Chico += 0.2;
        Ze += 0.3;
        anos++;
    }

    printf("Levará %d anos para que Zé chegue a altura de Chico.\n", anos);
    system("pause");
}

// 51
void Aumento_Salario() {
    float aumento = 1.5;
    double salario = 2000;
    int  ano = 1995;

    while (ano < 2018) {
        salario += (aumento + 100) / 100 ;
        aumento *= 2;
        ano ++;

    }
    printf("%.2f", salario);
    system("pause");
}

// 52
void Saque_Banco() {
    int A_Sacar, *notas;

    notas = (int*) calloc (7, sizeof(int));

    printf("Quanto deseja sacar? ");
    scanf("%d", &A_Sacar);

    printf("\n");

    while (A_Sacar - 100 >= 0) {
            notas[0] ++;
            A_Sacar -= 100;
    }
    if (notas[0] > 0) printf("%d nota(s) de 100\n", notas[0]);

    while (A_Sacar - 50 >= 0) {
        notas[1] ++;
        A_Sacar -= 50;
    }
    if (notas[1] > 0) printf("%d nota(s) de 50\n", notas[1]);

    while (A_Sacar - 20 >= 0) {
        notas[2] ++;
        A_Sacar -= 20;
    }
    if (notas[2] > 0) printf("%d nota(s) de 20\n", notas[2]);

    while (A_Sacar - 10 >= 0) {
        notas[3] ++;
        A_Sacar -= 10;
    }
    if (notas[3] > 0) printf("%d nota(s) de 10\n", notas[3]);

    while (A_Sacar - 5 >= 0) {
        notas[4] ++;
        A_Sacar -= 5;
    }
    if (notas[4] > 0) printf("%d nota(s) de 5\n", notas[4]);

    while (A_Sacar - 2 >= 0) {
        notas[5] ++;
        A_Sacar -= 2;
    }
    if (notas[5] > 0) printf("%d nota(s) de 2\n", notas[5]);

    while (A_Sacar - 1 >= 0) {
        notas[6] ++;
        A_Sacar -= 1;
    }
    if (notas[6] > 0) printf("%d nota(s) de 1\n", notas[6]);
    system("pause");
}

// 53
void Triangulo_de_Floyd(){
    int num, cont = 1;

    printf("Entre com a quantidade de linhas: ");
    scanf("%d", &num);

    for (int i=-1; i<num; i++){
        for (int j=-1; j<i; j++){
            printf("%d ", cont);
            cont ++;
        }
                printf("\n");
    }
    system("pause");
}

// 54
int EhPrimo(int num) {
	int i;

	for(i=2;i<num;i++)
		if(num % i == 0 && num != 1) return 0;
			return 1;
}

void Verificar_Primo() {
    int num;

    while (num <= 0) {
        printf("Entre com um número: ");
        scanf("%d", &num);
    }
    if (EhPrimo(num)) printf("É primo\n");
    else printf("Não é primo\n");

    system("pause");
}

// 55
void Soma_N_Primeiros_Primos(){
    int N, soma = 0, cont = 0, i = 1;

    printf("Entre com um número: ");
    scanf("%d", &N);

    while (cont <= N) {
        if (EhPrimo(i)) {
            soma += i;
            cont += 1;
        }

        i++;
    }

    printf("A soma dos %d primeiros números primos é: %d\n", N, soma -1);
    system("pause");
}

// 56

void Soma_Primo_Abaixo_2kk() {
    unsigned int soma = 0;

    printf("\aALERTA! código MUITO lento (muitos números)\n");

    for (int i=2; i<2000001; i++)
        if (EhPrimo(i)) soma += i;

    printf("A soma entre os números primos abaixo de dois milhões é: %d\n", soma);
    system("pause");

}

// 57
void Qtd_Numeros_Primos_Entre_A_B() {
    int inicio, fim, Qtd_Primo = 1;

    printf("Entre com um número: ");
    scanf("%d", &inicio);

    printf("Entre com outro número: ");
    scanf("%d", &fim);

    while (inicio > fim) {
        printf("O valor de inicio deve ser maior que o final.\n");

        printf("Entre com um número: ");
        scanf("%d", &inicio);

        printf("Entre com outro número: ");
        scanf("%d", &fim);
    }

    while (inicio != fim) {
        if (EhPrimo(inicio)) {
			Qtd_Primo += 1;
		}
        inicio ++;
    }
    printf("Existem %d números primos entre %d e %d\n", Qtd_Primo, inicio, fim);
    system("pause");
}

// 58
void Soma_Numeros_Primos_Entre_A_B() {
    int inicio, fim, Soma_Primo = 1;

    printf("Entre com um número: ");
    scanf("%d", &inicio);

    printf("Entre com outro número: ");
    scanf("%d", &fim);

    while (inicio > fim) {
        printf("O valor de inicio deve ser maior que o final.\n");

        printf("Entre com um número: ");
        scanf("%d", &inicio);

        printf("Entre com outro número: ");
        scanf("%d", &fim);
    }

    while (inicio != fim) {
        if (EhPrimo(inicio)) {
			Soma_Primo += inicio;
		}
        inicio ++;
    }
    printf("A soma dos primos é: %d\n", Soma_Primo);
    system("pause");
}

// 59
void Consumo_Do_Mes() {
 	int qtd_hab, kwh,  *consumo, soma = 0, maior, menor;
 	char codigo = 'x';

 	consumo = (int*) calloc (3, sizeof(int));

 	printf("Qual a quantidade de habitantes? ");
 	scanf("%d", &qtd_hab);

 	for (int i=0; i<qtd_hab; i++) {
 		printf("Entre com o consumo do mês do %dº habitante: ", i+1);
 		scanf("%d", &kwh);

 		soma += kwh;

        while (codigo < '1' || codigo > '3') {
            printf("\nEntre com o código: \n");
            printf("[ 1 ] Residencial\n");
            printf("[ 2 ] Comercial\n");
            printf("[ 3 ] Industrial\n");
            codigo = getche();
            printf("\n\n");
        }

 		if (codigo == '1') consumo[0] += kwh;
 		else if (codigo == '2') consumo[1] += kwh;
 		else consumo[2] += kwh;

        codigo = 'x';

        if (i == 1) maior =  menor = kwh;

        else if (maior < kwh) maior = kwh;

        else if (menor > kwh) menor = kwh;
    }

    printf("Maior consumo: %d\n", maior);
    printf("Menor consumo: %d\n", menor);
    printf("Media de consumo: %d\n\n", soma / qtd_hab);
    printf("Total de consumo residencial: %d\n", consumo[0]);
    printf("Total de consumo comercial: %d\n", consumo[1]);
    printf("Total de consumo industrial: %d\n", consumo[2]);

    system("pause");
 }

// 60
void calculadora() {
    char opc = 'x';
    int i = 0, num = '1', soma = 0, cont = 0, maior, menor;

    while (opc < 'a' || opc > 'f') {
        printf("O que deseja? \n");
        printf("[ a ] Soma dos números digitados\n");
        printf("[ b ] Quantidade de números digitados\n");
        printf("[ c ] Média dos números digitados\n");
        printf("[ d ] Maior número digitado\n");
        printf("[ e ] Menor número digitado\n");
        printf("[ f ] Média dos números pares\n");
        printf("Opção: ");
        opc = getche();
        printf("\n");

        switch (opc) {
            case 'a':
                while (num != 0) {
                    printf("Entre com o numero: ");
                    scanf("%d", &num);
                    soma += num;
                }
                printf("A soma é %d\n", soma);
                break;

            case 'b':
                while (num != 0) {
                    printf("Entre com o numero: ");
                    scanf("%d", &num);
                    cont++;
                }
                printf("Você digitou %d números\n", cont-1);
                break;

            case 'c':
                while (num != 0) {
                    printf("Entre com o numero: ");
                    scanf("%d", &num);
                    soma += num;
                    cont++;
                }
                printf("A média dos números digitados é %d\n", soma / (cont -1));
                break;

            case 'd':
                while (num != 0) {
                    printf("Entre com o numero: ");
                    scanf("%d", &num);
                    if (cont == 0) maior = num;
                    if (num > maior) maior = num;
                    cont++;
                }
                printf("O maior número digitado foi: %d\n", maior);
                break;

            case 'e':
                while (num != 0) {
                    printf("Entre com o numero: ");
                    scanf("%d", &num);
                    if (cont == 0) menor = num;
                    if (num < menor && num != 0) menor = num;
                    cont++;
                }
                printf("O menor número digitado foi: %d\n", menor);
                break;

            case 'f':
                while (num != 0) {
                    printf("Entre com o numero: ");
                    scanf("%d", &num);
                    if (num % 2 == 0) {
                        soma += num;
                        cont ++;
                    }
                }
                printf("A média dos números digitados é %d\n", soma / (cont -1));
                break;
        }
    }

    system("pause");
}

// 61
int VerificaPalindromo (char numeroDigitado[]) {
    char s2[4];

    strcpy(s2,numeroDigitado);
    strrev(numeroDigitado);

    if(strcmp(numeroDigitado,s2) == 0) return 1;
    return 0;
}

void Maior_Palindromo() {
	char x[10];
	int aux = 0;
    for (int i=999; i>99; i--) {
        for (int j=999; j>=99; j--) {
			itoa(i * j, x, 10);
            if (VerificaPalindromo(x)) {
            	printf("%d x %d = %d\n", i, j, i * j );
            	aux = 1;
            	break;
			}
		}
	if (aux) break;
	}

	system("pause");
}

// 62
void Soma_Caractere_Num_extenso() {
    char num = 'x';

    while (num < '1' || num > '5') {
        printf("Entre com um número (digitos de 1 a 5)");
        scanf("%c", &num);
    }

    switch (num) {
        case '1':
            printf("2 letras utilizadas no total. \n");
            break;
        case '2':
            printf("4 letras utilizadas no total.\n");
            break;
        case '3':
            printf("4 letras utilizadas no total.\n");
            break;
        case '4':
            printf("6 letras utilizadas no total.\n");
            break;
        case '5':
            printf("5 letras utilizadas no total.\n");
            break;
    }

    system("pause");
}
