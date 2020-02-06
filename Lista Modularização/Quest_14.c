#include <stdio.h>
#include <stdlib.h>

int MMC(void)
{
    int resto, a,b, n1,n2;

    printf("Informe o N1: ");
    scanf("%d", &n1);
    printf("Informe o N2: ");
    scanf("%d", &n2);
    a=n1;
    b=n2;


    do{
        resto=a%b;
        a=b;
        b=resto;
    }while(resto!=0);

    return (n1*n2)/a;
}

main()
{
    int r;
    r=MMC();
    printf("\n\nMMC: %d", r);
    getch();
}
