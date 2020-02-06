#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 15

    int d, n;
    printf("O numero de lados do poligono:");
    scanf("%d", &n);
    d= (n*(n-3))/2;
    printf("\n\nNumero de diagonais do poligono:%d", d);
    printf("\n\n\nBYE!");
}
