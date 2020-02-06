#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    // Questão 3

    float l, A, P, d;

    printf("Informe o lado do quadrado:");
    scanf("%f", &l);
    printf("\n\n");

    A= pow(l,2);
    P= l*4;
    d= l*sqrt(2);

    printf("Valor da area:%.2f", A);
    printf("\nValor do perimetro:%.2f", P);
    printf("\nValor da diagonal:%.2f", d);
    printf("\n\n\n");

    printf("BYE!");

    getch();
}
