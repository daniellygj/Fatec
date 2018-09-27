#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Faca um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor
com o consumo desses carros, isto e, quantos quilˆometros cada um deles faz com um litro de combustivel. Calcule e mostre:
(a) O modelo de carro mais economico;
(b) Quantos litros de combustıvel cada um dos carros cadastrados consome para percorrer uma distancia de 1.000 quilometros. */

int main() {
  char modelos[5][20], maisEco[20];
  float consumo[5], consuMaisEco;

  for (int i = 0; i < 5; i++) {
    fflush(stdin);

    printf("\nEntre com um modelo de carro: \n");
    fgets(modelos[i], 20, stdin);
    modelos[i][strlen(modelos[i])-1] = '\0';

    printf("Digite o consumo do carro (KM/L): \n");
    scanf("%f", &consumo[i]);

    consumo[i] *= 1000;

    if (i==0) {
      strcpy(maisEco, modelos[i]);
      consuMaisEco = consumo[i];
    }

    else if(consumo[i] > consuMaisEco) {
      strcpy(maisEco, modelos[i]);
      consuMaisEco = consumo[i];
    }
  }

  printf("Modelo mais economico: %s\nConsumo em 1000km: %.2f", maisEco, consuMaisEco);

  return 0;
}
