#include <stdio.h>
#include <stdlib.h>

void MDC(int a, int b)
{
    int resto;

    resto= a%b;

    while(resto!=0)
    {
        a=b;
        b=resto;
        resto=a%b;
    }
    printf("MDC dos numeros = %d", b);
}

main()
{
    int n1,n2;

    printf("Informe dois numeros: ");
    scanf("%d%d", &n1,&n2);
    MDC(n1,n2);
}
