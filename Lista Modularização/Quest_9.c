#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char m[100][1000],m1[100][1000],aux[1000],pesq[1000];
int i;

void func(char* x)
{
    int cont=0;
    if(strcmp(aux,"P")==0)
    {
        for(i=0;i<10;i++)
        {
            if(strcmp(x,m1[i])==0)
            {
                cont=1;
                printf("traducao: %s\n",m[i]);
                break;
            }
        }
    }
    else
    {
        for(i=0;i<10;i++)
        {
            if(strcmp(x,m[i])==0)
            {
                printf("traducao: %s\n",m1[i]);
                cont=1;
                break;
            }
        }
    }

    if(cont==0) printf("traducao nao encontrada :(\n");
}


int main()
{
    printf("informe 10 linhas contendo respectivamente uma palavra em ingles e sua traducao em portugues\n\n");

    for(i=0;i<10;i++)
    {
         scanf("%s %s",m[i],m1[i]);
    }
    printf("\n\ninforme o idioma da palavra que se deseja traduzir(P,I): ");
    scanf("%s",aux);
    while(strcmp(aux,"P")==0||strcmp(aux,"I")==0)
    {
        printf("\n\ninforme a palavra a ser traduzida: ");
        scanf("%s",pesq);
        func(pesq);
        printf("\ninforme o idioma da palavra que se deseja traduzir(P,I): ");
        scanf("%s",aux);
    }
}
