#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nome(void)
{
    char nome[10][20], aux[20];
    int i,j;

    for(i=0;i<10;i++)
    {
        printf("Informe um nome: ");
        gets(nome[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(nome[i]>nome[j])
            {
                strcpy(nome[i], aux);
                strcpy(nome[j], nome[i]);
                strcpy(aux,nome[j]);
            }
        }
    }

    for(i=0;i<10;i++)
    {
        puts(nome[i]);
        printf("\n");
    }
}

main()
{
    nome();

    getch();
}

