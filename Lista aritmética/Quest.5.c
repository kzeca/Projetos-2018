#include <stdio.h>
#include <stdlib.h>

main()
{
    // Questão 5

    int D, d;
    float R, q;

    printf("Informe o dividendo:");
    scanf("%d", &d);
    printf("\n");

    printf("Informe o divisor:");
    scanf("%d", &D);
    printf("\n\n");

    q=(float)d/D;
    R= (d%D);

    printf("Dividendo:%d", d);
    printf("\nDivisor:%d", D);
    printf("\nQuociente:%.2f", q);
    printf("\nResto:%.2f", R);
    printf("\n\n\n");

    printf("BYE!");

    getch();
}
