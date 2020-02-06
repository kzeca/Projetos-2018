#include <stdio.h>
#include <stdlib.h>

main()
{
    // Questão 1

    int N, D;
    float M, Q;

    printf("Insira o numero:");
    scanf("%d", &N);
    printf("\n\n");

    D= N*2;
    M=(float) N/2;
    Q=(float) N/4;

    printf("O dobro:%d", D);
    printf("\nA metade:%.2f", M);
    printf("\nO quarto:%.2f", Q);
    printf("\n\n\n");

    printf("BYE!");

    getch();
}
