#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 6

    float f, c;
    printf("Informe o valor em Celsius:");
    scanf("%f", &c);
    printf("\n\n");

    f=(9*c+160)/5;

    printf("Valor convertido em oF:%.1f\n", f);
    printf("Valor em oC:%.1f\n\n\n", c);
    printf("BYE!");

    getch();
}
