#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int ordem_crescente() ; // 1
int varias_medias(); // 2
int area_do_trapezio(); // 3
int tipo_triangulo(); // 4
int equacao_2_grau(); // 5

void BubbleSort(int *vet);
void ler_e_validar(float *var);
void pedir_opc(char *opc);

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc = 1, sair = 0;

    do {
        pedir_opc(&opc);

        switch (opc){
            case '1':
                ordem_crescente();
                break;

            case '2':
                varias_medias();
                break;

            case '3':
                area_do_trapezio();
                break;

            case '4':
                tipo_triangulo();
                break;

            case '5':
                equacao_2_grau();
                break;

            case '0':
                sair = 1;
                break;

            default:
                printf("Opção inválida, tente novamente. \n");
                pedir_opc(&opc);
        }
    } while (! sair);


    return 0;
}

int equacao_2_grau(){
    system("CLS");
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

     printf("\n\n");

    return 0;
}

int tipo_triangulo(){
    system("CLS");
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

    printf("\n\n");

    return 0;
}

void ler_e_validar(float *var){
    while (1) {
        scanf("%f", var);
        if (*var >= 0 && *var <= 10) return;
        printf("\nEntre com um numero maior que 0: ");
    }
}

int area_do_trapezio(){
    system("CLS");
    setlocale(LC_ALL, "portuguese");

    float basemaior, basemenor, altura;

    printf("Entre com a base maior: ");
    ler_e_validar(&basemaior);

    printf("Entre com a base menor: ");
    ler_e_validar(&basemenor);

    printf("Entre com a altura: ");
    ler_e_validar(&altura);

    printf("\n\nArea: %.2fm\n", ((basemaior + basemenor) * altura) / 2);
     printf("\n\n");
}

int varias_medias() {
    system("CLS");
    setlocale(LC_ALL, "portuguese");

    float media, n1, n2, n3;
    int opc;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &n1);

    printf("Entre com o segundo numero: ");
    scanf("%f", &n2);

    printf("Entre com o terceiro numero: ");
    scanf("%f", &n3);

    printf("\n\nEscolha o tipo de media: ");
    printf("\n| 1 | Geométrica\n");
    printf("| 2 | Ponderada\n");
    printf("| 3 | Harmônica\n");
    printf("| 4 | Aritmtica\n");
    printf("Opcao: ");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            printf("\n>%.2f\n", (n1 + n2 + n3) / 3);
            break;

        case 2:
            printf("%.2f\n", (n1 + (n2 * 2) + (n3 * 3) / 6));
            break;

        case 3:
            printf("\n%.2f\n", (1 / (1 / n1) + (1 / n2) + (1 / n3)));
            break;

        case 4:
            printf("\n%.2f\n", (n1 + n2 + n3) / 3);
            break;
    }
    printf("\n\n");
    return 0;
}

int ordem_crescente() {
    setlocale(LC_ALL, "portuguese");
    system("CLS");

    int num[3];

    printf("Entre com o primeiro número: ");
    scanf("%d", &num[0]);

    printf("Entre com o segundo número: ");
    scanf("%d", &num[1]);

    printf("Entre com o terceiro número: ");
    scanf("%d", &num[2]);

    BubbleSort(num);

    printf("\n%d  %d  %d\n", num[0], num[1], num[2]);
     printf("\n\n");
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

void pedir_opc(char *opc){

    printf("Escolha uma opção: \n");
    printf("| 0 | Sair\n");
    printf("| 1 | Ordem crescente (três numeros)\n");
    printf("| 2 | Medias\n");
    printf("| 3 | Calculo da area do trapezio\n");
    printf("| 4 | Tipos de triâgulo\n");
    printf("| 5 | Equação do 2º grau\n");
    printf("Opcao: ");
    fflush(stdin);
    scanf("%c", opc);

    printf("\n\n");
}

