#include <stdio.h>
#include <stdlib.h>

main()
{
    while(1)
    {


        int i,j,k=0,l=0,N,aux, cont1=0, cont2=0, round=1, Sa=0, Sb=0;

        printf("Informe o tamanho do mapa\n\n\n");
        printf("Tecle 1 para um mapa 5x5\n");
        printf("Tecle 2 para um mapa 6x6\n");
        printf("Tecle 3 para um mapa 7x7\n");
        printf("Tecle 4 para um mapa 8x8\n");
        printf("Tecle 5 para um mapa 9x9\n");
        printf("Tecle 0 para sair\n");
        printf("Opcao de mapa: ");
        scanf("%d", &N);
        if(N<0||N>5) printf("\nEscolha uma opcao valida\n\n");
        system("pause");
        system("cls");
        if(N==0) break;

        if(N==1)
        {
            int MATA[5][5],MATB[5][5], contB=3, contS=2, contA=1;

            inicio:
            printf("Player 1!\n\n");
            while(1) // While para controlar o posicionamento das embarções do player 1
            {
                for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        MATA[i][j]=0;
                    }
                }

                printf("   POSICIONE OS BARCOS!\n\n\n");
                while(contB>0)
                {
                    voltar1:
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATA[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nLinha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto voltar1;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto voltar1;
                    }
                    if(MATA[i-1][j-1]==0)
                    {
                        MATA[i-1][j-1]= 1;
                        contB--;
                    }
                    else
                    {
                        printf("Posicao ja ocupada!\n\n\n");
                        system("pause");
                        system("cls");
                        goto voltar1;
                    }
                    system("cls");
                }

                printf("    POSICIONE OS SUBMARINOS!\n\n\n");
                while(contS>0)
                {
                    voltar2:
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATA[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nLinha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto voltar2;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto voltar2;
                    }
                    if(MATA[i-1][j-1]==0)
                    {
                        MATA[i-1][j-1]= 2;
                        contS--;
                    }
                    else
                    {
                        printf("Posicao ja ocupada!\n\n\n");
                        system("pause");
                        system("cls");
                        goto voltar2;
                    }
                    system("cls");
                }

                printf("   POSICIONE O AVIAO!\n\n\n");
                while(contA>0)
                {
                    voltar3:
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATA[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nLinha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto voltar3;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto voltar3;
                    }
                    if(MATA[i-1][j-1]==0)
                    {
                        MATA[i-1][j-1]= 3;
                        contA--;
                    }
                    else
                    {
                        printf("Posicao ja ocupada!\n\n\n");
                        system("pause");
                        system("cls");
                        goto voltar3;
                    }
                    system("cls");
                }

                for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        printf("%d ", MATA[i][j]);
                    }
                    printf("\n");
                }
                printf("\nVoce tem certeza que deseja ser essa sua formacao?(Ela nao poderada ser altera durante o turno)\n\nTecle 1 para sim e 0 para nao\n");
                scanf("%d", &aux);
                if(aux==1)
                {
                    contB=3;
                    contS=2;
                    contA=1;
                    system("cls");
                    break;
                }
                else
                {
                    contB=3;
                    contS=2;
                    contA=1;
                    system("cls");
                }

            }

            printf("Player 2!\n\n");
            while(1) // While para controlar o posicionamento das embarcaçõesdo player 2
            {
                for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        MATB[i][j]=0;
                    }
                }

                printf("   POSICIONE OS BARCOS!\n\n\n");
                while(contB>0)
                {
                    VOLTAR1:
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATB[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nLinha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR1;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR1;
                    }
                    if(MATB[i-1][j-1]==0)
                    {
                        MATB[i-1][j-1]= 1;
                        contB--;
                    }
                    else
                    {
                        printf("Posicao ja ocupada!\n\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR1;
                    }
                    system("cls");
                }

                printf("   POSICIONE OS SUBMARINOS\n\n\n");
                while(contS>0)
                {
                    VOLTAR2:
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATB[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nLinha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR2;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR2;
                    }
                    if(MATB[i-1][j-1]==0)
                    {
                        MATB[i-1][j-1]= 2;
                        contS--;
                    }
                    else
                    {
                        printf("Posicao ja ocupada!\n\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR2;
                    }
                    system("cls");
                }

                printf("   POSICIONE O AVIAO!\n\n\n");
                while(contA>0)
                {
                    VOLTAR3:
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATB[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nLinha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR3;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR3;
                    }
                    if(MATB[i-1][j-1]==0)
                    {
                        MATB[i-1][j-1]= 3;
                        contA--;
                    }
                    else
                    {
                        printf("Posicao ja ocupada!\n\n\n");
                        system("pause");
                        system("cls");
                        goto VOLTAR3;
                    }
                    system("cls");
                }

                for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        printf("%d ", MATB[i][j]);
                    }
                    printf("\n");
                }
                printf("\nVoce tem certeza que deseja ser essa sua formacao?(Ela nao poderada ser altera durante o turno)\n\nTecle 1 para sim e 0 para nao\n");
                scanf("%d", &aux);
                if(aux==1)
                {
                    contB=3;
                    contS=2;
                    contA=1;
                    system("cls");
                    break;
                }
                else
                {
                    contB=3;
                    contS=2;
                    contA=1;
                    system("cls");
                }

            }

            printf("\tHORA DE JOGAR!\n     AO ATAQUE SENHORES!\n\n\n");
            while(cont1<3||cont2<3) // Ataque
            {
                printf("    Round %d\n\n\n", round);
                do{
                    printf("\tVez do Player 1!\n\n");
                    system("pause");
                    system("cls");

                    Ataque1:
                    printf("Estado dos seus navios: \n\n");
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATA[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\nPlayer 1 Ataca!\n\n");
                    printf("Linha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto Ataque1;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto Ataque1;
                    }
                    if(MATB[i-1][j-1]>0)
                    {
                        MATB[i-1][j-1]=MATB[i-1][j-1]-1;
                        k++;
                    }
                    system("cls");

                    printf("\tVez do Player 2\n\n");
                    system("pause");
                    system("cls");

                    Ataque2:
                    printf("Estado dos seus navios: \n\n");
                    for(i=0;i<5;i++)
                    {
                        printf("\t");
                        for(j=0;j<5;j++)
                        {
                            printf("%d ", MATB[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\nPlayer 2 Ataca!\n\n");
                    printf("Linha: ");
                    scanf("%d", &i);
                    if(i<1||i>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto Ataque2;
                    }
                    printf("Coluna: ");
                    scanf("%d", &j);
                    if(j<1||j>5)
                    {
                        printf("\n\nCoordenada invalida!\nDigite um numero de 1 a 5\n\n");
                        system("pause");
                        system("cls");
                        goto Ataque2;
                    }
                    if(MATA[i-1][j-1]>0)
                    {
                        MATA[i-1][j-1]=MATA[i-1][j-1]-1;
                        l++;
                    }
                    system("cls");

                    printf("Tecle Enter para exibir resultados!\n\n");
                    system("pause");
                    system("cls");

                    if(k>0) printf("UOU Player 1, Voce acertou em algo! :o \n\n");
                    else printf ("SPLASH! Pelo menos vai ter peixe pra caldeirada, ne player 1?!...\n\n");
                    if(l>0) printf("UOU Player 2, Voce acertou em algo! :o \n\n");
                    else printf("SPLASH! Pelo menos vai ter peixe pra caldeirada, ne player 2?!...\n\n");
                    k=0;
                    l=0;

                    for(i=0;i<5;i++)
                    {
                        for(j=0;j<5;j++)
                        {
                            Sa+=MATA[i][j];
                            Sb+=MATB[i][j];
                        }
                    }
                    system("pause");
                    system("cls");

                    if(Sa==0)
                    {
                        printf("\n\tCARACA PLAYER 2!\n\tTU DESTRUIU O CARA!\n\n");
                        system("pause");
                        cont2++;
                        system("cls");
                        break;
                    }
                    if(Sb==0)
                    {
                         printf("\n\tCARACA PLAYER 1!\n\tTU DESTRUIU O CARA!\n\n");
                         system("pause");
                         cont1++;
                         system("cls");
                         break;
                    }

                    Sa=0;
                    Sb=0;

                }while(1);
                round++;
                printf("\tPLACAR\n\n\tPlayer 1 (%d) vs (%d) Player 2\n\n\n", cont1, cont2);
                system("pause");
                system("cls");
                if(cont1!=3&&cont2!=3)
                {
                    printf("Voltando ao posicionamento das embarcacoes!\n\n");
                    system("pause");
                    system("cls");
                    goto inicio;
                }
            }

            if(cont1==3) printf("\tOtima vitoria para player 1\n\n\tPlayer 2, treine mais um pouco\n\n");
            if(cont2==3) printf("\tOtima vitoria para player 2\n\n\tPlayer 1, treine mais um pouco\n\n");
        }
    }

    getch();
}
