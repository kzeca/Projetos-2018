#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 12

    char n1[20],n2[20],n3[20],n4[20],n5[20];
    float p1,p2,p3,p4,p5,pt,pm;
    printf("Informe o nome do primeiro comprador:");
    scanf("%s", &n1);
    printf("Preco da compra do primeiro comprador:");
    scanf("%f", &p1);
    printf("\n");
    printf("Informe o nome do segundo comprador:");
    scanf("%s", &n2);
    printf("Preco da compra do segundo comprador:");
    scanf("%f", &p2);
    printf("\n");
    printf("Informe o nome do terceiro comprador:");
    scanf("%s", &n3);
    printf("Preco da compra do terceiro comprador:");
    scanf("%f", &p3);
    printf("\n");
    printf("Informe o nome do quarto comprador:");
    scanf("%s", &n4);
    printf("Preco da compra do quarto comprador:");
    scanf("%f", &p4);
    printf("\n");
    printf("Informe o nome do quinto comprador:");
    scanf("%s", &n5);
    printf("Preco da compra do quinto comprador:");
    scanf("%f", &p5);
    printf("\n\n");
    pt= p1+p2+p3+p4+p5;
    pm= pt/5;
    printf("Valor total de compra de todos:%.2f", pt);
    printf("\nValor medio de compra:%.2f", pm);
    printf("\n\n\nBYE!");

    getch();

}
