#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>
#include "funcoes.h"

// Exercicio 1
int area_maior_10 (int lado){
    int area  = lado * lado;

    if (area > 10) return 1;
    return 0;
}

 void perim_menor_10 (int lado) {
     if (perimetro_quadrado(lado) >10) printf("O perímetro é maior que 10.\n");
     else printf("O perímetro é menor que 10.\n");
 }

int perimetro_quadrado(int lado) {
    return (4 * lado);
}

float diagonal_quadrado() {
  int lado;

  printf("\nDigite o lado");
  scanf("%d", &lado);

  return(lado * sqrt(2));
}

void area_quadrado(int lado) {
    printf("\narea = %d", lado * lado);
}

// Exercicio 2

void calcular_imposto(float salario) {
    float imposto, total_imposto = 0;

    printf("Valor do imposto \n");

    if (salario > 1903.98){
            salario -= 1903.98;
            printf("0,00 \n");


        if (salario > 0) {
            salario -= 922.67;
            imposto = 922.67 * 7.5 / 100;
            total_imposto += imposto;
            printf("%.2f\n", imposto);

        } if (salario - 924.40 > 0) {
            salario -= 924.40;
            imposto = 924.40 * 15 / 100;
            total_imposto += imposto;
            printf("%.2f\n", imposto);


        } if (salario - 913.63 > 0) {
            salario -= 913.63;
            imposto = 913.63 * 22.5 / 100;
            total_imposto += imposto;
            printf("%.2f\n", imposto);


        } if (salario > 0) {
            imposto = salario * 27.5 / 100;
            total_imposto += imposto;
            salario -= salario;

            printf("%.2f\n", imposto);
        }
    }
    printf("\nTotal: %.2f\n", total_imposto);
}

void novo_salario(float salario){
    if  (salario <= 1000) printf("Novo salário: %.2f\n", (salario * 40 / 100) + salario);
    else if (salario <= 7500) printf("Novo salário: %.2f\n", (salario * 30 / 100) + salario);
    else if (salario <= 15000) printf("Novo salário: %.2f\n", (salario *  20 /100) + salario);
    else printf("Novo salário: %.2f\n", salario * 10 / 100);
}

void classificacao(float salario){
    if (salario <= 7000) printf("Mal remunerado.\n");
    else printf("Bem remunerado.\n");

}

