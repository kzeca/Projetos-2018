#include <stdio.h>
#include <stdlib.h>

int caracteristica(void)
{
    int N, a, b,S,resultado;
    printf("Informe o numero: ");
    scanf("%d", &N);
    a=N/100;
    b=N%100;
    S=a+b;
    if(S*S==N) resultado=1;
    else resultado=0;

    return resultado;
}

main()
{
    int r;
    r=caracteristica();
    printf("\n\n\n%d", r);
}

