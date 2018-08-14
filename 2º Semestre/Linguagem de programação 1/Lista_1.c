#include <stdio.h>
#include <locale.h>
#include <math.h>

/* 1. Crie  um algoritmo e um programa a em C que leia o tamanho do lado de um
quadrado e calcule o perímetro e área, imprimindo o resultado na tela */


int main(){
    setlocale(LC_ALL, "portuguese");

    float tamanho;

    printf("Entre com o tamanho: ");
    scanf("%f", &tamanho);

    printf("\nPerímetro: %.2f\nÁrea %.2f\n", tamanho * 4, pow(tamanho, 2));

    return 0;
}


/* 2. Crie um algoritmo e um programa em C que leia a largura e o comprimento de
um retângulo e calcule o perímetro e área, imprimindo o resultado na tela.*/


int main(){
    setlocale(LC_ALL, "portuguese");

    float base, altura;

    printf("Entre com a base: ");
    scanf("%f", &base);

    printf("Entre com a altura: ");
    scanf("%f", &altura);

    printf("\nPerimetro: %.2f\nArea: %.2f\n", (base + altura) * 2, base * altura);

    return 0;
}
/* 3. Crie um algoritmo e um programa em C que leia a medida de tres lados de um triangulo e calcule o
perimetro e area e imprima o resultado na tela */

int main(){
    setlocale(LC_ALL, "portuguese");

    float a, b, c;

    printf("Entre com o lado A ");
    scanf("%f", &a);

    printf("Entre com o lado B: ");
    scanf("%f", &b);

    printf("Entre com o lado C: ");
    scanf("%f", &c);

    float p = a + b + c / 2;

    printf("\nPerimetro: %.2f\nArea: %.2f\n", a+b+c, sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c)));
    return 0;
}

/* 4. Crie um algoritmo e um programa em C que leia a medida dos três lados de um triângulo e
determine se o perímetro é maior que 10, imprimindo o resultado na tela. */

int main(){
    setlocale(LC_ALL, "portuguese");

    float base, altura;

    printf("Entre com a base: ");
    scanf("%f", &base);

    printf("Entre com a altura: ");
    scanf("%f", &altura);

    float perimetro = base * 3;

    if (perimetro > 10.0) printf("\nO perímetro(%.2f) do triângulo é maior que 10.\n", perimetro);
    else printf("\nO perímetro(%.2f) do triângulo é menor que 10.\n", perimetro);

    return 0;
}

/* 5. Crie um algoritmo e um programa em C que leia a medida dos três lados de um triângulo e
determine se o triângulo é equilátero, isósceles ou escaleno, imprimindo o resultado na tela*/

int main(){
    setlocale(LC_ALL, "portuguese");

    float a, b, c; // Lados

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
}

/* 6. Crie um algoritmo e um programa em C que leia a medida dos três lados de um triângulo e
determine se o triângulo é acutângulo, obtusângulo ou retângulo, imprimindo o resultado na tela */

int main(){
    setlocale(LC_ALL, "portuguese");

    float a, b, c; // Lados

    printf("Entre com o angulo A: ");
    scanf("%f", &a);

    printf("Entre com o angulo B: ");
    scanf("%f", &b);

    printf("Entre com o angulo C: ");
    scanf("%f", &c);

    if (a + b >= c && a + c >= b && b + c >= a){

        if (a < 90 && b < 90 && c < 90)  printf("Triângulo acutangulo");

        else if (a > 90 || b > 90 || c > 90) printf("Triângulo obtusangulo");

        else if (a == 90 || b == 90 || c == 90) printf("Triângulo retangulo");

    } else printf("\nNão é possível formar um triângulo.\n");


    return 0;
}

/* 7. Crie   um algoritmo e um programa em C que leia peso e altura de uma pessoa e calcule o IMC,
imprimindo o resultado na tela. */

int main(){
    setlocale(LC_ALL, "portuguese");

    float peso, altura;

    printf("Entre com sua altura: ");
    scanf("%f", &altura);

    printf("Entre com seu peso: ");
    scanf("%f", &peso);

    printf("Seu IMC é: %.2f", peso / pow(altura, 2));

    return 0;
}

/* 8. Crie um algoritmo e um programa em C que leia os coeficientes a e b de uma função de 1º grau
e calcule x para y=0 (y = ax + b), imprimindo o resultado na tela. */

int main(){
    int a, b;

    printf("Entre com o valor de A: ");
    scanf("%d", &a);

    printf("Entre com o valor de B: ");
    scanf("%d", &b);

    printf("%d", -b / a);

    return 0;
}

/* 9. Crie um algoritmo e um programa em C que leia os coeficientes a, b e c de uma função de 2º grau
e calcule x para y=0, imprimindo o resultado na tela. */

int main(){
    float a, b, c;

    printf("Entre com o valor de A: ");
    scanf("%f", &a);

    printf("Entre com o valor de B: ");
    scanf("%f", &b);

    printf("Entre com o valor de C: ");
    scanf("%f", &c);

    float delta = pow(b, 2) - 4 * a * c;

    printf("%.2f, %.2f", (-b + sqrt(delta))  /(2 * a), (-b - sqrt(delta)) / (2 * a))

    return 0;
}

/* 10. Crie o fluxograma e o programa em C que leia o tamanho do raio de um círculo do e calcule o
perímetro e área, imprimindo o resultado na tela. */

#define PI 3.14

int main(){
    setlocale(LC_ALL, "portuguese");

    float raio;

    printf("Entre com o raio do circulo: ");
    scanf("%f", &raio);

    printf("Perímetro: %.1f\nÁrea: %.1f\n", 2.0 * PI * raio, PI * pow(raio, 2));

    return 0;
}
