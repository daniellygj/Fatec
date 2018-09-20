#include <stdio.h>
#include <string.h>

void InverteSubstitui(char *frase, int t) {
    strrev(frase);

    for (int i=0; i<t; i++) {
        if (*frase == 'a')
            *frase = '*';
        frase ++;
    }
}
