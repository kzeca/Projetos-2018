#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resultado;

int menu(void)
{
    int op1;
    printf("1. Carcular area do circulo\n");
    printf("2. Carcular area do triangulo\n");
    printf("3. Calcular area do paralelogramo/trapezio\n");
    printf("0. Sair\n");
    printf("\n\nOpcao: ");
    scanf("%d", &op1);
    return op1;
}

float circulo(void)
{
    float pi=3.14, R;

    printf("Informe o raio da circunferencia: ");
    scanf("%f", &R);
    resultado= pi*pow(R,2);
    return resultado;
}

float triangulo(void)
{
    float B, h;

    printf("Informe a Base do Triangulo: ");
    scanf("%f", &B);
    printf("Informe a Altura do Triangulo: ");
    scanf("%f", &h);
    resultado= (B*h)/2;
    return resultado;
}

float paralelograma(void)
{
    float B, b, h;

    printf("Informe a Base Maior: ");
    scanf("%f", &B);
    printf("Informe a Base Menor: ");
    scanf("%f", &b);
    printf("Informe a Altura: ");
    scanf("%f", &h);
    resultado= ((B+b)*h)/2;
    return resultado;
}

main()
{
    int op;
    float A;

    do{

        op=menu();
        switch(op)
        {
            case 1:
                system("cls");
                A=circulo();
                printf("\n\nArea do Circulo: %.2f\n\n", A);
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                A=triangulo();
                printf("\n\nArea do Triangulo: %.2f\n\n", A);
                system("pause");
                system("cls");
                break;

            case 3:
                system("cls");
                A=paralelograma();
                printf("\n\nArea do Paralelogramo: %.2f\n\n", A);
                system("pause");
                system("cls");
                break;

            case 0:
                system("cls");
                printf("Obrigado por utilizar!\n\n");
                system("pause");
                system("cls");
                break;
        }

    }while(op!=0);
}
