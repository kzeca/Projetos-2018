#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    //Questão 20

    float n, nf;
    int na, ni;
    printf("Informe um numero:");
    scanf("%f", &n);
    nf= n- trunc(n);
    ni= trunc(n);
    na= round(n);
    printf("\n\nParte inteira:%d", ni);
    printf("\nParte fracionada:%.2f", nf);
    printf("\nNumero arrendondado:%d", na);
    printf("\n\n\nBYE!");

    getch();
}
