#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

// Exercicio 1
int perimetro_quadrado(int lado);
void perim_menor_10 (int lado);
void area_quadrado(int lado);
int area_maior_10 (int lado);
float diagonal_quadrado();

// Exercicio 2
void calcular_imposto(float salario);
void novo_salario(float salario);
void classificacao(float salario);

// Exercicio 3
void BubbleSort(int *vet);
void mediana(int *num);
void menor(int *num);
void media(int *num);
void maior(int *num);
int Moda(int *vet);

// Exercicio 4
#define CONSUMO 3

void adicionarGasolina(float litros);
float obterGasolina();
void andar();

float _combustivel;

// Exercicio 5
float imc (float peso,  float altura);
void envelhecer(int anos);
void emagrecer(float kg);
void engordar(float kg);
void crescer();

int _idade;
float _peso, _altura;

// Exercicio 6
void alterarQuantidadeCombustivel();
void abastecerPorValor(float valor);
void abastecerPorLitro(float litros);
void alterarCombustivel(char *c);
void alterarValor(float valor);

float _valorLitro, _quantidadeCombustivel;
char _tipoCombustivel[10];

// Exercicio 7
void ConcatenarString(char *str1, char *str2);
void CompararString(char *str1, char *str2);
void OcorrenciaCaractere(char *str1);
void SubstituirOcorrencia(char *str1);
void TamanhoString(char *str1);
void LerString(char *str1, int n);
void InverterString(char *str1);

#endif // FUNCOES_H_INCLUDED
