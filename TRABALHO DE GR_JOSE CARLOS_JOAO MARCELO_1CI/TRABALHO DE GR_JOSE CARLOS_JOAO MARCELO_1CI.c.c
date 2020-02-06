// José Carlos Peixoto Leão
// João Marcelo Amaral de Souza
//Turma: 1CI

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>

void intro(void) // ABERTURA
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    TRABALHO DE GR");
    Sleep(3000);
}

int menu(void) // MENU
{
    int op1;

    menu:
    system("cls");
    printf("----------MENU----------\n\n");
    printf("1. IPV4\n");
    printf("2. IPV6\n");
    printf("3. Creditos\n");
    printf("0. Sair\n");
    printf("\nSelecione uma opcao: ");
    scanf("%d", &op1);
    fflush(stdin);
    if(op1<0||op1>3){system("cls");printf("Informe uma opcao valida!");Sleep(3000); goto menu;}
    return op1;
}

void sair(void) // MENSAGEM DE SAIDA
{
    printf("Voltando ao menu ");
    Sleep(700);
    printf(".");
    Sleep(700);
    printf(".");
    Sleep(700);
    printf(".");
    Sleep(700);
}

void creditos(void) // CREDITOS
{
    printf("-----------CREDITOS----------\n\n");
    printf("- Jose Carlos\n");
    printf("- Joao Marcelo\n\n\n");
    Sleep(1000);
    sair();
}

void BINARIO_DECIMAL(void) // DE BINARIO PARA DECIMAL
{
    system("cls");
    char ip[100];
    int i,j,a[4];
    i=0;
    j=0;

    printf("Informe o IP: ");
    gets(ip);
    fflush(stdin);
    while(ip[i]!=00)
    {
        a[j] = 0;
        for(;(ip[i]!=46)&&(ip[i]!=00);i++)
        {
            if(ip[i]==48)
            {
                a[j]=a[j]<<1;
            }
            else
            {
                a[j]=a[j]<<1;
                a[j]++;
            }

        }
        j++;
        i++;
    }

    printf("\n\nIP em Decimal: %d.%d.%d.%d\n\n", a[0],a[1],a[2],a[3]);
    system("pause");
    system("cls");
    sair();
}

void DECIMAL_BINARIO(void) // DE DECIMAL PARA BINARIO
{
    system("cls");
    int a,b,c,d;
    char ponto1,ponto2,ponto3;
    char bina1[10],bina2[10], bina3[10], bina4[10];

    printf("Informe o IP: ");
    scanf("%d%c%d%c%d%c%d", &a,&ponto1,&b,&ponto2,&c,&ponto3,&d);

    itoa(a,bina1,2);
    itoa(b,bina2,2);
    itoa(c,bina3,2);
    itoa(d,bina4,2);

    printf("\n\nIP em Binario: %s.%s.%s.%s\n\n", bina1,bina2,bina3,bina4);
    system("pause");
    system("cls");
    sair();
}

void HEXADECIMAL_DECIMAL(void) // DE HEXADECIMAL PARA DECIMAL
{
    system("cls");
    int i=0,j,k=0,l, hexadecimal[8];
    char ip[40], aux[5], x[]={"0123456789abcdef"};

    printf("Informe o IP: ");
    gets(ip);
    fflush(stdin);
    while(ip[i]!=00)
    {
        for(j=3;j>=0;j--)
        {
            aux[j]=ip[i];
            i++;
        }

        hexadecimal[k]=0;

        for(j=0;j<4;j++)
        {
            l=0;
            while(aux[j]!=x[l])
            {
                l++;
            }

            hexadecimal[k]=hexadecimal[k]+l*pow(16,j);
        }
        i++;
        k++;
    }

    printf("\n\nIP em Decimal: %d:%d:%d:%d:%d:%d:%d:%d\n\n", hexadecimal[0],hexadecimal[1],hexadecimal[2],hexadecimal[3],hexadecimal[4],hexadecimal[5],hexadecimal[6],hexadecimal[7]);
    system("pause");
    system("cls");
    sair();

}

void DECIMAL_HEXADECIMAL(void) // DE DECIMAL PARA HEXADECIMAL
{
    system("cls");
    int a,b,c,d,e,f,g,h;
    char ponto1,ponto2,ponto3;
    char hexa1[10],hexa2[10],hexa3[10],hexa4[10],hexa5[10],hexa6[10],hexa7[10],hexa8[10];

    printf("Informe o IP: ");
    scanf("%d%c%d%c%d%c%d%c%d%c%d%c%d%c%d",&a,&ponto1,&b,&ponto2,&c,&ponto3,&d,&ponto1,&e,&ponto2,&f,&ponto3,&g,&ponto1,&h);

    itoa(a,hexa1,16);
    itoa(b,hexa2,16);
    itoa(c,hexa3,16);
    itoa(d,hexa4,16);
    itoa(e,hexa5,16);
    itoa(f,hexa6,16);
    itoa(g,hexa7,16);
    itoa(h,hexa8,16);

    printf("\n\nIP em Hexadecimal: %s:%s:%s:%s:%s:%s:%s:%s\n\n", hexa1,hexa2,hexa3,hexa4,hexa5,hexa6,hexa7,hexa8);
    system("pause");
    system("cls");
    sair();
}

main() // FUNCAO PRINCIPAL
{
    system("color f0");

    intro();

    int op, opcao_selecionada;

    do{
        op=menu();

        switch(op)
        {
            case 1:
                MENU_IPV4:
                system("cls");
                printf("----------IPV4----------\n\n");
                printf("1. BINARIO -> DECIMAL\n");
                printf("2. DECIMAL -> BINARIO\n");
                printf("0. VOLTAR AO MENU\n\n");
                printf("Opcao: ");
                scanf("%d", &opcao_selecionada);
                fflush(stdin);
                if(opcao_selecionada<0||opcao_selecionada>2){system("cls");printf("Informe uma opcao valida\n\n");system("pause");goto MENU_IPV4;}
                if(opcao_selecionada==1) BINARIO_DECIMAL();
                if(opcao_selecionada==2) DECIMAL_BINARIO();
                if(opcao_selecionada==0){system("cls");sair();}
                break;

            case 2:
                MENU_IPV6:
                system("cls");
                printf("----------IPV6----------\n\n");
                printf("1. HEXADECIMAL -> DECIMAL\n");
                printf("2. DECIMAL -> HEXADECIMAL\n");
                printf("0. VOLTAR AO MENU\n\n");
                printf("Opcao: ");
                scanf("%d", &opcao_selecionada);
                fflush(stdin);
                if(opcao_selecionada<0||opcao_selecionada>2){system("cls");printf("Informe uma opcao valida\n\n");system("pause");goto MENU_IPV6;}
                if(opcao_selecionada==1) HEXADECIMAL_DECIMAL();
                if(opcao_selecionada==2) DECIMAL_HEXADECIMAL();
                if(opcao_selecionada==0){system("cls");sair();}
                break;

            case 3:
                system("cls");
                creditos();
                break;

            case 0:
                system("cls");
                printf("Obrigado por utilizar! \n");
                Sleep(3000);
                break;
        }
    }while(op!=0);
}
