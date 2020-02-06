#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    //Questão 16

    float p, pgn;
    int pg;
    printf("Insira o peso em kg:");
    scanf("%f", &p);
    pg= trunc(p*1000);
    pgn= pg+pg*3/25;
    printf("\n\nPeso da pessoa, em gramas:%d", pg);
    printf("\nPeso da pessoa que engordou, em gramas:%.2f", pgn);
    printf("\n\n\nBYE!");
}
