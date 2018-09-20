#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>

char dic [][20] = {"cat","gato", "katze", "saka",
                                "dog","cachorro", "hund", "alika",
                                "is", "é", "ist", "dia",
                                "bad","ruim", "schlecht", "ratsy",
                                "region","regiao", "regio", "faritra",
                                "shepherds","pastores", "hirten", "mpiandry ondry",
                                "field","campo", "feld", "an-tsaha",
                                "flock","rebanho", "herde", "ondry aman'osy",
                                "night","noite", "nacht", "alina",
                                "angel","anjo", "engel", "anjely",
                                "lord","senhor", "herr", "tompo ô",
                                "glory","glória", "ruhm", "voninahitra",
                                "great","ótimo", "grob", "lehib",
                                "fear","medo", "angst", "tahotra",
                                "god","Deus", "gott", "anbriamanitra",
                                "good","bom", "gut", "tsara",
                                "day","dia", "tag", "andro izany",
                                "city","cidade", "stadt", "tanàna",
                                "baby","bebe", "baby", "baby",
                                "earth","terra", "erde", "eto en-tany",
                                "peace","paz", "frieden", "fiadanana",
                                "highest","maior", "höchste", "ambony indrindra",
                                "to","para", "zu", "to",
                                "in","dentro", "im", "in",
                                "black","preto", "schwarz", "mainty",
                                "gorgeous","lindo", "herrlich", "tsara tarehy",
                                "work","trabalho", "arbint", "asa",
                                "wold","seria", "wold", "wold",
                                "orange","laranja", "orange", "voasary",
                                "butterfly","borboleta", "schmetterling", "lolo"};

char frase [50];
char palavra [11];
char *p;


void pega_palavra() {
  char *q;
  q = palavra;

  while (*p && *p!=' ') {
      *q = *p;
      p++;
      q++;
  }

  if (*p==' ')p++;
  *q='\0';
 }


 int traducao (int lingua) {
     int i;
     for(i=0; *dic[i]; i=i+2) {
        if(strcmp(dic[i], palavra)==0)
            break;
     }

    if(*dic[i]) return (i+lingua);
    else return (-1);
 }

int main() {
    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';
    int linha, opc;
    while(opcao == 's') {
        printf("\nDigite a frase desejada:");
        fflush(stdin);
        gets(frase);
        p = frase;

        printf("\nPara qual lingua deseja traduzir? \n");
        printf("| 1 | Português\n");
        printf("| 2 | Alemão\n");
        printf("| 3 | Malgaxe\n");
        printf("Opção: ");
        scanf("%d", &opc);
        pega_palavra();
        printf("\n");

        do {
                linha=traducao(opc);

                if(linha!=-1) printf("%s ",dic[linha]);
                else printf("%s ",palavra);

                pega_palavra(opc);

        } while(*palavra);
     printf("\nQuer traduzir outra frase?s/n\n");
     opcao = getche();
     tolower(opcao);
    }

    return 0;
}
