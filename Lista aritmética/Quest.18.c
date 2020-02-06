#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 18

    int p, c, n , qa;
    printf("Informe a quantidade de cafe:");
    scanf("%d", &c);
    printf("Informe o numero de notas de 5:");
    scanf("%d", &n);
    p= 5*n- 7*c;
    if (p>=0)
    {
        printf("Houve perda de:%d", p);
    }
    else
    {
        qa= p*(-1);
        printf("Insira mais:%d", qa);
    }
    printf("\n\n\nBYE!");

    getch();
}
