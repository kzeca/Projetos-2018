#include <stdio.h>
#include <stdlib.h>

main()
{
    // Questão 9

    char n[100];
    float s, t, v;
    printf("Informe o nome do vendedor:");
    scanf("%s", &n);
    printf("Informe o salario fixo do vendendor:");
    scanf("%f", &s);
    printf("Total de vendas, em dinheiro:");
    scanf("%f", &v);
    t= s+v* 15/100;
    printf("\n\nValor total que o funcionario vai receber ao final do mes:%.2f", t);
    printf("\n\n\nBYE!");

    getch();
}
