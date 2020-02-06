#include <stdio.h>
#include <stdlib.h>

main()
{
    //Questão 13

    float sm, v, vu, vp, c;
    printf("informe o valor do salario minimo atual:");
    scanf("%f", &sm);
    printf("Informe o valor consumido pela residencia:");
    scanf("%f", &c);
    vu= sm/1000;
    v=c*sm/1000;
    vp= v-v/10;
    printf("\n\nValor unitario do quilowatt:%.2f", vu);
    printf("\nValor total de consumo:%.2f", v);
    printf("\nValor a ser pago:%.2f", vp);
    printf("\n\n\nBYE!");

}
