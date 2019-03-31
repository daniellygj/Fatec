#include <stdio.h>

/* 3ª Lista de Eestrutura de Dados: Lista Encadeada
 *
 * 3 - Uma TV chega a cada 3min num setor de qualidade para inspeção. Apenas um técnico faz a inspeção no modo FIFO e
 * leva 4min por aparelho. Faça uma função para simular as inspeções. Quantas TVs saíram após 8 horas de trabalho?
 */

int simular() {
    int entra = 0;
    int sai = 0;
    int qtdsaiu = 0;

    for (int i = 3; i < 481; i++) {
        entra ++;
        sai ++;
        if (entra == 3) {
            entra = 0;
        }

        if (sai == 4) {
            sai = 0;
            qtdsaiu++;
        }
    }

    return qtdsaiu;
}


int main() {
    printf("%d", simular());

}
