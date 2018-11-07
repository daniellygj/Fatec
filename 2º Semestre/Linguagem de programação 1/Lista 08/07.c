#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  Faca um programa que converta coordenadas polares para cartesianas:
    - Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a) em radianos.
    - Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo que x = r * cosa e y = r * sina.  */

typedef struct  {
    float raio, argumento;
} Polar;

typedef struct {
    float x,y;
} Cartesiana;

int main() {

    Polar pol;
    Cartesiana car;

    printf("Entre com o  raio: ");
    scanf("%f",&pol.raio);
    printf("Entre com o valor do argumento: ");
    scanf("%f",&pol.argumento);

    car.x = pol.raio*cos(pol.argumento);
    car.y = pol.raio*sin(pol.argumento);

    printf("%f, %f",car.x,car.y);
    return 0;
}
