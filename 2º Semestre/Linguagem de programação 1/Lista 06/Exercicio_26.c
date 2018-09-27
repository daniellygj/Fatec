#include <stdio.h>
#include <string.h>
#define TAM 50 

/* 26.  O codigo de cesar e uma das mais simples e conhecidas tecnicas de criptografia. e um tipo de substituicao na qual cada letra
do texto e substituida por outra, que se apresenta no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com
    uma troca de tres posicoes, "A" seria substituido por "D", B se tornaria E, e assim por diante.*/

int main(){
    char palavra[TAM], caractere, contvogal; // 123456
    int c, tam;
 
    fgets(palavra, TAM, stdin);
    tam = strlen(palavra);
    palavra[tam] = '\0';
 
    scanf("%c", &caractere);
 
    for (c=0; c<tam; c++){
        if (palavra[c] == 'a' || palavra[c] == 'e' || palavra[c] == 'i' || palavra[c] == 'o' || palavra[c] == 'u'){
            contvogal ++;
            palavra[c] = caractere;
        }
    }
 
    printf("%d\n%s",contvogal, palavra);
}
