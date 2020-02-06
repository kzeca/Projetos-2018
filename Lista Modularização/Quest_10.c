#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aux;

void inverte(char a[50])
{
    printf(strrev(a));
    printf("\n\n");
    system("pause");
}

void um_a_cem(void)
{
    if(aux%11==0)
    {
        printf("%d ", aux);
    }
}

main()
{
    char num[50], r[50];
    int op,i;

    do{

        aux=1;
        system("cls");
        printf("1. Inverter Numero \n");
        printf("2. Exibir palindromos de 1 a 100\n");
        printf("0. Sair\n\n");
        printf("Opcao: ");
        scanf("%d", &op);
        fflush(stdin);
        switch(op)
        {
            case 1:
                system("cls");
                printf("Informe um numero: ");
                gets(num);
                fflush(stdin);
                inverte(num);
                break;

            case 2:
                for(i=1;i<=100;i++)
                {
                    um_a_cem();
                    aux++;
                }
                printf("\n\n");
                system("pause");
                break;

        }
    }while(op!=0);
}
