#include <stdio.h>
#include <stdlib.h>

main()
{
    // Questão 4

    float P, VD, C;

    printf("Valor do produto em reais:");
    scanf("%f", &P);
    printf("\n");

    printf("Valor da cotacao do dolar:");
    scanf("%f", &C);
    printf("\n\n");

    VD= P/C;

    printf("Valor do produto em dolares:%.2f", VD);
    printf("\n\n\n");

    printf("BYE!");

    getch();

}
