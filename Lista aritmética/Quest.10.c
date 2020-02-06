#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 10

    float cf, cc;
    printf("Informe o custo de fabrica:");
    scanf("%f", &cf);
    cc= cf+ cf*7/25 + cf*9/50;
    printf("\n\nO valor para o consumidor:%.2f", cc);
    printf("\n\n\nBYE!");

    getch();
}
