#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 17

    float z, c, l;
    printf("Informe quantos kg de latao de se quer produzir:");
    scanf("%f", &l);
    z= l*3/10;
    c= l*7/10;
    printf("\n\nQuantidade de zinco necessaria, em kg:%.2f", z);
    printf("\nQuantidade de cobre necessaria, em kg:%.2f", c);
    printf("\n\n\nBYE!");
}
