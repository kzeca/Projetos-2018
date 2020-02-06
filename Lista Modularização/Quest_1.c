#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float r;

int funcao(void)
{
    int op1;

    printf("-----Calculadora----\n\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. N elevado a M\n");
    printf("6. Raiz Quadrada\n");
    printf("0. Sair\n");
    printf("\nOpcao escolhida: ");
    scanf("%d", &op1);
    return op1;
}

void soma(float a, float b)
{
    r=a+b;
    printf("Resultado: %.2f", r);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
}

void subtraco(float a, float b)
{
    r=a-b;
    printf("Resultado: %.2f", r);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
}

void multiplicao(float a, float b)
{
    r=a*b;
    printf("Resultado: %.2f", r);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
}

void divisao(float a, float b)
{
    r= a/b;
    printf("Resultado: %.2f", r);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
}

void potencia(float a, float b)
{
    r=pow(a,b);
    printf("Resultado: %.2f", r);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
}

void raiz_quadrada(float a)
{
    r=sqrt(a);
    printf("Resultado: %.2f", r);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
}


main()
{
    int aux=0;

    do{
        float v1, v2;
        int op;

        op= funcao();

        switch(op)
        {
            case 1:
                system("cls");
                printf("Informe A: ");
                scanf("%f", &v1);
                printf("Informe B: ");
                scanf("%f", &v2);
                soma(v1,v2);
                break;

            case 2:
                system("cls");
                printf("Informe A: ");
                scanf("%f", &v1);
                printf("Informe B: ");
                scanf("%f", &v2);
                subtraco(v1,v2);
                break;

            case 3:
                system("cls");
                printf("Informe A: ");
                scanf("%f", &v1);
                printf("Informe B: ");
                scanf("%f", &v2);
                multiplicao(v1,v2);
                break;

            case 4:
                system("cls");
                printf("Informe A: ");
                scanf("%f", &v1);
                printf("Informe B: ");
                scanf("%f", &v2);
                divisao(v1,v2);
                break;

            case 5:
                system("cls");
                printf("Informe A: ");
                scanf("%f", &v1);
                printf("Informe B: ");
                scanf("%f", &v2);
                potencia(v1,v2);
                break;

            case 6:
                system("cls");
                printf("Informe A: ");
                scanf("%f", &v1);
                raiz_quadrada(v1);
                break;

            case 0:
                system("cls");
                printf("Obrigado por usar!\n\n");
                system("pause");
                aux=1;
        }

    }while(aux==0);
}
