#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 2

    int n, suce, ante;

    printf("Insira um numero:");
    scanf("%d", &n);
    printf("\n\n");
    suce= n+1;
    ante= n-1;

    printf("O antecessor do numero:%d", ante);
    printf("\nO sucessor do numero:%d", suce);
    printf("\n\n\n");

    printf("BYE!");

    getch();
}
