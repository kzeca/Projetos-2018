#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    //Questão 14

    float x1,x2,y1,y2,d;
    printf("Valor do x1:");
    scanf("%f", &x1);
    printf("Valor do y1:");
    scanf("%f", &y1);
    printf("Valor do x2:");
    scanf("%f", &x2);
    printf("Valor do y2:");
    scanf("%f", &y2);
    d= sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    printf("\n\nDistancia dos pontos:%.1f", d);
    printf("\n\n\nBYE!");
}
