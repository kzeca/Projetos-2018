#include <stdio.h>
#include <stdlib.h>

void primo(int a)
{
    int i,aux=0;
    for(i=1;i<=a;i++)
    {
       if(a%i==0)
       {
           aux++;
       }
    }
    if(aux>2)
    {
        printf("Numero nao eh primo!");
    }
    else printf("Numero eh primo!");
}

main()
{
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);
    primo(n);
}
