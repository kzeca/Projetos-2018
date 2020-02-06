#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 19

    int n, c, d, u;
    printf("Informe um numero no formato CDU:");
    scanf("%d", &n);
    c= n/100;
    d= (n%100)/10;
    u= (n%100)%10;
    printf("\n\nNovo valor em UDC:%d", u);
    printf("%d", d);
    printf("%d", c);
    printf("\n\n\nBYE!");

    getch();

}
