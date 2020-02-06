#include <stdio.h>
#include <stdlib.h>


void desenho(int a)
{
    int L, aux=1,i, j;

    L=(2*a)-1;
    for(i=0;i<(L-1)/2;i++)
    {
        for(j=0;j<aux;j++)
        {
            printf(". ");
        }
        printf("\n");
        aux+=2;
    }

    for(i=0;i<(L-1)/2;i++)
    {
        for(j=0;j<aux;j++)
        {
            printf(". ");
        }
        printf("\n");
        aux-=2;
    }



}

main()
{
    int J;

    printf("Informe J: ");
    scanf("%d", &J);
    desenho(J);
    getch();
}