// Exercicio 3
void BubbleSort(int *vet){
      for (int c=0; c<5; c++){
            bool troca = 0;

            for (int c2=c; c2<5; c2++){
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

void maior(int *num){
    BubbleSort(num);
    printf("O maior número é: %d", num[4]);
}

void menor(int *num){
    BubbleSort(num);
    printf("O menor número é: %d", num[0]);
}

void media(int *num){
    float x  = (num[0] + num[1]+ num[2]+ num[3]+ num[4])  / 5;
    printf("Média: %.2f", x);
}

void mediana(int *num){
    BubbleSort(num);
    printf("%d\n", num[2]);
}


int Moda(int *vet){
    int temp, elem, cont, moda = 0;

    for (int c = 0; c < 5; c++) {
        temp = vet[c];
        cont = 1;

        for (int c2=c+1; c2<5; c2++) {
            if(vet[c2] == temp) {
                cont++;
            }
        }

        if (moda < cont) {
            moda = cont;
            elem = vet[c];
        }
    }
    printf("A moda é: %d", elem);
}

// Exercicio 4
void andar() {
    if (_combustivel) {
            if (_combustivel - CONSUMO >= 0) {
                printf("\nO carro andou 1km.\n");
                _combustivel -= CONSUMO;
            } else printf("\nO carro não possui combustível suficiente.\n");
    }
    else printf("\nO carro está sem combustível.\n");
}

void adicionarGasolina(float litros){
    _combustivel += litros;
    printf("\nCarro abastecido! \n");
}

float obterGasolina() {
    return _combustivel;
}

// Exercicio 5
float imc (float peso,  float altura){
    printf("Seu IMC é: %.2f", peso / altura);
}

void envelhecer(int anos){
    for (int c=0; c<anos; c++){
        if (_idade < 21) _altura += 0.05;

        _idade += 1;
    }

    printf("\n\nEntão agora você tem %d anos e mede %.2f.\n", _idade, _altura);
}

void engordar(float kg){
    kg += _peso;

    printf("\n\nEntão agora você pesa %.2f KG\n", kg);
}

void emagrecer(float kg){
    kg -= _peso;

    printf("\n\nEntão agora você pesa %.2f KG\n", kg);
}

void crescer(){
    float qtd;

    printf("Quanto você cresceu?");
    fflush(stdin);
    scanf("%f", &qtd);

    _altura += qtd;

    printf("\n\nEntão agora você mede %.2f", _altura);
}

// Exercicio 6
void abastecerPorValor(float valor){
    printf("Foi abastecido %.2f litro(s)\n", valor / _valorLitro);
    _quantidadeCombustivel -= valor / _valorLitro;
}

void abastecerPorLitro(float litro){
    _quantidadeCombustivel -= litro;
    printf("Valor a cobrar: R$ %.2f \n", litro * _valorLitro);
}

void alterarValor(float valor){
    _valorLitro = valor;
    printf("\nValor do combustível alterado!\n");
}

void alterarCombustivel(char *c) {
   strcpy(_tipoCombustivel, c);
    printf("\nTipo de combustivel alterado!\n");
}

void alterarQuantidadeCombustivel(){
    printf("Entre com a nova quantidade de combustive: ");
    scanf("%f", _quantidadeCombustivel);
    printf("\nQuantidade de combustivel alterada!\n");
}

// Exercicio 7
void LerString(char *str, int n){
    printf("Entre com a string%d: ", n);
    fgets(str, 20, stdin);

    str[strlen(str)-1] = '\0';
}

void InverterString(char *str1) {
    int tam = strlen(str1);
    char aux[tam-1];

	if (tam == 1) LerString(str1, 1);

    strcpy(aux, str1);

    printf("A string1 invertida fica: %s\n", strrev(aux));
}

void TamanhoString(char *str1){
    if (strlen(str1) > 0) printf("A string1 tem %d caractere(s)!\n", strlen(str1));
    else printf("Você não digitou uma string ainda.\n");
}

void CompararString(char *str1, char *str2){

    if (strlen(str1) == 0 )  LerString(str1, 1);
    LerString(str2, 2);

    printf((strcmpi(str1, str2) == 0) ? "As strings são iguais!\n" : "A string %s é diferente da %s .\n", str1, str2);
}

void ConcatenarString(char *str1, char *str2){
            if (strlen(str1) == 0 && strlen(str2) == 0) {
                LerString(str1, 1);
                LerString(str2, 2);
            } else if (strlen(str1) > 0 && strlen(str2) == 0){
                LerString(str2, 2);
            } else LerString(str1, 1);

            char temp[20];
            strcpy(temp, str1);

            printf("Strings concatenadas: %s", strcat(temp, str2));
}



void OcorrenciaCaractere(char *str1){
    char car;
    int ocorrencias = 0, tam = strlen(str1);

    if (tam == 0) LerString(str1, 1);

    printf("Caractere que deseja contar: ");
    car = getche();
    printf("\n\n");

    for (int c=0; c<tam; c++) {
            if (str1[c] == car) ocorrencias += 1;
    }

    printf(ocorrencias != 0 ? "O caractere \"%c\" aparece %d vez(es) na string1.\n", car, ocorrencias : "Caractere não encontrado.\n");
}

void SubstituirOcorrencia(char *str1){
    char char1, *endereco;

    if (strlen(str1) == 0) LerString(str1, 1);

    while (!strchr(str1, char1)) {
        printf("Caractere que deseja substituir: ");
        char1 = getche();
        printf("\n");
        endereco = strchr(str1, char1);
    }


    printf("Por qual? ");
    *endereco = getche();
    printf("%c", endereco);
    printf("\n");

    printf("\nNova string: %s", str1);
}
