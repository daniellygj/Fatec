#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void ler_equi();
void ler_varios();
float calcular_area_Wifi();
int capta_sinal(float x1, float y1);

typedef  struct {
    char cor[20];
    float xo;
    float yo;
    float raio;
}WF;


WF eq;
WF tabW[3];




#endif // FUNCOES_H_INCLUDED
