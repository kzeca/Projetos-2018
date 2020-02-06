#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 8

    float pp1, pp2, pts, ptc, D;
    char p1[100], p2[100];

    printf("Nome do primeiro produto:");
    scanf("%s", &p1);
    printf("Valor do primeiro produto:");
    scanf("%f", &pp1);
    printf("\nNome do segundo produto:");
    scanf("%s", &p2);
    printf("Valor do segundo produto:");
    scanf("%f", &pp2);
    pts= pp1+pp2;
    D= pts*1/5;
    ptc= pts - D;
    printf("\n\nNome do primeiro produto:%s", p1);
    printf("\nValor do primeiro produto:%.2f", pp1);
    printf("\nNome do segundo produto:%s", p2);
    printf("\nValor do segundo produto:%.2f", pp2);
    printf("\nValor sem desconto:%.2f", pts);
    printf("\nValor com desconto:%.2f", ptc);
    printf("\n\n\nBYE!");

    getch();
}
