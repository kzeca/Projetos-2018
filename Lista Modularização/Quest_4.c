#include <stdio.h>
#include <stdlib.h>

void SINAL(int a)
{
    if(a>0)
    {
        printf("POSITIVO\n\n");
    }
    if(a<0)
    {
        printf("NEGATIVO\n\n");
    }
    if(a==0)
    {
        printf("ZERO\n\n");
    }
}

main()
{
    int N;

    printf("Informe um numero: ");
    scanf("%d", &N);
    SINAL(N);
}
