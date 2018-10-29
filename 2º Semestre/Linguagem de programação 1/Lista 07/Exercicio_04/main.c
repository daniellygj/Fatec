#include "funcoes.h"

int main() {
    setlocale(LC_ALL, "portuguese");

    char opc;
    float h,v;
    do {
        printf("\n|1|Ler atributos\n|2|Area\n|3|Capta?\n|4|Sair\n|5|Ler tres roteadores\n");
        opc=getche();

        printf("\n");

        switch(opc) {
            case '1':
                ler_equi();
                break;

            case '2':
                printf("\nArea: %.2f",calcular_area_Wifi());
                break;

            case '3':
                printf("\nDigite a posi��o do dispositivo(x,y)\n");
                scanf("%f,%f",&h,&v);

                if(capta_sinal(h,v)==1)
                    printf("\nDentro da area\n");
                else
                    printf("\nFora da area\n");

                break;

            case '4':
                break;

            case '5':
                ler_varios();
            break;

            default: printf("\nOp invalida\n");
        }

        printf("\n");
        system("pause");
        system("cls");

    } while(opc != '4');

    return 0;
}
