#include <stdio.h>
#include <stdlib.h>

main()
{
    // Questão 7

    float em;
    int qmin, qmax;

    printf("Informe a quantidade minima do estoque:");
    scanf("%d", &qmin);
    printf("Informe a quantidade maxima do estoque:");
    scanf("%d", &qmax);
    em=(qmax+qmin)/2;
    printf("\n\nEstoque medio:%.1f\n\n\n", em);
    printf("BYE!");

    getch();

}
