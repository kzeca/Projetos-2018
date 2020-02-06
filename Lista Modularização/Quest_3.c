#include <stdio.h>
#include <stdlib.h>


void metade(float elemento,int j)
{
    float met;

    met= elemento/2;
    printf("Metade do %do numero: %.2f\n\n", j+1, met);
}

main()
{
    float N;
    int i;

    for(i=0;i<10;i++)
    {
        printf("%do elemento: ", i+1);
        scanf("%f", &N);
        metade(N,i);
    }

    printf("\n\n");
    system("pause");
    system("cls");
    printf("Volte sempre!\n\n");
    system("pause");
}
