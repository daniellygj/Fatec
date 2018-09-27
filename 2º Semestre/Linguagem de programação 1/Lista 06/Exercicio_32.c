#include <stdio.h>
#include <string.h>

/*32. Leia uma cadeia de caracteres no formato "DD/MM/AAAA" e copie o dia, mes e ano para 3 variaveis inteiras. Antes disso,
verifique se as barras estão no lugar certo, e se DD, MM, AAAA,  são numéricos*/


int main() {
    char data[11];
    int dia, mes, ano, i = 0, invalido = 1, *p;

        printf("Entre com uma data (DD/MM/AAAA): \n");
        fgets(data, 11, stdin);
        data[10] = '\0';

        while ((data[i] != '/' && data[i] < 0 || data[i] > 9 && data[2] != '/' && data[5] != '/' )) {
           printf("Entre com uma data (DD/MM/AAAA): \n");
            fgets(data, 11, stdin);
            data[10] = '\0';

           i++;
    }


    dia = atoi(strtok(data, "/"));
    mes = atoi(strtok(NULL, "/"));
    ano = atoi(strtok(NULL, "/"));


    printf("%d/%d/%d", dia,mes,ano);

    return 0;
}
