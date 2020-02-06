#include <stdio.h>
#include <stdlib.h>

main()
{
    // Questão 11

    float v, t, p;
    int m;
    printf("Informe o valor do produto:");
    scanf("%f", &v);
    printf("Informe o tempo de atraso, em meses:");
    scanf("%d", &m);
    printf("Informe a taxa:");
    scanf("%f", &t);
    p= v+v*(t/100)*m;
    printf("\n\nO valor da prestacao:%.2f", p);
    printf("\n\n\nBYE!");

    getch();
}
