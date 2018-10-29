#include "funcoes.h"

void ler_equi() {
  printf("\nDigite cor do equipamento:\n");
  fgets(eq.cor, 20, stdin);
  printf("\nDigite o raio de equipamento:\n");
  scanf("%f",&eq.raio);
  printf("\nDigite a posicao no eixo x:\n");
  scanf("%f",&eq.xo);
  printf("\nDigite a posicao no eixo y:\n");
  scanf("%f",&eq.yo);
}


void ler_varios() {
	for(int i = 0;i < 3;i++) {
    printf("\nDigite cor do equipamento:\n");
    fgets(tabW[i].cor, 20, stdin);
    printf("\nDigite o raio de equipamento:\n");
    scanf("%f",&tabW[i].raio);
    printf("\nDigite a posição no eixo x:\n");
    scanf("%f",&tabW[i].xo);
    printf("\nDigite a posição no eixo y:\n");
    scanf("%f",&tabW[i].yo);
	}
}

float calcular_area_Wifi() {
   return(3.14*eq.raio*eq.raio);
}

int capta_sinal(float x1, float y1) {
  float b,c,a;
  b=eq.xo-x1;
  c=eq.yo-y1;
  a=sqrt((b*b)+(c*c));
  printf("\na=%.2f,b=%.2f,c=%.2f",a,b,c);
  if (a<=eq.raio)return 1;
  else return 0;
}

